#include<iostream>
using namespace std;



class bank
{
	public :
		
		float total;
		float withdraw;
		float deposit;
		
		void basic()
		{
			string name;
			cout<<"Enter your name :"<<endl;
			getline(cin,name);
			cout<<"Welcome Mr./Mrs./Ms. "<<name<<" To our bank"<<endl;
			int account_number;
			cout<<"Enter your account number :"<<endl;
			cin>>account_number;	
		}	

		void  amount()
		{
			cout<<"Enter total balance in your account"<<endl;
			cin>>this->total;
			cout<<"Your total amount is : "<<total<<endl;
			
//			choose();
		}
		
		void choose()
		{
			string choice;
			
			cout<<endl<<"Do you want to deposit or withdraw : D for deposit W for withdraw "<<endl;
			cin>>choice;
			
			if(choice == "D")
			{
//				cout<<"Deposit choose"<<endl;
				d_amount();
			}
			else if (choice == "W")
			{
				w_amount();
			}
		
		}
		void d_amount()
		{
			cout<<"Enter amount to deposit"<<endl;
			cin>>this->deposit;
			total = total + deposit;
			cout<<"Your total is :"<<total<<endl;
			choose();
		}
		void w_amount()
		{
				cout<<"Enter amount to withdraw"<<endl;
			cin>>this->withdraw;
			total = total - withdraw;
			cout<<"Your total is :"<<total<<endl;
			choose();
		}

};


main()
{
	bank b;
	b.basic();
	b.amount();
	b.choose();
}