// Wk2-Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void numFunction()
{
	for (int i = 1; i < 1001; i++) 
	{
		int num = i%2;
		if (num == 0)
		{
			cout << i << endl;
		}
	
	}	
}

void wordReverse()
{
	string str = "";
	cout << "Type a phrase: ";

	//"cin" operator won't take in any whitespace, so we use getline.
	getline(cin, str);
	//cout << str << endl;

	
	int n = str.length();
	// start at opposite ends
	int start = 0;
	int end = n - 1;

	while (start < end) 
	{
		swap(str[start], str[end]);
		start++;
		end--;
	}
	cout << str<<endl;
}

void vowelFunction()
{
	string myString = "";
	cout << "Type a phrase to remove vowels: " << endl;

	//"cin" operator won't take in any whitespace, so we use getline.
	getline(cin, myString);


	//loop through the string array 
	for (int i = 0; i < myString.length(); i++)
	{
		if (myString[i] == 'a' or myString[i] == 'e' or myString[i] == 'i' or myString[i] == 'o' or myString[i] == 'u' or 
			myString[i] == 'A' or myString[i] == 'E' or myString[i] == 'I' or myString[i] == 'O' or myString[i] == 'U')
		{
			myString[i] = ' ';
		}
	}
	cout << myString << endl;
}


int main() {
	numFunction(); 

	wordReverse();
	
	vowelFunction();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
