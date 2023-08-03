#include<iostream>
using namespace std;
#include<string.h>

main()
{
	
	
	string name[5];
	cout<<"Enter 1 :"<<endl;
	getline(cin,name[0]);
	cout<<"Enter 2 :"<<endl;
	getline(cin,name[1]);
	cout<<"Enter 3 :"<<endl;
	getline(cin,name[2]);
	cout<<"Enter 4 :"<<endl;
	getline(cin,name[3]);
	cout<<"Enter 5 :"<<endl;
	getline(cin,name[4]);
	
	cout<<name[0]<<endl;
	cout<<name[1]<<endl;
	
	cout<<name[2]<<endl;
	cout<<name[3]<<endl;
	cout<<name[4]<<endl;
}