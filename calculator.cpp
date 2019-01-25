#include<iostream>
using namespace std;
 main()
{
	float a[100],sum=0,pro=1,divi,mod,sub=0,e,f;
	int i,n;
	char c;
	cout<<"\n SIMPLE CALCULATOR";
	cout<<"\n enter choice\n + for add \n - for subtract \n * for multiplication \n / for division \n\n";
	cin>>c;
	cout<<"\n your choice\t"<<c;
	switch(c)
	{
		case '+':
			cout<<"\nhow many numbers you wanna add ?\n ";
			cin>>n;
			if(n<=0){
				cout<<"\nwrong input\n";
			}
			else
			{
				for(i=1;i<=n;i++)
				{
					cout<<"\nenter numbers\t";
					cin>>a[i];
					sum+=a[i];
				}
				cout<<"\nsum is=\t"<<sum;
			}
			break;
		case '-':
			cout<<"\n enter two no for substraction";
			cin>>e;
			cin>>f;
			sub=e-f;
			cout<<"\n subtraction is=\t"<<sub;
			break;
		case '*':
		    cout<<"\nhow many numbers you wanna multiply ?\n ";
			cin>>n;
			if(n<=0){
				cout<<"\nwrong input\n";
			}
			else
			{
				for(i=1;i<=n;i++)
				{
					cout<<"\nenter numbers\t";
					cin>>a[i];
					pro*=a[i];
				}
				cout<<"\nproduct is=\t"<<pro;
			}
			break;	
		case '/':
		cout<<"\n enter tow number for  division";
		cin>>e>>f;
		divi=e/f;
		cout<<"\after division=\t"<<divi;
		break ;
		
		default:
			cout<<"\ninvalid input";
			break;	
	}
	return 0;
}

