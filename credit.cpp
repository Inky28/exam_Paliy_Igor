#include <iostream>

using namespace std;

void ShowCardNumber(const char NumberCard[], const int SIZE_CARD);

int main()
{
	const int SIZE_CARD = 16;
	char NumberCard[SIZE_CARD + 1]{};

	CheckInput(NumberCard, SIZE_CARD);

	ShowCardNumber(NumberCard, SIZE_CARD);

	cin.clear();
	
	return 0;
}

void ShowCardNumber(const char NumberCard[], const int SIZE_CARD)
{
	cout << "Your card number\n";
	for (size_t i = 0; i < SIZE_CARD; i++)
	{
		cout << NumberCard[i];

		if (i == 3 || i == 7 || i == 11)
			cout << " ";
	}
}