#include<iostream>
using namespace std;


class dada
{
	public :
	 void property()
	 {
	 	cout<<"property"<<endl;
		 }	
};
class kaka : public dada
{
	public :
//		void 	
};
class chacha : public dada
{
	public :	
};

class papa : public dada
{
	public :
			
};


main()
{
	//heirarchichal inheritance
	papa p;
	chacha c;
	kaka k;
	p.property();
	c.property();
	k.property();

}