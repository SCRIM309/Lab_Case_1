#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
	cout << "Witaj w naszym banku" << endl;
	cout << "Podaj numer PIN: ";
	string PIN; // int pomija zero na poczatku 0329=329, natomiast string zapisuje znaki
	cin >> PIN;
	
	if (PIN=="1729")
	{
		cout << "Poprawny PIN";
	}
	else
	{
		cout<<"Niepoprawny PIN";
	}
	return 0;
}
