#pragma once

using namespace System; 

using namespace System::Collections::Generic;

System::DateTime;

public ref class User abstract
{
public :
	String ^  ID;
	String ^ Name;
	String ^ PassWord;

	User();
	//User(String ^id, String^ name, String ^pass);
	
	virtual void Add(String ^id, String ^name, String^pass) abstract ;

	virtual void Delete(String ^ id) abstract ;
	virtual void Load() abstract ;
	
	//virtual void Add(String ^ id, String ^ name, String ^ pass);
};

ref class Admin_cls  : public User
{
public :
	
	void Add(String ^ id , String ^ name, String ^ pass) override ;
	
	List <Admin_cls^>^  Admins_List;

	Admin_cls();
	bool Check_Add(String ^ Id);
	void Load() override ;
	bool check_Login(String ^ ID, String ^ pass);
	void Delete(String ^ id) override ;
	List <String^>^ Load_FeedBack();


};

ref class Customer : public User {
public :
	List <Customer^>^ Customer_List; 
	
	Customer();
	Customer(String ^ id , String ^ name , String ^ pass);
	void Add(String ^ id, String ^ name, String ^ pass) override ;
	void Load() override ;
bool check_Login(String ^ ID, String ^ pass);
	bool Check_Add(String ^ Id);
	void Delete(String ^ id) override ;
	void Add_FeedBack(String ^ feed);

};

ref class  Car {
public : 
	Car();
	Car(String ^ id, String ^ price, String ^ type, String ^ modeltype, String ^ moder_year, String ^ color);
	String ^ Car_ID;
	String ^ Car_Name;
	String ^ Car_Price;
	String ^ Car_Type;
	String ^ Car_Model_Type;
	String ^ Car_Model_Year;
	String ^ Car_Color;
	List <Car^>^ Cars;
	bool Available; 
	void Add_Car(String ^ id, String ^ price, String ^ type, String ^ modeltype, String ^ moder_year, String ^ color);
	void Delete_Car(String ^ id);


	void Load();
	bool Check_Add_Car(String ^ id);

};

ref class Booking {
public : 
	List <Booking^>^ Bookings;
	List <Booking^>^ Car_Bookings;
	List <Booking^>^ User_Bookings;
	List <Booking^>^ Show_Bookings;

	Booking();
	Booking(String ^c_id, String^b_id, String ^  start, String ^  end);
	String ^ Car_ID;
	String ^ Booking_ID;
	String ^ Customer_ID;
	String ^  Start ;
	String ^ End;
	 void Add_Booking(String^b_id, String ^ C_ID , String ^ cust_id ,String ^  start, String ^  end);
	 
	
	
	void Load();
	void Load_Car_Bookings(String ^car_id );
	void Load_User_Bookings();
	
	void Delete_Booking(String ^ car_id);
	
	
};

