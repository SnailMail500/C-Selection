// C++ Selection.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main() {
	bool correct = false;
	int ans = 0;
	while (correct == false) {
		cout << "How many goals has Nkunku scored for Chelsea? \n";
		cout << "1. 1 \n2. 2 \n3. 3\n";
		cin >> ans;
		if (ans == 2) {
			cout << "Correct!\n";
			correct = true;
		}
		else {
			cout << "incorrect, try again\n";
			correct = false;
		}
		cout << "The only purpose of this statement is to indicate that the while loop works\n";
	}
	cout << "The only purpose of this statement is to prove that the while loop breaks after the condition is met\n";
	return 0;
}