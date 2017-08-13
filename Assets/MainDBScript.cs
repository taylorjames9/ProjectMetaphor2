using UnityEngine;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;

public class MainDBScript : MonoBehaviour
{
	DatabaseReference reference; 
	    void Start()
    {
        // Set this before calling into the realtime database.
        FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://projectmetaphor2.firebaseio.com/");

        // Get the root reference location of the database.
        reference = FirebaseDatabase.DefaultInstance.RootReference;
		Debug.Log(reference.ToString());

		writeNewUser("taylorjames9", "James Taylor", "taylorjames9@gmail.com");
		writeNewUser("billoby", "Bill Wighton", "bill@hotmail.com");

        FirebaseDatabase.DefaultInstance
  .GetReference("users")
  .GetValueAsync().ContinueWith(task =>
  {
      if (task.IsFaulted)
      {
              // Handle the error...
          }
      else if (task.IsCompleted)
      {
          DataSnapshot snapshot = task.Result;
              Debug.Log("Snapshot = "+snapshot.ChildrenCount.ToString());
			  Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("username").GetValue(true));
			  Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("email").GetValue(true));
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
