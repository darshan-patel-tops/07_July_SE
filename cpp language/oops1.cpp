#include<iostream>
using namespace std;


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