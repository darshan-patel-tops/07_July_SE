#include<iostream>
using namespace std;

//class is made by 
// syntax class classname {  member function and data member  };
//class consists of data member and member function only
// data members means variables
// member function means functions


class iphone
{ 
	public :
	void call()
	{
		cout<<"call kiya"<<endl;
	}	
	void sms()
	{
		cout<<"sms kiya"<<endl;
		
	}
};


main()
{
	iphone object;
//	mobile kuchnai;
	object.call();
	object.call();
	object.call();
	object.call();
	object.sms();
	
//	call();

}