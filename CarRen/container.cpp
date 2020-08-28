#include "container.h"



container::container()
{
	container::Admin_Cs = gcnew Admin_cls();
	container::Customer_Cs = gcnew Customer();
	container::Car_Cs = gcnew Car();
	container::booking_Cs = gcnew Booking();

	
}

