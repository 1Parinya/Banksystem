#include<iostream>
#include<string>
using namespace std;
void update_balance (string, float, float &balance);
int main()
{
	cout<<"Exit with 0\n";
	float balance = 10000.00;
	cout<<"Your Balance : "<< (balance)<<endl;
	string command;
	float dollars;
	do{
		cout<<"Input comand (1.or with draw, 2.Deposit): ";
		cin>>command;
		if( command == "0"){
			break;
		}
		if(command == "1" || command == "2"){
			cout << "Input amount : ";
			cin >> dollars;
		}else{
			break;
		}
	   update_balance(command,dollars,balance);
		
	 }while (command!="0");
		cout<<"Exit program\n";
	return 0;
}
	
void update_balance (string command, float dollars, float &balance)
{
	 if (command == "1"){
		 balance= balance-dollars;
		cout<<"Your banlance : "<<balance<<endl;
		}
		else if (command == "2"){
		balance=balance+dollars;
		cout<<"Your banlance : "<<balance<<endl;
		}
}
	