
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Hur har din dag varit idag mellan 1-10?" << endl;
	int input;
	int svar = 1;
	cin >> input;
	while (svar == 1)
	{
		if (input == 10) 
		{
			cout << "Vad roligt!" << endl;
			svar = 0;
		}
		else if (input == 9) 
		{
			cout << "Trevligt, trevligt" << endl;
			svar = 0;
		}
		else if (input == 8) 
		{
			cout << "" << endl;
			svar = 0;
		}
		else if (input == 7) 
		{
			cout << "" << endl;
			svar = 0;
		}
		else if (input == 6) 
		{
			cout << "" << endl;
			svar = 0;
		}
		else if (input == 5) 
		{
			cout << "" << endl;
			svar = 0;
		}
		else if (input == 4) 
		{
			cout << "" << endl;
			svar = 0;
		}
		else if (input == 3) 
		{
			cout << "" << endl;
			svar = 0;
		}
		else if (input == 2) 
		{
			cout << "" << endl;
			svar = 0;
		}
		else if (input == 1) 
		{
			cout << "KRAAAAAM!!!" << endl;
			svar = 0;
		}
		else 
		{
			cout << "Jag sa mellan 1-10" << endl;
			input = 0;
			cin >> input;
			system("pause");
		}
	}
	system("pause");
	return 0;
}