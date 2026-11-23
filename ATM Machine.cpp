#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	double current=50000.00;
		int menu_opt,d_amount,w_amount; 
		int receipt;
	    int again,cash;
	    int pin,tries=1;
	  do{
	  cout<<"Enter Your Pin:  ";
	    cin>>pin;
	    if(pin!=1234)
	   {
	    cout<<"Wrong Pin! \n";
	    tries++;
	}
	    else
		{
	    tries=0;
	}
	
	    if(tries>3)
	      cout<<"Card Blocked for Two Hours Due to too many Incorrect Pin tries.";
	      else{
		  
	    if (pin==1234)
      {
	do{
		
		cout<<                                               "Welcome to ABC Bank ATM!\n";
		cout<<"Choose One of the Following Options to Proceed:\n"<<"  1.Check Current Balance\n"<<"  2.Deposit Cash\n"<<"  3.Withdraw Cash\n"<<"  4.Exit\n";
	    cin>>menu_opt;
	    cin.ignore(1000,'\n');
      switch (menu_opt){
      case 1:
      	{
		  cout<<current;
		  break;
		  }
	  case 2:
	  {
	  	cout<<"Enter The Amount You Want to Deposit:\t";
      	cin>>d_amount;
      	if(d_amount>0)	
		current=current+d_amount;
		else 
		cout<<" Invalid Number Given!\n";
		if(d_amount>0)
		{cout<<"Rs. "<<d_amount<<" Deposited into Your Account.\n";
		cout<<"Do You Want a Receipt?\n"<<"1.Yes\t"<<"2.No\t";
		cin>>receipt;
	    
		switch(receipt)
		      {
		      	case 1:
		      		{
					  cout<<d_amount<<" has Been Deposited into Your Account."<<"\nTotal Balance Remaining: "<<current; 
		      			break;
					  }
				case 2:
				{
					cout<<" Thankyou For Visiting Our Branch's ATM!";
					break;
					  }	  
			  }}
			  else
			    cout<<" Sorry! No Receipt can be Generated.";
			break;
			}
	  case 3:
	  	cout<<"Select Cash Amount To Withdraw:  "<<" 1.1000 "<<"  2.5000 "<<"  3.10000 "<<"  4.25000 "<<"  5.Custom (Select any Number Please)\n";
	  	cin>>cash;
	  	switch(cash)
	  	{
	  		case 1:
	  			{
				  w_amount=1000;
				  cout<<" Rs."<<w_amount<<" has been Withdrawn From Your Account.\n";
			current=current-w_amount;
				cout<<"Do You Want The Receipt?  (1 for Yes and 2 for No)\t";
			cin>>receipt;
			switch(receipt)
			{
				case 1:
					{
						cout<<" Rs. "<<w_amount<<"  Withdrawn from Your account."<<"\n Remaining Balance: "<<current;
						break;
					}
				case 2:
						
					{
							cout<<" Thankyou For Visiting Our Branch's ATM!";
							break;
						}
			}
			    break;
				  }
				case 2:
					{
						w_amount=5000;
						cout<<" Rs."<<w_amount<<" has been Withdrawn From Your Account.\n";
			current=current-w_amount;
				cout<<"Do You Want The Receipt?  (1 for Yes and 2 for No)\t";
			cin>>receipt;
			switch(receipt)
			{
				case 1:
					{
						cout<<" Rs. "<<w_amount<<"  Withdrawn from Your account."<<"\n Remaining Balance: "<<current;
						break;
					}
					case 2:
					{
							cout<<" Thankyou For Visiting Our Branch's ATM!";
							break;
					}
			}
			    break;
					}
					case 3:
						{
							w_amount=10000;
								cout<<" Rs."<<w_amount<<" has been Withdrawn From Your Account.\n";
			current=current-w_amount;
				cout<<"Do You Want The Receipt?  (1 for Yes and 2 for No)\t";
			cin>>receipt;
			switch(receipt)
			{
				case 1:
					{
						cout<<" Rs. "<<w_amount<<"  Withdrawn from Your account."<<"\n Remaining Balance: "<<current;
						break;
					}
				case 2:
					{
						cout<<" Thankyou For Visiting Our Branch's ATM!";
						break;
					}
			}
			    break;
						}
						case 4:
							{
								w_amount=25000;
								cout<<" Rs."<<w_amount<<" has been Withdrawn From Your Account.\n";
			current=current-w_amount;
				cout<<"Do You Want The Receipt?  (1 for Yes and 2 for No)\t";
			cin>>receipt;
			switch(receipt)
			{
				case 1:
					{
						cout<<" Rs. "<<w_amount<<"  Withdrawn from Your account."<<"\n Remaining Balance: "<<current;
						break;
					}
					case 2:
						{
							cout<<" Thankyou For Visiting Our Branch's ATM!";
							break;
						}
			}
			    break;
						}
		  case 5:
		  	{
	    cout<<" Enter The Custom Amount You Want To Withdraw:\t";
		cin>>w_amount;
		if(w_amount>0 && (w_amount<current||w_amount==current))
		{
			cout<<" Rs."<<w_amount<<" has been Withdrawn From Your Account.\n";
			current=current-w_amount;
			cout<<"Do You Want The Receipt?  (1 for Yes and 2 for No)\t";
			cin>>receipt;
			switch(receipt)
			{
				case 1:
					{
						cout<<" Rs. "<<w_amount<<"  Withdrawn from Your account."<<"\n Remaining Balance: "<<current;
						break;
					}
					case 2:
						{
							cout<<" Thankyou For Visiting Our Branch's ATM!";
							break;
						}
			}
					  }	
		else
		    cout<<"Limit Exceeded!";
				  break;
			} 
	    }break;
	 case 4:
		{
			cout<<"\t Thankyou!";
			break;
		}
		 
		 default:
		 {
		 	cout<<"Invalid Option/Entry!";
		 }
		 
		 }
		 
		  cout<<"\n Do You want to Use The ATM Again? (1 for Yes, 2 for No)\t";
		  cin>>again;
		  cin.ignore(1000,'\n');
		  if(again==2)
		  tries=4;
		  else
		  tries=0;	
		 }
	  while  (again==1);}
	  else
	    cout<<"Please Enter The Correct Pin\n";
	 }
	 }
    while(tries<=3);
    
	  
	
	
	return 0;
}
