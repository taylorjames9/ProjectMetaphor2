using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;

public class MainDBScript : MonoBehaviour
{
	DatabaseReference reference; 
	
	[SerializeField]
	private GameObject parentOfAllPrompts;

	public GameObject promptHolder_prefab;
	public GameObject emptyMet;
	    void Start()
    {
        // Set this before calling into the realtime database.
        FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://projectmetaphor2.firebaseio.com/");

        // Get the root reference location of the database.
        reference = FirebaseDatabase.DefaultInstance.RootReference;
		Debug.Log(reference.ToString());

        /////writeNewUser("taylorjames9", "James Taylor", "taylorjames9@gmail.com");
        /////writeNewUser("billoby", "Bill Wighton", "bill@hotmail.com");

        FirebaseDatabase.DefaultInstance
  .GetReference("prompts")
  .GetValueAsync().ContinueWith(task =>
  {
      if (task.IsFaulted)
      {
          // Handle the error...
          Debug.Log("There was an error retrieving the data...");
      }
      else if (task.IsCompleted)
      {
          DataSnapshot allPrompts = task.Result;
          Debug.Log("Snapshot = " + allPrompts.ChildrenCount.ToString());
          Debug.Log("printing content of prompt 3" + allPrompts.Child("prompt003").Child("content").GetRawJsonValue());
          int i = 1;
		  foreach (var prompt in allPrompts.Children)
          {
				Debug.Log("00"+prompt.Child("promptID").GetRawJsonValue());
				GameObject newPromptAndContent_Empty = Instantiate(promptHolder_prefab, parentOfAllPrompts.transform, true) as GameObject;
				newPromptAndContent_Empty.name = "Prompt00"+prompt.Child("promptID").GetRawJsonValue();
				newPromptAndContent_Empty.transform.GetChild(0).transform.GetChild(0).GetComponent<Text>().text = allPrompts.Child("prompt00"+i.ToString()).Child("content").GetRawJsonValue().ToString();
				Debug.Log("prompt child count "+prompt.ChildrenCount);
				int r = 1;
				foreach(var cmt in prompt.Child("comments").Children){
					Debug.Log("content for prompt"+cmt.Child("content").GetRawJsonValue());
					GameObject newResponse = Instantiate(emptyMet, newPromptAndContent_Empty.transform, true) as GameObject;
					newResponse.name = "response00"+r.ToString();
					newResponse.transform.GetChild(0).GetComponent<Text>().text = cmt.Child("content").GetRawJsonValue();
					r++;
				}
				//loop through each comment, check to see if its text is empty, delete it if empty
				foreach(Transform t in newPromptAndContent_Empty.transform){
					if(t.GetChild(0).GetComponent<Text>() && t.GetChild(0).GetComponent<Text>().text.Equals("")){
						Destroy(t.gameObject);
					}
				}
				i++;
          }
      }
  });

    }
    private void writeNewUser(string userId, string name, string email)
    {
        User user = new User(name, email);
        string json = JsonUtility.ToJson(user);

        //mDatabaseRef.Child("users").Child(userId).SetRawJsonValueAsync(json);
		reference.Child("users").Child(userId).SetRawJsonValueAsync(json);
		string key = reference.Child("users").Push().Key;
		Debug.Log("Finished execution ...");
    }
}

public class User
{
    public string username;
    public string email;

    public User()
    {
    }

    public User(string username, string email)
    {
        this.username = username;
        this.email = email;
    }
}
