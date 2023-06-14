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
  void reserve_bus();
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

void Bus_Reservation::reserve_bus()
{
  int seat;
  char number[5];
  top:
  cout<<"Bus number: ";
  cin>>number;
  int n;
  for(n=0;n<=p;n++)
  {
    if(strcmp(bus[n].busn, number)==0)
    break;
  }
  while(n<=p)
  {
    cout<<"\nSeat Number: ";
    cin>>seat;
    if(seat>32)
    {
      cout<<"\nThere are only 32 seats available in this bus.";
    }
    else
    {
      if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)
      {
        cout<<"Enter passanger's name: ";
        cin>>bus[n].seat[seat/4][(seat%4)-1];
        break;
      }
    else
      cout<<"The seat no. is already reserved.\n";
      }
      }
    if(n>p)
    {
      cout<<"Enter correct bus no.\n";
      goto top;
    }
    cout<<"\n Added Successfully....";
	getch();
  }
