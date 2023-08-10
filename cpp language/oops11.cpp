#include<iostream>
using namespace std;
void addition(float num1,float num2)
{
	cout<<"Add is : "<<num1+num2;
}
class calculator
{
	public :
			
			calculator()
			{
				float num1,num2;
				cout<<"Enter number 1 :"<<endl;
				cin>>num1;
				cout<<"Enter number 2 :"<<endl;
				cin>>num2;
					
					
					cout<<"Enter your choice"<<endl;
					cout<<"1 for addition"<<endl;
					cout<<"2 for subtraction"<<endl;
					cout<<"3 for division"<<endl;
					cout<<"4 for multiplication"<<endl;
					int choice;
					cin>>choice;
					
					if(choice==1)
					{
//						cout<<"Total is "<<num1+num2;
						addition(num1,num2);
					}
					else if(choice==2)
					{
						cout<<"Total is "<<num1-num2;
					}
					else if(choice==3)
					{
						cout<<"Total is "<<num1/num2;
					}
					else if(choice==4)
					{
						cout<<"Total is "<<num1*num2;
					}
					else
					{
						cout<<"Total is "<<num1+num2<<endl;
						cout<<"Total is "<<num1-num2<<endl;
						cout<<"Total is "<<num1/num2<<endl;
						cout<<"Total is "<<num1*num2<<endl;
//						cout<<"Total is "<<num1%num2;

					}
			}	
};




main()
{
	calculator calc;
	
}