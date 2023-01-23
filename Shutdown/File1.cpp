#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int choice;
	cout<<"1. Shutdown Your Computer in 1 hours \n";
	cout<<"2. Shutdown Your Computer in 2 hours \n";
	cout<<"\n Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<"Your system will be shutdown after 1 hours \n";
			system("c:\\windows\\system32\\shutdown /s /t 1800 \n\n");
			break;
		case 2 : cout<<"Your system will be shutdown after 2 hours\n";
			system("c:\\windows\\system32\\shutdown /r /t 3600 \n\n");
			break;
		default : cout<<"Wrong Choice..!!\n";
	}
	return 0;
}
