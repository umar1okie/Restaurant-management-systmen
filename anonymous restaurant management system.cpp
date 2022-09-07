#include <iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<conio.h>
#include <cstdlib>
#include <iomanip>
#include<fstream>
#include <unistd.h>
#include<windows.h>
using namespace std;
class Reservation
{
protected:
    string name;
    string address;
    unsigned int phno;
    int table;
    int day;
    int month;
    int year;
    int hours;
    int minutes;
    string AM_PM;
public:

string getname()
     {
         return name;

     }
     string getaddress()
     {
         return address;
              }
     unsigned int getphno()
     {
         return phno;
     }
     int  gettable()
     {
         return table;
     }
     void  customer_input()
     {
         cout << "                        Enter customer details for reservation                              " << endl;
         cout << "----------------------------------------------------------------------------" << endl;
         cout << "Enter your name: ";
         cin >> name;
         cout << "Enter your address: ";
         cin >> address;
         cout << "Enter your phone number: ";
         cin >> phno;
         cout << "Table for how many: ";
         cin >> table;
         cout << "---------------------------------------------------------------------------" << endl;
     }
      void show_customer()
      {
          cout << "                              Customer reservation details                           " << endl;
          cout << "-------------------------------------------------------------------------" << endl;
          cout << "Customer Name: " << name <<endl;
          cout << "Address: " << address << endl;
          cout << "Phone Number: " << phno <<endl;
          cout << "Table for: " << table << "  customers. " << endl;
          cout << "--------------------------------------------------------------------------" << endl;
      }
     void Tables()
     {
         Reservation r1;
         r1.table;
        int limit_of_table = 100;

        while(table>limit_of_table)
        {
            cout << "Sorry we are at capacity." << endl;
            cout << "We can only offer 100 seats maximum."<< endl;
            cout << "Enter number of seats again: ";
            cin >> table;
            if(table<limit_of_table)
            {
                break;
            }
        }

     }
      void show_all_customer(int c)
      {
            cout<< "                               Customer Reservation Details                                    "<< endl;
            cout<<"   "<<"Name"<<setw(23)<<"Address"<<setw(27)<<"Phone number"<<setw(15)<<"Table"<<endl;
            cout<<"-------------------------------------------------------------------------------------------------"<< endl;
            cout<<"   "<<name<<setw(23)<<address<<setw(27)<<phno<<setw(15)<<table<<endl;
            cout <<"------------------------------------------------------------------------------------------------"<<endl;
      }

      void modifycustomer_data()
{
      char option1,option2,option3,option4;
      cout << "Do you want to change details for name(Y or y / N or n): ";
      cin >> option1;
      cout << "Do you want to change details for phone number (Y or y / N or n): ";
      cin >> option2;
      cout << "Do you want to change details for address(Y or y / N or n): ";
      cin >> option3;
      cout << "Do you want to change details for table(Y or y / N or n): ";
      cin >> option4;


      if(option1 == 'Y' || option1 == 'y')
      {
        cout << "Enter new name: ";
        cin >> name;


      }
      else if(option1 == 'N' || option1 == 'n')
      {
          cout << "No need" << endl;
      }

      if(option2 == 'Y' || option2 == 'y')
      {
        cout << "Enter new phone number: ";
        cin >> phno;


      }
      else if(option2 == 'N' || option2 == 'n')
      {
          cout << "No need" << endl;
      }
      if(option3 == 'Y' || option3 == 'y')
      {
        cout << "Enter new address: ";
        cin >> address;


      }
      else if(option3 == 'N' || option3 == 'n')
      {
          cout << "No need" << endl;
      }
      if(option4 == 'Y' || option4 == 'y')
      {
        cout << "Table for how many: ";
        cin >> table;


      }
      else if(option4 == 'N' || option4 == 'n')
      {
          cout << "No need" << endl;
      }

      else if((option1== 'Y' || option1== 'y') || (option2== 'Y' || option2== 'y') || (option3== 'Y' || option3== 'y')||(option4 == 'Y' || option4 == 'y'))
            cout<<"*   NEW CUSTOMER RECORD SAVED   **"<<endl;

      else
            cout<<"*   NO CUSTOMER RECORD CHANGED   *"<<endl;
}
    void date()
    {


        cout << "\n\n----------------------------------------Please enter the date for reservation----------------------------------------------------" << endl;

         cout << "Please enter number of day: ";
         cin  >> day;

         while(day == 0 || day>31)
         {
             cout << "Invalid input." << endl;
             cout << "Try again: ";
             cin >> day;
         }



        cout << "Please enter number of month ";
        cin >> month;

        while(month == 0 || month > 12)
        {
            cout << "Invalid output" << endl;
            cout << "Try again: ";
            cin>> month;

        if (month == 2 && day > 28 ){
                    cout << "\n\n             INVALID INPUT\n\n February only contains 28 days \n\n\n" <<endl;
                    cout << "Try again: ";
                    cin>>month;
                  }
        }



        cout << "Enter a year: ";
        cin >> year;
        while(year < 2022)
        {

            cout << "\n\n        Can not reserve in past years \n\n" << endl;
            cout << "Try again: ";
            cin >> year;
        }

    }
    void display_date()
    {

            cout<< "---------------------------------------Reservation Date------------------------------------------"<< endl;
            cout<<"   "<<"Day"<<setw(23)<<"Month"<<setw(27)<<"Year"<<endl;
            cout<<"-------------------------------------------------------------------------------------------------"<< endl;
            cout<<"   "<<day<<setw(23)<<month<<setw(27)<<year<<endl;
            cout <<"------------------------------------------------------------------------------------------------"<<endl;
    }
    void Time()
    {
        cout << "------------------------------------Enter time for your reservation---------------------------------------" <<endl;









        cout << "Enter hours: ";
        cin >> hours;
        while(hours>12)
            {
                cout << "Invalid input" << endl;
                 cout << "Try again: ";
                 cin>> hours;
            }
        cout << "Enter Minutes: ";
        cin  >> minutes;
        while(minutes>59)
            {
               cout << "Invalid input" << endl;
               cout << "Try Again: ";
               cin>> minutes;
            }
        cout << "Enter Morning time or evening time(AM/PM):";
        cin >> AM_PM;
          if(AM_PM == "AM" || "am" )
        {
            cout << "Morning time: " << AM_PM << endl;
        }
        else if(AM_PM == "PM" || "pm")
        {
            cout << "Evening time: " << AM_PM << endl;
        }

        else
        {
            cout << "Invalid input." << endl;
        }


         while(hours<8 && AM_PM == "am" ||AM_PM == "AM" )
       {
        cout << "Restaurant service is not available at these period of time. " << endl;
        cout << "Try some other time: ";
        cout << "\nEnter hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin  >> minutes;
        cout << "Enter Morning time or evening time(AM/PM):";
        cin >> AM_PM;
        }
    }

   void display_Time()
   {
            cout<< "                               Time of Reservation                        "<< endl;
            cout<<"   "<<"Hours"<<setw(23)<<"Minutes"<<setw(15)<<"AM/PM"<<endl;
            cout<<"\n\n-------------------------------------------------------------------------------------------------"<< endl;
            cout<<"   "<<hours<<setw(23)<<minutes<<setw(15)<<AM_PM<<endl;
            cout <<"------------------------------------------------------------------------------------------------"<<endl;
   }
};
class Dining
{
    string Name;
    int tables;
    static int count;
public:
    Dining()
    {
        Name = "no name";
        tables = 0;
    }
    string getName()
    {
        return Name;
    }
    int gettables()
    {
        return tables;
    }
    int getcount()
    {
        count++;
        return count;
    }
    void input_data()
    {
        cout << "Enter customer name: ";
        cin >> Name;
        cout << "Table for how many people: ";
        cin >> tables;

    }
    void limit()
    {
        Dining d2;

        while( d2.tables > 100)
        {
            cout << "We can only offer table for 100 people maximum." << endl;
            cout << "Try again: ";
            cin >> tables;
        }

    }

     void display_data()
     {
         cout << "Name: " << Name <<endl;
         cout << "Table for: " << tables << " people." << endl;

     }
     void display_all_data()
     {
         cout << "                         Customer details                          " << endl;
         cout << "   " << "Count"<<setw(23)<< "Name" <<setw(15)<< "Table "  << endl;
         cout << "-------------------------------------------------------------------------"<< endl;
         cout << "   " << count<<setw(23)<< Name <<setw(15)<< tables   <<endl;
         cout << "-------------------------------------------------------------------------" << endl;
     }


};
class sitting : public Dining
{
    string outdoor;
    string indoor;
public:
    sitting():Dining()
    {
        outdoor = "Dining out";
        indoor = "Dining in";
    }
    string get_outdoor()
    {
        return outdoor;
    }
    string get_indoor()
    {
        return indoor;
    }

    void input_sitting()
    {
        string choice;
        cout << "would you like to dine IN or dine OUT." << endl;
        cout<<"IN or OUT = ";
        cin >> choice;
        if(choice == "IN" || choice == "in")
        {
            cout << setw(50) <<"\n\nSitting arrangement will be done indoor.\n\n" << endl;
        }
        else if(choice == "OUT" || choice == "out")
        {
            cout << setw(50) <<"\n\nsitting arrangement will be done outdoor.\n\n" << endl;
        }
        else
        {
            cout << setw(50) <<"\n\ninvalid input. \n\n" << endl;
            exit(0);
        }
        system("PAUSE");
        system("cls");
    }


};
class one
{


public:
	void menu1();

};
void one::menu1()
{

    cout<<"----------------------------------------------Menu-------------------------------------------------------------"<<endl;
	cout<<"\n\n\n\t------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t 1. Chicken Tikka(500 Rs)\t 2. Beef steak(1000 Rs)\t 3. Prawns(700Rs)\n\n\t 4. Chicken Biryani(300 Rs)\t 5. Pasta (600Rs)\t 6. Pizza(800 Rs)\n\n\n\n\t\t\t\t   7. Exit";
    cout<<"\n\n\t----------------------------------------------------------------------------------------------------------------------------"<<endl;
}
	class two:public one
	{
	protected:
		 int order,ch,a,b,c,d,e,f,s=0;
     string y,ye;
     public:
void menu2(){
    ofstream write;
    write.open("receipt.text");
    if(!write){
        cout<<"file can not open"<<endl;
        exit (-1);
    }
a:
    b:
        c:
   	 cout<<"\n\n\tEnter your order: ";
      cin>>ch;


  cout<<"\n\n\tDo you want to change your order? (y/n) :";

  cin>>ye;

  if(ye=="y"|| ye=="Y"){
  	goto c;
  }else{
   switch(ch){
   	case 1:
   			cout<<"\n\n\tHow many order? :";
   		cin>>order;

   		a=500;
   		s=s+a*order;
   		write<<"You order Chicken Tikka: 500 Rs";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou ordered "<<order<<" chicken Tikka."<<endl;
   	break;

   	case 2:
   		cout<<"\n\n\tHow many order? :";
   		cin>>order;

        b=1000;
   		s=s+b*order;
   		write<<"You order Beef steak: 1000 Rs";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou ordered "<<order<<" Beef steak."<<endl;
   	break;

   	case 3:
   		cout<<"\n\n\tHow many order? :";
   		cin>>order;

   		c=700;
   		s=s+c*order;
   		write<<"You order prawns: 700 Rs";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou ordered "<<order<<" prawns. "<<endl;
   	break;

   	case 4:
   		cout<<"\n\n\tHow many order? :";
   		cin>>order;

   		d=300;
   		s=s+d*order;
   		write<<"You order Chicken Biryani: 300 Rs";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou ordered "<<order<<" Chicken biryani."<<endl;
   	break;

   	case 5:
   		cout<<"\n\n\tHow many order? :";
   		cin>>order;

   		e=600;
   		s=s+e*order;
   		write<<"You order Pasta: 600 Rs";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou ordered "<<order<<" Pasta"<<endl;
   	break;

   	case 6:
   		cout<<"\n\n\tHow many order? :";
   		cin>>order;

   		f=800;
   		s=s+f*order;
   		write<<"You order Pizza: 800 Rs";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou ordered "<<order<<" Pizza."<<endl;
   	break;

   	case 7:
   		cout<<"\n\n\tGoodbye.....  \n\n\n";
   	exit(0);
   	break;

   	default:
   		cout<<"\n\n\tYou enter wrong keyword !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDo you want to order again? (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\tTHANK YOU COME AGAIN! GENERATING BILL ";
   	for(int a=1;a<5;a++)
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\n\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t------------------------------------------------"<<endl;
						cout << "\n\t\t--------------------Bill------------------------"<<endl;
						cout << "\n\t\t------------------------------------------------"<<endl;
						cout << endl;
						cout << endl;
						cout << endl;
                        cout<<"\n\n\t\tTotal bill is : "<<s<<" Rs"<<endl;
                        write<<"\n\n";
                        write<<"Total: "<<s;
						cout << "\n\t\t------------------------------------------------"<<endl;


  write.close();
  }

  void show1(){
  	menu1();
  	menu2();
  }

};

int Dining::count;
void Dine_or_reserve()
{
    int choice;
    cout << "                                                MAIN-MENU                                         "<<endl;
    cout <<"1. Dining. "<< endl << "2. Reservation." << endl <<  "3. Exit" << endl;
    cout << "Please select given options (1,2 or 3) : ";
    cin >> choice;
    cout<<"\n\n";

    while(choice < 1 || choice > 3)
    {

     cout << "invalid input. "<< endl;
     cout <<  "Try again(1,2 or 3): ";
     cin >> choice;
    }


    while(choice == 1)
    {
        sitting s1;

        s1.getName();
        s1.gettables();
        s1.getcount();
        s1.input_data();
        s1.limit();
        s1.display_data();
        s1.get_indoor();
        s1.get_outdoor();
        s1.input_sitting();
        s1.display_all_data();
        two t1;
        t1.menu1();
        t1.menu2();
        t1.show1();

        getch();
        break;


        }
    while(choice == 2)
    {
        Reservation r1;
        r1.getname();
        r1.getphno();
        r1.getaddress();
        r1.gettable();
        r1.customer_input();
        r1.Tables();
        r1.show_customer();
        r1.modifycustomer_data();
        r1.date();
        r1.Time();
        r1.show_all_customer(12);
        r1.display_date();
        r1.display_Time();
        break;

    }
    while(choice == 3)
    {
        exit(0);
    }

}

int main()
{
    cout<<"                                         Welcome to 'THE RESTAURANT'      \n\n\n"<<endl;
    cout<<"Loading";
    for(int a=1;a<5;a++)
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\n\t";
   	system("PAUSE");
   	system("cls");
  Dine_or_reserve();
  return  0;
}

