#include<iostream>
using namespace std;

//polymorphism - many forms
//1 compile time
//2 run time
//a) function overloading
//b) function overriding


class add1
{
	public :
//		void sub(int a,int b)
//		{	
//		
//		cout<<"add1 wala"<<endl;
//			cout<<"Enter number 1:"<<endl;
////			cin>>num1>>num2;
//			cout<<"Total is "<<a-b<<endl;
//		}
};

class add2 :public add1
{
	public :
		void sub()
		{	int num1,num2;
		cout<<"add2 wala"<<endl;
			cout<<"Enter number 1:"<<endl;
			cin>>num1>>num2;
			cout<<"Total is "<<num1-num2<<endl;
		}
		void sub(int a,int b)
		{	
		
		cout<<"add1 wala"<<endl;
			cout<<"Enter number 1:"<<endl;
//			cin>>num1>>num2;
			cout<<"Total is "<<a-b<<endl;
		}
};
main()
{
	add2 a;
	a.sub(10,20);
	a.sub();
}