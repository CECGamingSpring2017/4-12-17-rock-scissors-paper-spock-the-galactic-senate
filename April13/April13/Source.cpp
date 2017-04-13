#include <iostream>
#include<string>
int input;
using namespace std;
int main() {
	string input;
	string inventory[5];
	cout << "Here is your inventory" << endl;
	for (int i = 0;i < 5; i++)
		inventory[i] = "";

	for (int i = 0; i < 1;i++)
		cout << inventory[i] << endl;

	cout << "Hey champ do you want the magic sword?" << endl;
	cin >> input;
	if (input.compare("yes") == 0) {
		inventory[1] = "Magic Sword";
	}

	for (int i = 0;i < 5;i++)
		cout << inventory[i] << endl;

	if (inventory[1] == "Magic Sword") {
		cout << "You have won" << endl;
	}




}