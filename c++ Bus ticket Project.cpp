#include <iostream>
using namespace std;
int pin;
 void intro()
{

     	cout<<"\t\t\tWELCOME TO BAHIRDAR BUS STATION";
  
}
 
static int p = 0;
class Bus_Reservation
{

  char busn[5];
  char driver[10];
  char arrival[5];
  char depart[5];
  char from[10];
  char to[10];
  char seat[8][4][10];
 
public:
  void add_bus();
}
  
bus[10];

void Bus_Reservation::add_bus()


{
	 cout<<"enter pin\t";
	 cin>>pin;
	 if(pin==12345678){
  cout<<"Enter bus number: ";
  cin>>bus[p].busn;
 
  cout<<"Enter Driver's name: ";
  cin>>bus[p].driver;
 
  cout<<"Arrival time: ";
  cin>>bus[p].arrival;
 
  cout<<"Departure: ";
  cin>>bus[p].depart;
 
  cout<<"From: ";
  cin>>bus[p].from;
 
  cout<<"To: ";
  cin>>bus[p].to;
  
   cout<<"\n Added Successfully";

 
}
 else
 	cout<<"Enter the correct pin";
	 }
