/*
 *Name: Nick Sturch-Flint (100303769) & Rose Nguyen (100764192)
 *Date: September 18, 2020
 *Program Name: Review of Classes and Objects: Work Tickets
 *Program Description: An application that stores information about client requests
 */

#include <iostream> //cin, cout
#include <iomanip>  //fixed, setprecision()
#include <sstream>  //string streams
#include <cmath>    //sqrt()
#include <limits>   //INT_MAX
#include <stdexcept>//out_of_range


using namespace std;

class WorkTicket
{
public:
	//Constructors: Initialize Objects
	WorkTicket(int ticketNumber = 0, int day = 1, int month = 1, int year = 2000, string clientID = "", string description = "");

	//Accessors: Query the state of the object
	//get
	void GetTicketNumber();
	string GetID();
	void GetDate();
	void GetDescription();

	void ShowWorkTicket();

	//Mutators: Change the object state
	//set
	void SetTicketNumber(int ticketNumber);
	string SetID(int clientID);
	void SetDate(int day, int month, int year);
	void SetDescription(string description);

	string ToString() const;
	void SetWorkTicket();
private:
	//private data members
	int myDay; //
	int myMonth;
	int myYear;
	string myDescription;
}; //end of WorkTicket Class

int main()
{
	//Declarations


} //end of main

//Class Definition
//Getters

void WorkTicket::GetDate()
{
	
}


void WorkTicket::SetWorkTicket()
{
	bool isValid = false;

	return isValid;
} //end of SetWorkTicket

//Setters
//sets the date for the object
void WorkTicket::SetDate(int day, int month, int year)
{
	myDay = day;
	myMonth = month;
	myYear = year;
}

//sets the description for the object
void WorkTicket::SetDescription(string description)
{
	myDescription = description;
}



void WorkTicket::ShowWorkTicket()
{

} //end of ShowWorkTicket



