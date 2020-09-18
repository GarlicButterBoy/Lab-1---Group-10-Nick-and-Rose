/*
 *Name: Nick Sturch-Flint (100303769) & Rose Nguyen (100764192)
 *Date: September 18, 2020
 *Program Name: Review of Classes and Objects: Work Tickets
 *Program Description: An application that stores information about client requests
 */

#include <iostream> //cin, cout
#include <iomanip>  //fixed, setprecision()
#include <sstream>  //string streams
#include <limits>   //INT_MAX
#include <stdexcept>//out_of_range
#include <string>
#include "MyConsoleInput.h"

using namespace std;

class WorkTicket
{
public:
	//Constructors: Initialize Objects
	WorkTicket(int ticketNumber = 0, int day = 1, int month = 1, int year = 2000, string clientID = "", string description = "");

	//Accessors: Query the state of the object
	//getters
	int GetTicketNumber(int ticketNumber);

	string GetID();

	int GetDate();

	void GetDescription();

	void ShowWorkTicket();

	//Mutators: Change the object state
	//set
	void SetTicketNumber(int ticketNumber);
	string SetID(int clientID);

	void SetDate(int day, int month, int year);

	void SetDescription(string description);

	string DateString() const;
	string ToString() const;
	void SetWorkTicket();


private:
	//private data members
	int myTicketNumber;
	int myDay; //
	int myMonth;
	int myYear;
	string myDescription;
}; //end of WorkTicket Class

int main()
{
	//Declarations
	int dayInput, monthInput, yearInput;
	string descInput;
	const int TICKET_QUANTITY = 2;
	//WorkTicket
	WorkTicket userTickets[TICKET_QUANTITY];

	try
	{


		for (int count = 0; count < TICKET_QUANTITY; count++)
		{
			//Input
		userTickets[count].SetTicketNumber(count + 1); //sets the ticket number to 1, 2 or 3; depending on the loop instance

		//Program asks for the current date
			cout << "\nWhat date is it today?\n";
			cout << "Day: ";
			dayInput = ConsoleInput::ReadInteger(1, 31);

			cout << endl << "Month: ";
			monthInput = ConsoleInput::ReadInteger(1, 12);
			cout << endl << "Year: ";
			yearInput = ConsoleInput::ReadInteger(2000, 2099);
			userTickets[count].SetDate(dayInput, monthInput, yearInput);

			cout << userTickets[count].GetDate();
		//Program asks for the ticket description
		/*do
		{
			cout << "What is the reason for requesting a Work Ticket?";
			getline(cin, descInput);
		} while (descInput == "");*/

			//Sets the user inputs to the appropriate ticket
		//	userTickets[count].SetWorkTicket();
		}




	cout << dayInput << "/" << monthInput << "/" << yearInput << endl << descInput;

	}
	catch (invalid_argument &ex)
	{
		cerr << ex.what() << " Ending the program." << endl;
	}

	cout << endl << endl;
	return 0;

} //end of main

//Class Definition
//constructor for WorkTicket
WorkTicket::WorkTicket(int ticketNumber, int day, int month, int year, string clientID, string description)
{
	//SetWorkTicket(ticketNumber, day, month, year, clientID, description);
}


//Getters
int WorkTicket::GetTicketNumber(int ticketNumber)
{
	return ticketNumber;
}


int WorkTicket::GetDate()
{
	return myDay, myMonth, myYear;
}



void WorkTicket::SetWorkTicket()
{
	GetDate();

} //end of SetWorkTicket

//Setters

void WorkTicket::SetTicketNumber(int ticketNumber)
{
	myTicketNumber = ticketNumber;
}

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

string WorkTicket::ToString() const
{
	stringstream strOut;

	strOut << "Ticket Number: " << myTicketNumber;

	//return the string
	return strOut.str();
}

string WorkTicket::DateString() const
{
	stringstream dateStr;

	dateStr << myDay << "/" << myMonth << "/" << myYear;

	return dateStr.str();
}

