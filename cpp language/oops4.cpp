#include<iostream>

using namespace std;

//inheritance is excessing the property of parent into child

class petrolcar
{
	public :
		void engine()
		{
			cout<<"engine of petrol"<<endl;
			}	
		void body()
		{
			cout<<"body"<<endl;
		}
		void interior()
		{
			cout<<"interiror"<<endl;
			
		}
		void tyre()
		{
			cout<<"tyre"<<endl;
		}
		void sterring()
		{
			cout<<"steering"<<endl;
		}
		void seat()
		{
			cout<<"seat"<<endl;
		}
		void mirror()
		{
			cout<<"mirror"<<endl;
		}
		void fuel()
		{
			cout<<"fuel"<<endl;
		}
		void door()
		{
			cout<<"door"<<endl;
		}
		void gearbox()
		{
			cout<<"gear"<<endl;
		}
		
};
//syntax : to inherit   ----    class classname : public inherit_hone_wala_class
class ec : public petrolcar
{
	public :
		void battery()
		{
			cout<<"battery"<<endl;
		}
		void engine()
		{
			cout<<"engine of electric"<<endl;
		}
		void charger()
		{
			cout<<"cjharger"<<endl;
		}
		
};


 main()
{
	//single level inheritance
	//always make the object of inherited class
	ec e;
	e.tyre();
	e.battery();
	e.body();
	e.charger();
	e.engine();
	e.engine();
	e.engine();
//	return 0;
}