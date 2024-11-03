#include <iostream>
using namespace std;



int main(int argc, char** argv) 
{
	cout << "Ilu uczniow jest w Twojej klasie: ";
	int uczniowie, cukierki, x, y;
	cin >> uczniowie;
	cout << "W klasie masz: " << uczniowie << " uczniow" << endl; 
	cout << "Ile cukierkow kupila mama: ";
	cin >> cukierki;
	cout << "Mama kupila: " << cukierki << " cukierkow" << endl;
	
	x = cukierki/(uczniowie-1);
	
	cout << "Cukierkow dla kazdego ucznia: " << x << endl;
	
	y = cukierki-x*(uczniowie-1);
	cout << "Dla Jasia na wieczor zostanie: " << y << endl; 
	return 0;
}
