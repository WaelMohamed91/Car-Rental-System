#include "User.h"
#include"AddBook.cpp"
#include"AddBook.h"
using namespace System::IO; 

System::DateTime;
using namespace System;
using namespace System;
using namespace std;

//using namespace System::ComponentModel;
//using namespace System::Collections;
//using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;
User::User () {

}



Admin_cls::Admin_cls() {
	Admins_List = gcnew List <Admin_cls^>;

}
void Admin_cls::Add(String ^ id,String ^ name,String ^ pass)
{
	StreamWriter ^save = gcnew StreamWriter("Admins.txt",true   );

	String ^ full = id + "*"+name  +"*" +pass; 
	save->WriteLine(full);
	save->Close();

}
bool Admin_cls::Check_Add(String ^ id) {
	for (int i = 0; i < Admins_List->Count; i++) {
		if (Admins_List[i]->ID == id)
		{
			return false; 
			
		}
	}
	return true; 

}
void Admin_cls::Load() {

	StreamReader ^ sr = gcnew StreamReader("Admins.txt");

	while (!sr->EndOfStream)
	{
		Admin_cls ^ local_obj = gcnew Admin_cls ();
 		String^ row = Convert::ToString(sr->ReadLine());
		array<Char>^ splitter = { '*' };
		array<String^>^ arr = row->Split(splitter);
		local_obj->ID = arr[0];
		local_obj->Name = arr[1];
		local_obj->PassWord = arr[2];
		Admins_List->Add(local_obj);

	}
	sr->Close();
}
bool Admin_cls :: check_Login (String ^ ID, String ^ pass) {
	for (int i = 0; i < Admins_List->Count; i++) {
		if (Admins_List[i]->ID == ID  && Admins_List[i]->PassWord == pass)
		{
			StreamWriter ^save = gcnew StreamWriter("Current.txt");

			String ^ full = Admins_List[i]->ID + "*" + Admins_List[i]->Name + "*" + Admins_List[i]->PassWord;
				save->WriteLine(full);
			save->Close();

			return true;
		}
	}
	return false;
}
Void Admin_cls::Delete(String ^id) {
	for (int i = 0; i < Admins_List->Count; i++) {
		if (Admins_List[i]->ID == id) {
			Admins_List->RemoveAt(i); 
			break;
		}
	}
	StreamWriter ^save = gcnew StreamWriter("Admins.txt",false);
	for (int i = 0; i < Admins_List->Count; i++) {
		String ^ full = Admins_List[i] ->ID + "*" + Admins_List[i]->Name + "*" + Admins_List[i]->PassWord;
		save->WriteLine(full);
		
	}
	save->Close();
}

List<String ^>^  Admin_cls::Load_FeedBack() {
	List < String ^>^ list = gcnew List <String^>();

	StreamReader ^ sr = gcnew StreamReader("FeedBack.txt"); 
	while (!sr->EndOfStream)
	{
	
	
		list->Add(Convert::ToString(sr->ReadLine()));

	}
	sr->Close();
	return list;
	

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
Car::Car() {
	
	Cars = gcnew List<Car^>; 
}
Car::Car(String ^ id, String ^ price, String ^ type, String ^ modeltype, String ^ moder_year, String ^ color) {
	Car_ID = id; Car_Price = price; Car_Type = type; Car_Model_Type = modeltype; Car_Model_Year = moder_year; 
	Car_Color = color;
}
void Car::Add_Car(String ^ id,String ^ price, String ^ type, String ^ modeltype, String ^ moder_year, String ^ color) {
	StreamWriter ^save = gcnew StreamWriter("Cars.txt", true);
	String ^ full = id + "*" + price + "*" + type + "*" + modeltype + "*" + moder_year + "*" + color ;

	save->WriteLine(full);

	save->Close();

	Car ^local = gcnew Car( id, price, type, modeltype, moder_year, color);
	
	Cars->Add(local);

}
void Car::Load() {
	StreamReader ^ sr = gcnew StreamReader("Cars.txt");

	while (!sr->EndOfStream)
	{
		Car ^ local_obj = gcnew Car();
		String^ row = Convert::ToString(sr->ReadLine());
		array<Char>^ splitter = { '*' };
		array<String^>^ arr = row->Split(splitter);
		local_obj->Car_ID = arr[0];
		local_obj->Car_Price = arr[1];
		local_obj->Car_Type = arr[2];
		local_obj->Car_Model_Type = arr[3];
		local_obj->Car_Model_Year = arr[4];
		local_obj->Car_Color = arr[5];
		
		Cars->Add(local_obj);

	}
	sr->Close();
}

bool Car::Check_Add_Car(String ^ id) {
	for (int i = 0; i < Cars->Count; i++) {
		if (Cars[i]->Car_ID == id)
		{
			return false;

		}
	}
	return true;
}


Void Car::Delete_Car (String ^id ) 
{
	for (int i = 0; i < Cars->Count; i++) {
		if (Cars[i]->Car_ID == id) {
			Cars->RemoveAt(i);
			break;
		}
	}

	StreamWriter ^save = gcnew StreamWriter("Cars.txt");

	for (int i = 0; i < Cars->Count; i++) {
		String ^ full = Cars[i]->Car_ID + "*" + Cars[i]->Car_Price + "*" + Cars[i]->Car_Type + "*" + Cars[i]->Car_Model_Type + "*" + Cars[i]->Car_Model_Year + "*" + Cars[i]->Car_Color;
		save->WriteLine(full);
		
	}
	save->Close();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Customer::Customer() {
	
	Customer_List = gcnew List <Customer^>;
}
Customer::Customer(String ^ id, String ^ name , String ^ pass) {
	Customer_List = gcnew List <Customer^>;
	ID = id; Name = name; PassWord = pass; 
}
void Customer::Add(String ^ id, String ^ name, String ^ pass) {
	StreamWriter ^save = gcnew StreamWriter("Customers.txt", true);

	String ^ full = id + "*" + name + "*" + pass;
	save->WriteLine(full);
	save->Close();

	Customer ^local = gcnew Customer(id , name ,pass);

	Customer_List->Add(local);


}

void Customer::Load() {

	StreamReader ^ sr = gcnew StreamReader("Customers.txt");

	while (!sr->EndOfStream)
	{
		Customer ^ local_obj = gcnew Customer();
		String^ row = Convert::ToString(sr->ReadLine());
		array<Char>^ splitter = { '*' };
		array<String^>^ arr = row->Split(splitter);
		local_obj->ID = arr[0];
		local_obj->Name = arr[1];
		local_obj->PassWord = arr[2];
		Customer_List->Add(local_obj);

	}
	sr->Close();
}


bool Customer::Check_Add(String ^ id) {
	for (int i = 0; i < Customer_List->Count; i++) {
		if (Customer_List[i]->ID == id)
		{
			return false;

		}
	}
	return true;

}

bool Customer::check_Login(String ^ ID, String ^ pass) {
	for (int i = 0; i < Customer_List->Count; i++) {
		if (Customer_List[i]->ID == ID  && Customer_List[i]->PassWord == pass)
		{
			StreamWriter ^save = gcnew StreamWriter("Current_Customer.txt");

			String ^ full = Customer_List[i]->ID + "*" + Customer_List[i]->Name + "*" + Customer_List[i]->PassWord;
			save->WriteLine(full);
			save->Close();

			return true;
		}
	}
	return false;
}
Void Customer::Delete(String ^id) {
	for (int i = 0; i < Customer_List->Count; i++) {
		if (Customer_List[i]->ID == id) {
			Customer_List->RemoveAt(i);
			break;
		}
	}

	StreamWriter ^save = gcnew StreamWriter("Customers.txt",false);
	for (int i = 0; i < Customer_List->Count; i++) {

		String ^ full = Customer_List[i]->ID + "*" + Customer_List[i]->Name + "*" + Customer_List[i]->PassWord;
		save->WriteLine(full);
		
	}
	save->Close();

}
void Customer::Add_FeedBack(String ^ feed ) {

	StreamWriter ^save = gcnew StreamWriter("FeedBack.txt",true);

	save->WriteLine(feed);
	//save->WriteLine("/////////////////////////");
	save->Close();

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
Booking::Booking()
{
	Bookings = gcnew List <Booking^>;
	Car_Bookings = gcnew List <Booking^>; 
	User_Bookings = gcnew List <Booking^>; 
	Show_Bookings = gcnew List <Booking^>;
}

Booking::Booking(String ^c_id,String^b_id, String ^  start, String ^  end)
{
	Bookings = gcnew List <Booking^>;
	Car_ID = c_id;
	Booking_ID = b_id;
	Start = start;
	End = end;

}

void Booking::Add_Booking(String^b_id, String ^ C_ID  , String ^ cust_id, String ^  start, String ^  end)
{
	StreamWriter ^save = gcnew StreamWriter("Bookings.txt", true);

	String ^ full =b_id + "*" + C_ID +"*" +cust_id + "*"+ start + "*"+ end;
	save->WriteLine(full);
	save->Close();
	Booking ^ local_obj = gcnew Booking();
	local_obj->Booking_ID = b_id;
	local_obj->Car_ID = C_ID;
	local_obj->Customer_ID= cust_id;
	local_obj->Start = start;
	local_obj->End = end;
	Bookings->Add(local_obj);


}

void Booking::Load() {
	StreamReader ^ sr = gcnew StreamReader("Bookings.txt");

	while (!sr->EndOfStream)
	{
		Booking ^ local_obj = gcnew Booking();
		String^ row = Convert::ToString(sr->ReadLine());
		array<Char>^ splitter = { '*' };
		array<String^>^ arr = row->Split(splitter);
		local_obj->Booking_ID = arr[0];
		local_obj->Car_ID= arr[1];
		local_obj->Customer_ID = arr[2];
		local_obj->Start = arr[3];
			local_obj->End = arr[4];
			Bookings->Add(local_obj);

	}
	sr->Close();
}

void Booking::Load_Car_Bookings(String ^car_id) {
	Car_Bookings->Clear();
	for (int i = 0; i < Bookings->Count; i++) {
		if (Bookings[i]->Car_ID == car_id) {
			Car_Bookings->Add(Bookings[i]);
		}
	}

}

void Booking::Load_User_Bookings() {

	StreamReader ^ sr = gcnew StreamReader("Current_Customer.txt");
	String^ row = Convert::ToString(sr->ReadLine());
	array<Char>^ splitter = { '*' };
	array<String^>^ arr = row->Split(splitter);

	User_Bookings->Clear();
	for (int i = 0; i < Bookings->Count; i++) {
		if (Bookings[i]->Customer_ID == arr[0]) {
			User_Bookings->Add(Bookings[i]);
		}
	}
	sr->Close();

}


void Booking::Delete_Booking(String ^ car_id)
{
	for (int i = 0; i < Bookings->Count; i++) {
		if (Bookings[i]->Car_ID == car_id) {
			Bookings->RemoveAt(i);
			break;
		}
	}

	StreamWriter ^save = gcnew StreamWriter("Bookings.txt");

	for (int i = 0; i < Bookings->Count; i++) {
		String ^ full = Bookings[i]->Booking_ID + "*" + Bookings[i]->Car_ID + "*" + Bookings[i]->Customer_ID + "*" + Bookings[i]->Start + "*" + Bookings[i]->End;
		save->WriteLine(full); 

	}
	save->Close();

}



//////////////////////////////////////////////////////////////////////////////////////////////////////

/*int check_String(String ^ f, String ^ s) {
	array<Char>^ splitter = { '/' };
	array<String^>^ first = f->Split(splitter);
	array<Char>^ splitter2 = { '/' };
	array<String^>^ second = s->Split(splitter2);
	int f1 = Convert::ToInt32(first[2]);
	int f2 = Convert::ToInt32(first[1]);
	int f3 = Convert::ToInt32(first[0]);
	int s1 = Convert::ToInt32(second[2]);
	int s2 = Convert::ToInt32(second[1]);
	int s3 = Convert::ToInt32(second[0]);
	if (f1 > s1)
		return 1;
	else if (s1 > f1)
		return 2;
	else {
		if (f2 > s2)
			return 1;
		else if (s2 > f2)
			return 2;
		else {
			if (f3 > s3)
				return 1;
			else if (s3 > f3)
				return 2;
			else
				return 3;

		}
	}
	
}
*/

