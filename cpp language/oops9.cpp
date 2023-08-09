#include<iostream>

using namespace std;



//abstract function 
//Data hiding
//when inherited you want to compulsory implement that function
//virtual is the keyword that is used
class rbi
{
		public :
		virtual	void interest();
		virtual void withdraw();
};

class bank :public rbi
{
	public :
		void smscharge()
		{
			cout<<"sms charges"<<endl;
		}
		void interest()
		{
			cout<<"3%"<<endl;
		}
		void withdraw()
		{
			cout<<"100000"<<endl;
		}
};


main()
{
	bank b;
	b.smscharge();
	b.interest();
	b.withdraw();

//rbi r;
//r.interest();
//r.withdraw();

}

//you cannot create object for the virtual class or abstract class