#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_MainDBScript4121567468.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Firebase_Database_Firebase_Database_FirebaseDataba1318758358.h"
#include "Firebase_Database_Firebase_Database_DatabaseRefere1167676104.h"
#include "Unity_Tasks_System_Threading_Tasks_Task_1_gen407924357.h"
#include "Firebase_Database_Firebase_Database_Query2792659010.h"
#include "mscorlib_System_Action_1_gen209723739.h"
#include "Unity_Tasks_System_Threading_Tasks_Task1843236107.h"
#include "AssemblyU2DCSharp_User719925459.h"
#include "Firebase_Database_Firebase_Database_DataSnapshot1287895350.h"
#include "mscorlib_System_Int64909078037.h"
#include "mscorlib_System_Boolean3825574718.h"

// MainDBScript
struct MainDBScript_t4121567468;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// System.String
struct String_t;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t1318758358;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// System.Object
struct Il2CppObject;
// Firebase.Database.Query
struct Query_t2792659010;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t407924357;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t209723739;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Threading.Tasks.Task
struct Task_t1843236107;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1809478302;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1611277684;
// User
struct User_t719925459;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
extern Il2CppClass* FirebaseApp_t210707726_il2cpp_TypeInfo_var;
extern Il2CppClass* FirebaseDatabase_t1318758358_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* MainDBScript_t4121567468_il2cpp_TypeInfo_var;
extern Il2CppClass* Action_1_t209723739_il2cpp_TypeInfo_var;
extern const MethodInfo* MainDBScript_U3CStartU3Em__0_m723512255_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m1231228_MethodInfo_var;
extern const MethodInfo* Task_1_ContinueWith_m1999459576_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3202294319;
extern Il2CppCodeGenString* _stringLiteral3047500758;
extern Il2CppCodeGenString* _stringLiteral1749511625;
extern Il2CppCodeGenString* _stringLiteral2158973637;
extern Il2CppCodeGenString* _stringLiteral465108935;
extern Il2CppCodeGenString* _stringLiteral2519053559;
extern Il2CppCodeGenString* _stringLiteral3523873052;
extern Il2CppCodeGenString* _stringLiteral1635564570;
extern const uint32_t MainDBScript_Start_m1419258233_MetadataUsageId;
extern Il2CppClass* User_t719925459_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1078888220;
extern const uint32_t MainDBScript_writeNewUser_m982481795_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Task_1_get_Result_m487472270_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral698810733;
extern Il2CppCodeGenString* _stringLiteral3499124875;
extern Il2CppCodeGenString* _stringLiteral3726277302;
extern Il2CppCodeGenString* _stringLiteral1111044658;
extern const uint32_t MainDBScript_U3CStartU3Em__0_m723512255_MetadataUsageId;



// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m584977596_gshared (Action_1_t2491248677 * __this, Il2CppObject * p0, IntPtr_t p1, const MethodInfo* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
extern "C"  Task_t1843236107 * Task_1_ContinueWith_m1701549383_gshared (Task_1_t1809478302 * __this, Action_1_t1611277684 * p0, const MethodInfo* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C"  Il2CppObject * Task_1_get_Result_m425721929_gshared (Task_1_t1809478302 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
extern "C"  FirebaseApp_t210707726 * FirebaseApp_get_DefaultInstance_m465202029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Unity.Editor.FirebaseEditorExtensions::SetEditorDatabaseUrl(Firebase.FirebaseApp,System.String)
extern "C"  void FirebaseEditorExtensions_SetEditorDatabaseUrl_m4227543808 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
extern "C"  FirebaseDatabase_t1318758358 * FirebaseDatabase_get_DefaultInstance_m2521248777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
extern "C"  DatabaseReference_t1167676104 * FirebaseDatabase_get_RootReference_m3750281036 (FirebaseDatabase_t1318758358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainDBScript::writeNewUser(System.String,System.String,System.String)
extern "C"  void MainDBScript_writeNewUser_m982481795 (MainDBScript_t4121567468 * __this, String_t* ___userId0, String_t* ___name1, String_t* ___email2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
extern "C"  DatabaseReference_t1167676104 * FirebaseDatabase_GetReference_m1440353143 (FirebaseDatabase_t1318758358 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
extern "C"  Task_1_t407924357 * Query_GetValueAsync_m2545609208 (Query_t2792659010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m1231228(__this, p0, p1, method) ((  void (*) (Action_1_t209723739 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m584977596_gshared)(__this, p0, p1, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
#define Task_1_ContinueWith_m1999459576(__this, p0, method) ((  Task_t1843236107 * (*) (Task_1_t407924357 *, Action_1_t209723739 *, const MethodInfo*))Task_1_ContinueWith_m1701549383_gshared)(__this, p0, method)
// System.Void User::.ctor(System.String,System.String)
extern "C"  void User__ctor_m3286703584 (User_t719925459 * __this, String_t* ___username0, String_t* ___email1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C"  String_t* JsonUtility_ToJson_m1232500921 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
extern "C"  DatabaseReference_t1167676104 * DatabaseReference_Child_m662767510 (DatabaseReference_t1167676104 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetRawJsonValueAsync(System.String)
extern "C"  Task_t1843236107 * DatabaseReference_SetRawJsonValueAsync_m454025307 (DatabaseReference_t1167676104 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Push()
extern "C"  DatabaseReference_t1167676104 * DatabaseReference_Push_m3325164844 (DatabaseReference_t1167676104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DatabaseReference::get_Key()
extern "C"  String_t* DatabaseReference_get_Key_m1001384938 (DatabaseReference_t1167676104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C"  bool Task_get_IsFaulted_m848651168 (Task_t1843236107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C"  bool Task_get_IsCompleted_m415821692 (Task_t1843236107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !0 System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::get_Result()
#define Task_1_get_Result_m487472270(__this, method) ((  DataSnapshot_t1287895350 * (*) (Task_1_t407924357 *, const MethodInfo*))Task_1_get_Result_m425721929_gshared)(__this, method)
// System.Int64 Firebase.Database.DataSnapshot::get_ChildrenCount()
extern "C"  int64_t DataSnapshot_get_ChildrenCount_m4200760517 (DataSnapshot_t1287895350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString()
extern "C"  String_t* Int64_ToString_m689375889 (int64_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::Child(System.String)
extern "C"  DataSnapshot_t1287895350 * DataSnapshot_Child_m1976182182 (DataSnapshot_t1287895350 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
extern "C"  Il2CppObject * DataSnapshot_GetValue_m142545042 (DataSnapshot_t1287895350 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainDBScript::.ctor()
extern "C"  void MainDBScript__ctor_m1305248209 (MainDBScript_t4121567468 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainDBScript::Start()
extern "C"  void MainDBScript_Start_m1419258233 (MainDBScript_t4121567468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainDBScript_Start_m1419258233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t407924357 * G_B2_0 = NULL;
	Task_1_t407924357 * G_B1_0 = NULL;
	{
		// FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://projectmetaphor2.firebaseio.com/");
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t210707726_il2cpp_TypeInfo_var);
		FirebaseApp_t210707726 * L_0 = FirebaseApp_get_DefaultInstance_m465202029(NULL /*static, unused*/, /*hidden argument*/NULL);
		// FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://projectmetaphor2.firebaseio.com/");
		FirebaseEditorExtensions_SetEditorDatabaseUrl_m4227543808(NULL /*static, unused*/, L_0, _stringLiteral3202294319, /*hidden argument*/NULL);
		// reference = FirebaseDatabase.DefaultInstance.RootReference;
		// reference = FirebaseDatabase.DefaultInstance.RootReference;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1318758358_il2cpp_TypeInfo_var);
		FirebaseDatabase_t1318758358 * L_1 = FirebaseDatabase_get_DefaultInstance_m2521248777(NULL /*static, unused*/, /*hidden argument*/NULL);
		// reference = FirebaseDatabase.DefaultInstance.RootReference;
		NullCheck(L_1);
		DatabaseReference_t1167676104 * L_2 = FirebaseDatabase_get_RootReference_m3750281036(L_1, /*hidden argument*/NULL);
		__this->set_reference_2(L_2);
		// Debug.Log(reference.ToString());
		DatabaseReference_t1167676104 * L_3 = __this->get_reference_2();
		// Debug.Log(reference.ToString());
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		// Debug.Log(reference.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		// writeNewUser("taylorjames9", "James Taylor", "taylorjames9@gmail.com");
		// writeNewUser("taylorjames9", "James Taylor", "taylorjames9@gmail.com");
		MainDBScript_writeNewUser_m982481795(__this, _stringLiteral3047500758, _stringLiteral1749511625, _stringLiteral2158973637, /*hidden argument*/NULL);
		// writeNewUser("billoby", "Bill Wighton", "bill@hotmail.com");
		// writeNewUser("billoby", "Bill Wighton", "bill@hotmail.com");
		MainDBScript_writeNewUser_m982481795(__this, _stringLiteral465108935, _stringLiteral2519053559, _stringLiteral3523873052, /*hidden argument*/NULL);
		// FirebaseDatabase.DefaultInstance
		FirebaseDatabase_t1318758358 * L_5 = FirebaseDatabase_get_DefaultInstance_m2521248777(NULL /*static, unused*/, /*hidden argument*/NULL);
		// .GetReference("users")
		NullCheck(L_5);
		DatabaseReference_t1167676104 * L_6 = FirebaseDatabase_GetReference_m1440353143(L_5, _stringLiteral1635564570, /*hidden argument*/NULL);
		// .GetValueAsync().ContinueWith(task =>
		NullCheck(L_6);
		Task_1_t407924357 * L_7 = Query_GetValueAsync_m2545609208(L_6, /*hidden argument*/NULL);
		Action_1_t209723739 * L_8 = ((MainDBScript_t4121567468_StaticFields*)MainDBScript_t4121567468_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__amU24cache0_3();
		G_B1_0 = L_7;
		if (L_8)
		{
			G_B2_0 = L_7;
			goto IL_0086;
		}
	}
	{
		IntPtr_t L_9;
		L_9.set_m_value_0((void*)(void*)MainDBScript_U3CStartU3Em__0_m723512255_MethodInfo_var);
		Action_1_t209723739 * L_10 = (Action_1_t209723739 *)il2cpp_codegen_object_new(Action_1_t209723739_il2cpp_TypeInfo_var);
		Action_1__ctor_m1231228(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m1231228_MethodInfo_var);
		((MainDBScript_t4121567468_StaticFields*)MainDBScript_t4121567468_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__amU24cache0_3(L_10);
		G_B2_0 = G_B1_0;
	}

IL_0086:
	{
		Action_1_t209723739 * L_11 = ((MainDBScript_t4121567468_StaticFields*)MainDBScript_t4121567468_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__amU24cache0_3();
		// .GetValueAsync().ContinueWith(task =>
		NullCheck(G_B2_0);
		Task_1_ContinueWith_m1999459576(G_B2_0, L_11, /*hidden argument*/Task_1_ContinueWith_m1999459576_MethodInfo_var);
		// }
		return;
	}
}
// System.Void MainDBScript::writeNewUser(System.String,System.String,System.String)
extern "C"  void MainDBScript_writeNewUser_m982481795 (MainDBScript_t4121567468 * __this, String_t* ___userId0, String_t* ___name1, String_t* ___email2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainDBScript_writeNewUser_m982481795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	User_t719925459 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// User user = new User(name, email);
		String_t* L_0 = ___name1;
		String_t* L_1 = ___email2;
		// User user = new User(name, email);
		User_t719925459 * L_2 = (User_t719925459 *)il2cpp_codegen_object_new(User_t719925459_il2cpp_TypeInfo_var);
		User__ctor_m3286703584(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// string json = JsonUtility.ToJson(user);
		User_t719925459 * L_3 = V_0;
		// string json = JsonUtility.ToJson(user);
		String_t* L_4 = JsonUtility_ToJson_m1232500921(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// reference.Child("users").Child(userId).SetRawJsonValueAsync(json);
		DatabaseReference_t1167676104 * L_5 = __this->get_reference_2();
		// reference.Child("users").Child(userId).SetRawJsonValueAsync(json);
		NullCheck(L_5);
		DatabaseReference_t1167676104 * L_6 = DatabaseReference_Child_m662767510(L_5, _stringLiteral1635564570, /*hidden argument*/NULL);
		String_t* L_7 = ___userId0;
		// reference.Child("users").Child(userId).SetRawJsonValueAsync(json);
		NullCheck(L_6);
		DatabaseReference_t1167676104 * L_8 = DatabaseReference_Child_m662767510(L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		// reference.Child("users").Child(userId).SetRawJsonValueAsync(json);
		NullCheck(L_8);
		DatabaseReference_SetRawJsonValueAsync_m454025307(L_8, L_9, /*hidden argument*/NULL);
		// string key = reference.Child("users").Push().Key;
		DatabaseReference_t1167676104 * L_10 = __this->get_reference_2();
		// string key = reference.Child("users").Push().Key;
		NullCheck(L_10);
		DatabaseReference_t1167676104 * L_11 = DatabaseReference_Child_m662767510(L_10, _stringLiteral1635564570, /*hidden argument*/NULL);
		// string key = reference.Child("users").Push().Key;
		NullCheck(L_11);
		DatabaseReference_t1167676104 * L_12 = DatabaseReference_Push_m3325164844(L_11, /*hidden argument*/NULL);
		// string key = reference.Child("users").Push().Key;
		NullCheck(L_12);
		String_t* L_13 = DatabaseReference_get_Key_m1001384938(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// Debug.Log("Finished execution ...");
		// Debug.Log("Finished execution ...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1078888220, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainDBScript::<Start>m__0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
extern "C"  void MainDBScript_U3CStartU3Em__0_m723512255 (Il2CppObject * __this /* static, unused */, Task_1_t407924357 * ___task0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainDBScript_U3CStartU3Em__0_m723512255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_t1287895350 * V_0 = NULL;
	int64_t V_1 = 0;
	{
		// if (task.IsFaulted)
		Task_1_t407924357 * L_0 = ___task0;
		// if (task.IsFaulted)
		NullCheck(L_0);
		bool L_1 = Task_get_IsFaulted_m848651168(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_009e;
	}

IL_0013:
	{
		// else if (task.IsCompleted)
		Task_1_t407924357 * L_2 = ___task0;
		// else if (task.IsCompleted)
		NullCheck(L_2);
		bool L_3 = Task_get_IsCompleted_m415821692(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_009e;
		}
	}
	{
		// DataSnapshot snapshot = task.Result;
		Task_1_t407924357 * L_4 = ___task0;
		// DataSnapshot snapshot = task.Result;
		NullCheck(L_4);
		DataSnapshot_t1287895350 * L_5 = Task_1_get_Result_m487472270(L_4, /*hidden argument*/Task_1_get_Result_m487472270_MethodInfo_var);
		V_0 = L_5;
		// Debug.Log("Snapshot = "+snapshot.ChildrenCount.ToString());
		DataSnapshot_t1287895350 * L_6 = V_0;
		// Debug.Log("Snapshot = "+snapshot.ChildrenCount.ToString());
		NullCheck(L_6);
		int64_t L_7 = DataSnapshot_get_ChildrenCount_m4200760517(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// Debug.Log("Snapshot = "+snapshot.ChildrenCount.ToString());
		String_t* L_8 = Int64_ToString_m689375889((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral698810733, L_8, /*hidden argument*/NULL);
		// Debug.Log("Snapshot = "+snapshot.ChildrenCount.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("username").GetValue(true));
		DataSnapshot_t1287895350 * L_10 = V_0;
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("username").GetValue(true));
		NullCheck(L_10);
		DataSnapshot_t1287895350 * L_11 = DataSnapshot_Child_m1976182182(L_10, _stringLiteral3047500758, /*hidden argument*/NULL);
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("username").GetValue(true));
		NullCheck(L_11);
		DataSnapshot_t1287895350 * L_12 = DataSnapshot_Child_m1976182182(L_11, _stringLiteral3726277302, /*hidden argument*/NULL);
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("username").GetValue(true));
		NullCheck(L_12);
		Il2CppObject * L_13 = DataSnapshot_GetValue_m142545042(L_12, (bool)1, /*hidden argument*/NULL);
		String_t* L_14 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3499124875, L_13, /*hidden argument*/NULL);
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("username").GetValue(true));
		Debug_Log_m920475918(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("email").GetValue(true));
		DataSnapshot_t1287895350 * L_15 = V_0;
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("email").GetValue(true));
		NullCheck(L_15);
		DataSnapshot_t1287895350 * L_16 = DataSnapshot_Child_m1976182182(L_15, _stringLiteral3047500758, /*hidden argument*/NULL);
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("email").GetValue(true));
		NullCheck(L_16);
		DataSnapshot_t1287895350 * L_17 = DataSnapshot_Child_m1976182182(L_16, _stringLiteral1111044658, /*hidden argument*/NULL);
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("email").GetValue(true));
		NullCheck(L_17);
		Il2CppObject * L_18 = DataSnapshot_GetValue_m142545042(L_17, (bool)1, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3499124875, L_18, /*hidden argument*/NULL);
		// Debug.Log("printing my name = "+snapshot.Child("taylorjames9").Child("email").GetValue(true));
		Debug_Log_m920475918(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// });
		return;
	}
}
// System.Void User::.ctor()
extern "C"  void User__ctor_m2333596438 (User_t719925459 * __this, const MethodInfo* method)
{
	{
		// public User()
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void User::.ctor(System.String,System.String)
extern "C"  void User__ctor_m3286703584 (User_t719925459 * __this, String_t* ___username0, String_t* ___email1, const MethodInfo* method)
{
	{
		// public User(string username, string email)
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		// this.username = username;
		String_t* L_0 = ___username0;
		__this->set_username_0(L_0);
		// this.email = email;
		String_t* L_1 = ___email1;
		__this->set_email_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
