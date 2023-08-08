#include<iostream>
using namespace std;

//constructor 
//it is invoked by default whenever object is created
class bua1
{
	public :
		/* syntax for constructor 
		it is supposed to have same name as classname to create constructor
		 classname()
		{
		}
		
		*/
		
		//two types of constructor
		//1 default
		//2 parameter
	 bua1()
	{
		cout<<"Bua ka  Beta"<<endl;
	}
	 bua1(int a)
	{
		cout<<"value is :"<<a<<endl;
	}
	void addition()
	{
		cout<<"addition"<<endl;
	}
	/*
	
	destructor syntax
	~classname
	*/
	
~bua1()
	{
		cout<<"Bua ka ladka chala gaya"<<endl;
	}
	//you generally use this to clear memory pr object
	//it is callesd at last
	//it is invoked at last
};


main()
{
	bua1 b(5);
	b.addition();
	b.addition();
	b.addition();
	b.addition();
	b.addition();
}