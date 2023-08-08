#include<iostream>
using namespace std;

//Scope resolution ::
//it is used to increase the scope of the function
class dada
{
	public :
		int zameen()
		{
			cout<<"Zameen"<<endl;
		}
};

class kaka : public dada
{
	public :
//		using dada::zameen;
		void car()
		{
//dada::zameen();
			cout<<"Car"<<endl;
		}
};

class papa : public dada
{
	public :
		using dada::zameen;
//		dada::zameen();
		void house()
		{
		dada::zameen();
			cout<<"House"<<endl;
		}
};
class beta : public papa,public kaka
{
	public :
		
//		using dada::zameen;
//		using dada::zameen;
//		dada::zameen();
		void bike()
		{
			
			cout<<"Bike"<<endl;
		}
};

main()
{
	
	beta b;
	b.bike();
	b.car();
	b.house();
//	b.zameen();
//using dada::zameen;
//dada::zameen();
dada d;
d.zameen();
	
	
}