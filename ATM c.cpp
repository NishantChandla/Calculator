
	#include <iostream>
	#include <iomanip>
	#include <time.h>
	#include <fstream>
	#include <conio.h>
	#include <string.h>
	#include <stdlib.h>
	#include<process.h>
	#include<dos.h>
	using namespace std;
	 
	//==================================================================================================
	class Bank //abstract base class
	{
	public:
	    double startBalance;
	    string COKAccountHolders;
	    double limit;
	//virtual bool Deposit(double Dvalue)=0; // manage deposit
	//virtual bool Transaction(double Dvalue)=0;// use as necessary
	//virtual void Display_accountBalance()=0;// Show the balance in a nice way
	//virtual void SetLimit(double NewLimit)=0;
	//virtual double GetLimit()=0;
	  
	};
	 
	 
	//==================================================================================================
	class ATMAccountHolders:public Bank
	    {
	    string accountHolders;
	    string accountHoldersAddress, branch;
	    int accountNumber;
	    double startBalance;
	    double accountBalance;
	    double accountInterest;
	    double amount;
	    int count;
	 
	    public:
	    //void Display_accountBalance();
	    void deposit();
	    void withdraw();
        void details();
	    void payBills();
	    void accountExit();
	    void interest();
	     
	    ATMAccountHolders()
	    {
	    accountNumber = 5678;
	    accountHolders = "Johhy Dre";
	    accountHoldersAddress = "Eastway, House no.36";
	    startBalance = 60000.00;
	    accountBalance = 20000.00;
	    branch  = "Pkr";
	    amount = 20000;                
	    }
	    };
	//==================================================================================================   
	    void ATMAccountHolders::interest()
	     {
	    system("cls");
	       
	        cout<<"\n\xB2\xB2\xB2\xB2\\xB2\xB2\xB2\xB2\ATM ACCOUNT INTEREST PAYMENT\xB2\xB2\xB2\xB2\\xB2\xB2\xB2\xB2\\n\n";
	       cout<<"\tThe Interest is calculate over the last SIX months on the average account balance\n";
	       cout<<"\n\t\tInterest Rate payable is 10% per annum."<<endl;
	       cout<<"\t\tView the accumulated interest? Press 1 for Yes OR 0 for NO.\n\n";
	        
	        
	         
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT INTEREST PAYMENT \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";
	        accountInterest=accountBalance+(accountBalance*1.050);
	        cout<<"\tPresent available balance + interest for 6 months :$"<<accountInterest<<"\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	        }
	//==================================================================================================     
	    
	 
	//==================================================================================================
	    void ATMAccountHolders::deposit()
	    {
	         system("cls");
	        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT DEPOSIT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";
	        cout<<"\tEnter the Amount to be Deposited $";
	             
	            double amount;
	            cin>>amount;
	        accountBalance=startBalance+amount ;
	        cout<<"\n\tYour new available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"\n\t\t\tThank You!\n\n"<<endl;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	    }
	//==================================================================================================
	    void ATMAccountHolders::withdraw()//Withdrawal Transactions
	    {
	         system("cls");
	        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WTHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";
	        cout<<"\tEnter the Amount to be Withdrawn $";
	             
	            double amount;
	            cin>>amount;
	             
	            if(amount>accountBalance||amount>9000)//Limit set at $9000 maximum after paying bills
	            {
	        system("cls");
	        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WITHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"\n\tInsufficient Available Balance in your account.\n\n"<<endl;
	        cout<<"\t\t\tSorry !!\n"<<endl;
	        system("PAUSE");
	            }
            else
	            {
	                double b;
	                accountBalance=startBalance-amount ;
	    system("cls");
	        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WTHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"Your new available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");               
	           }
	     
	    }
	//==================================================================================================
	    void ATMAccountHolders::payBills()
	    {
	        system("cls");
	           
	 
	        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM BILLS PAYMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"Pay Electric Company electricity bill of $2000.00 now?\n\n";
	        cout<<"\t\tPress 1 for Yes OR Press 0 for No\n\n";
	         
	        int r;
	         
	        cin>>r;
	        if(r=1)
	        {accountBalance=startBalance-2000;
	        system("cls");
	        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM BILLS PAYMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
	        cout<<"\n\tYour electricity bill of $2000.00 has been paid.\n\n";
	        cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	       }
	       if(r=0)
	       {
	       cout<<"\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n";
	        cout<<"\n\n\tExiting Bill Payment System. Thank you!.\n\n";    
	        cout<<"====================++THANK YOU++============================\n\n";     
	       }
	        system("PAUSE");   
	    };
	     
	//==================================================================================================
	void ATMAccountHolders::details()
	    {
	        system("cls");
	           
	 
	        cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT DETAILS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");   
	    }
	 
	//==================================================================================================     
	 
     void ATMAccountHolders::accountExit()
	    {
	        system("cls");
	           
	 
	        cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ ATM ACCOUNT EXIT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	        cout<<"\n\n\t\t BROUGHT TO YOU BY CODE-PROJECTS \n\n";
	        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	        system("PAUSE");
	        exit(1);   
	    }
	     
	     
	//==================================================================================================     
	/*class Bills
	     {
	       
	      double JPS;
	      double NWC;
	      double FLOW;
	      double RENT;
	      double bills;
	      void Display_accountBalance();
	      public:
	      void jps();
	      void nwc();
	      void flow();
	      void rent();
	      
	      Bills()
	      {
	      double JPS = 2000;
	      double NWC = 1500;
	      double FLOW = 3500;
	      double RENT = 14000;
	         
	        }
	      void Bills::jps()
	     
	        system("cls");
	           
	 
	        cout<<"\n============================ATM BILL PAYMENT SYSTEM=============================\n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"====================++THANK YOU++============================\n\n";
	        cout<<"============================+++++++++++++++++++++++============================\n\n";
	        system("PAUSE");   
	      }
	       
	      };*/
	//==================================================================================================
	 
	class Limits:public Bank
	      {
	      public:
	             void SetLimit(double NewLimit)
	             {}
	       
	             double Getlimit()
	             {}
	       
	      };         
	//==================================================================================================
	//==================================================================================================     
	//==================================================================================================     
	    int main()
	    {
	    int e;
	    ATMAccountHolders p;
	     
	    system ("Color 5f");
	        cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ WELCOME TO ATM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
        cout<<"\t\t\t--------------------\n"<<endl;
	        //Prompt to show today's date
	       cout << "\t\tCurrent date : ";
	       //Show date and time function
	         time_t now;
	         time(&now);
	 
	        printf("%s\n", ctime(&now));;
	      //Give space for the function of date and time
	        cout<<"\t\t\t--------------------\n"<<endl;
	        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	//==================================================================================================     
	         
	      cout<<"\tPress 1 and Then Press Enter to Access Your Account Via Pin Number\n\n";
	      cout<<"\t\t\t\t\t or \n\n";
	      cout<<"\tPress 0 and press Enter to get Help.\n\n";
	         
	      int access;
	      cin>>access;
	      switch(access)
	      {
	      case 1://pin to access account
	      system("cls");int i, pin;
	       
	      cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT ACCESS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	      cout<<"\n\nEnter Your Acc Pin Access Number! [Only one attempt is allowed]\n\n"<<endl;
	      cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";               
	      cin>>pin;
	       
	      system("cls");
	       
	      if(pin==12345)
	       
	      {
	      system("cls"); 
	       
	      do
	        {
	      system("cls");  
	     
	cout << endl << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM Main Menu Screen \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n" << endl << endl;
	cout << "\t\tEnter [1] To  Deposit Cash" << endl;
	cout << "\t\tEnter [2] To Withdraw Cash" << endl;
	cout << "\t\tEnter [3] To Balance Inquiry" << endl;
	cout << "\t\tEnter [4] To Pay Bills" << endl;
	cout << "\t\tEnter [5] to Pay Account Interest" << endl;
	cout << "\t\tEnter [0] to Exit ATM" << endl << endl;
	cout << "\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	         
	        cin>>e;
	        switch(e)
	        {
	            case 1:
	                p.deposit();
	                break;
	            case 2:
	                p.withdraw();
	                break;
	            case 3:
	                p.details();
	                break;
	            case 4:
	                p.payBills();
	                break;
	            case 5:
	                p.interest();
	                break;
	            case 0:
	                p.accountExit();
	                break;
	        default:cout<<"Please Enter the Correct Number Choice"<<endl;
	        }
	    }while(e!=0);
	 
	      break;                                    
	      }
	                
	      else
	      {
	      system("cls");
	     
	cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb THANK YOU \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout<<"\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
	cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	               
	      system("PAUSE");
	      exit (1);
	      }
	//==================================================================================================    
	       
	       
	    case 0://pin to access account
	    system("cls");
	      cout<<"\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT STATUS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	                    cout<<"\tYou must have the correct pin number to access this acount. See your\n\n";
	                    cout<<"\t  bank representative for assistance during bank opening hours\n\n";
	                    cout<<"\t\tThanks for, your choice today!!\n\n";
	      cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	      system ("PAUSE");
	      exit(1);      
	      break;   
	//==================================================================================================        
	    }
	     
	system("PAUSE");
	return 0;
	 
	};

