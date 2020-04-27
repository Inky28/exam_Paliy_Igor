#include <iostream>
#define NUMBER_TEN 10

using namespace std;

void ShowTreeOne(const int height);
void ShowTreeTwo(const int height);

int main()
{
	int height, option;

	cout << "Enter height pyramid. Max = " << NUMBER_TEN << endl;

	while (true)											//Cycle verifies correct input
	{
		cin >> height;
		if (!cin || height > NUMBER_TEN || height <= 0)
		{
			cout << "Incorrect input. Please re-enter: ";
			cin.clear();
			while (cin.get() != '\n');
		}
		else
			break;
	}
	cout << "Height = " << height << endl;					// Show to console Height

	cout << "Enter option pyramid. Only 1 or 2\n";
	while (true)											//Cycle verifies correct input
	{
		cin >> option;
		if (option == 1 || option == 2)
			break;
		else
			cout << "Incorrect input. Please re-enter: ";
		cin.clear();
		while (cin.get() != '\n');
	}
	cout << "Option = " << option << endl;					// Show to console Option
	
	cout << "Your pyramid\n";
	if (option == 1)										// My first method of MY TREE
		ShowTreeOne(height);
	else if (option == 2)									// My second method of MY TREE
		ShowTreeTwo(height);

	return 0;												// End my program
}

void ShowTreeOne(const int height)							//First function TREE
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height; j++)
		{
			if (i + j >= height - 1)
				cout << "#";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void ShowTreeTwo(const int height)							//Second function TREE
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height; j++)
		{
			if (i + j >= height - 1)
				cout << "#";
			else
				cout << " ";
		}
		cout << " ";
		for (int j = 0; j < height; j++)
		{
			if (i >= j)
				cout << "#";
			else
				cout << " ";
		}
		cout << endl;
	}
}