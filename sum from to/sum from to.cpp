// sum from to.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	

    int first , last;

    int sum = 0;

   cout << "Enter two integers (first and last): " << endl;

   cout << "        " << endl;


   cout << "-------------------------" << endl;

   cout << "        " << endl;

   cout << "first : "; cin >> first;

   cout << "        " << endl;


   cout << "last : "; cin >> last;

    if (cin.fail()) {
        cout << "Invalid input." << endl;
        return 1;
    }

	if(first <= last)
    {
        for (int i = first; i <= last; i++)
            sum = sum + i;
		

		cout << "        " << endl;

	cout << "-------------------------" << endl;

	cout << "        " << endl;


	cout << "The sum from " << first << " to " << last << " is: " << sum << "."<< endl;
    }

	else if (first >= last)
	{
		for (int i = first; i >= last; i--)
			sum = sum + i;
		


		cout << "        " << endl;

		cout << "-------------------------" << endl;

		cout << "        " << endl;


		cout << "The sum from " << last << " to " << first << " is: " << sum << "." << endl;
		
	}
	return 0;

}
