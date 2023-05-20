#include <iostream>
#include <string>
#include <windows.h> 
#include <conio.h>
using namespace std;
const int dataSize = 1000;
int main()
{
	cout << "Process ID: " << GetCurrentProcessId() << "\n";
	string str;
	cout << "Enter data: ";
	getline(cin, str);
	char s[dataSize];
	strcpy_s(s, str.c_str());
	cout << "Data address: " << "0X" << &s << "\n";
	while (true)
	{
		cout << "\nThe process is running now.\nPress 1 to change the data.\nPress 2 to finish the process.\n";
		char ch = '0';
		while (ch != '1' && ch != '2')
			ch = _getch();
		if (ch == '1')
		{
			cout << "Enter new data: ";
			getline(cin, str);
			strcpy_s(s, str.c_str());
		}
		else
			break;
	}
	cout << "The process has been finished successfully.\n";
	return 0;
}