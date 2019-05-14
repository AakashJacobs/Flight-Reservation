#include<iostream>
#include<queue>
using namespace std;
queue<string>q1;
queue<int>q2;
queue<string>q3;
queue<int>q4;
queue<int>q5;
queue<int>q6;

class flight
{
public:
char name[20],food[10];	
int ticket,mob,noc,fid,pid,dep,arr,time;
static int bil,s;

flight()
{
cout<<"\n\t\t\t---- WELCOME TO YAHWEY AIRWAYS ----   \n\n";	
}

void list()
{
cout<<"     ** FLIGHT DEPARTURE AND ARRIVAL TABLE **\n\n";
cout<<"Sno | Pack Id  |  Flight Id |  Departure  |   Landing   | Price |\n\n";
cout<<" 1  |   1001   |  FE-1235   |  Chennai    | Mumbai      | 4650* \n";
cout<<" 2  |   1002   |  FE-1250   |  Chennai    | Delhi       | 7650* \n";
cout<<" 3  |   1003   |  FE-3243   |  Chennai    | Singapore   | 21650* \n";
cout<<" 4  |   1004   |  FE-2786   |  Chennai    | Sydney      | 31999* \n";
cout<<" 5  |   1005   |  FE-3350   |  Chennai    | Auckland    | 30030* \n";
cout<<" *GST included\n\n";

}

flight book()
{
a:	
cout<<"\t\t\t** ! BOOKING ! **\n\n";
cout<<"TICKETS REMAINING: ";cout<<s<<endl<<endl;
if(s>0)
{
cout<<"Enter the package id : ";
cin>>pid;
q6.push(pid);
if(pid>=1001&&pid<=1005)
cout<<"\nPack is available !\n\n";
else
{
cout<<"Invalid pack !\n\n";
goto a;
}
cout<<"Name      : ";cin>>name;q1.push(name);
cout<<"Seats     : ";cin>>noc;q2.push(noc);
cout<<"Food      : ";cin>>food;q3.push(food);
cout<<"Departure : ";cin>>dep;q4.push(dep);
cout<<"Arrival   : ";cin>>arr;q5.push(arr);
time=arr-dep;
if(time<0)
cout<<"Error ! Enter valid dates !\n\n";
else
{
s-=noc;
cout<<endl;
cout<<"Congrats ! Your ticket has been booked ! Have a safe journey !\n";
cout<<endl;	
}
}
}	

flight bill()
{
if(pid==1001)
bil+=4650*noc;
else if(pid==1002)	
bil+=7650*noc;
else if(pid==1003)
bil+=21650*noc;
else if(pid==1004)
bil+=31999*noc;
else if(pid==1005)
bil+=30030*noc;
else
cout<<"The pack isnt available now !\n";
}

flight details()
{
bill();
cout<<"\t\t\t** TRAVEL DETAILS **\n\n";
cout<<"Name     : "<<q1.front()<<endl;
cout<<"Seats    : "<<q2.front()<<endl;
cout<<"Dep date : "<<q4.front()<<endl;
cout<<"Arr date : "<<q5.front()<<endl;
//cout<<"Journey  : "<<time<<" days "<<endl;
cout<<"Food     : "<<q3.front()<<endl;	
cout<<"Bill     : Rs. "<<bil<<endl<<endl;
}
};

int flight::bil=0;
int flight::s=500;

int main()
{
//stack<string>q1;
//stack<int>q2;
//stack<string>q3;
//stack<int>q4;
//stack<int>q5;
	
flight f;
int ch,n=1;
while(n==1)
{
cout<<"**1. Available Flights ** ** 2. Booking ** ** 3. Details ** ** 4. Exit ** \n\n";
cin>>ch;
switch(ch)
{
case 1 :f.list();break;
case 2 :f.book();break;
case 3 :f.details();break;
case 4 :exit(0);
default:cout<<"Your session expired ! Try again !\n";
}
}
return 0;	
}
