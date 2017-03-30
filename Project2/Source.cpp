
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Hur har din dag varit idag mellan 1-10?" << endl;
	string input;
	int svar = 1;
	cin >> input;
	while (true){
		if (input == "10") {
			cout << "Vad roligt!" << endl;
			break;
		}
		else if (input == "9") {
			cout << "Trevligt, trevligt" << endl;
			break;
		}
		else if (input == "8") {
			cout << "" << endl;
			break;
		}
		else if (input == "7") {
			cout << "" << endl;
			break;
		}
		else if (input == "6") {
			cout << "" << endl;
			break;
		}
		else if (input == "5") {
			cout << "" << endl;
			break;
		}
		else if (input == "4") {
			cout << "" << endl;
			break;
		}
		else if (input == "3") {
			cout << "" << endl;
			break;
		}
		else if (input == "2") {
			cout << "" << endl;
			break;
		}
		else if (input == "1") {
			cout << "KRAAAAAM!!!" << endl;
			break;
		}
		else {
			cout << "Jag sa mellan 1-10" << endl;
			cin >> input;
		}
	}
	system("pause");
	return 0;
}