
//simple atm
#include<iostream>
using namespace std;
int bank();
int balance();
int withdraw();
int deposit();
int ex();
main()
{
		char e;
	int pin,a=100000,i,w,d,nb,cp;
	cout<<"\t\t\tWELCOME TO ATM\t\t\t";
	cout<<"\n\t\tcreate your four digit  pin\t\t";
	cin>>cp;
	if((cp>999)&&(cp<10000))
	{
	cout<<"pin is created succesfully";
	cout<<"\n\nenter your four digit pin\n\n";
	cin>>pin;
	if(pin==cp)
	{
			bank();
	}
	
	else
	cout<<"INVALID pin";
}
else
cout<<"FOUR DIGIT PIN ONLY!!!";
	return 0;
		
}
int bank(){
	int pin,a=100000,i,w,d,nb;
	
	cout<<"\n1.for balance";
		cout<<"\n2.for withdraw";
		cout<<"\n3. for deposit";
		cout<<"\n4. for exit";
		cout<<"\n\t\tenter your choice\t\t\n";
		cin>>i;
		switch(i)
		{
			case 1:
				balance();
				break;
			case 2:
				withdraw();
				break;
			case 3:
				deposit();
				break;
			case 4:
				ex();
			default:
				cout<<"\ninvalid PIN";
				
		}
}
int balance()
{
	int a=100000,v;
	cout<<"\nYOUR BALANCE =\t"<<a;
			    cout<<"\ndo you want exit";
			    cout<<"\npress 1 for  exit and any other key for continue\n";
			    cin>>v;
			    if(v==1)
			    {
			    	ex();
				}
				else
				bank();
}
int withdraw()
{
	int w,a=100000,fa,v;
	cout<<"\n enter amount of withdraw\n";
				cin>>w;
				if(w<=100000)
				{
					cout<<"\nyour withdrawing amount is=\t"<<w;
					fa=a-w;
					cout<<"\n Amount after withdrawing amount =\t"<<fa;
					cout<<"\ndo you want exit";
			    cout<<"\npress 1 for exit and any other key for continue\n";
			    cin>>v;
			    if(v==1)
			    {
			    	ex();
				}
				else
				bank();
				}
				else
				    cout<<"\ninsufficient balance";
				
}
int deposit()
{
	int nb,d,a=100000,v;
		cout<<"\nenter deposit amount";
				cin>>d;
				nb=a+d;
				cout<<"\nnew balance is="<<nb;
				a=nb;
				cout<<"\ndo you want exit";
			    cout<<"\npress 1 for exit and any other key for continue";
			    cin>>v;
			    if(v==1)
			    {
			    	ex();
				}
				else
				bank();
			
}
int ex()
{
	exit(1);
}
