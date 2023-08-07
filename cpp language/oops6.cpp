#include<iostream>
using namespace std;



class papa 
{
	public :
		void house()
		{
			cout<<"house"<<endl;
			}
				
};

class kaka 
{
	public :
		void car()
		{
			cout<<"car"<<endl;
		}
};

class beta : public papa,public kaka
{
	public :
		void bike()
		{
			cout<<"bike"<<endl;
		}
};

main()
{
	//multiple inheritance

	beta b;
	b.house();
	b.bike();
	b.car();
//	b.property();
	
}