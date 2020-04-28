#include <iostream>

using namespace std;

<<<<<<< HEAD
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
=======
bool CorrectCard(const char* NumberCard)
{
	int Sum = 0;
	int Size = strlen(NumberCard);
	int Parity = (Size - 1) % 2;
	char ZeroSymb[2] = "\0";

	for (int i = Size; i > 0; i--)
	{
		ZeroSymb[0] = NumberCard[i - 1];
		int Digit = atoi(ZeroSymb);

		if (Parity == i % 2)
			Digit = Digit * 2;

		Sum += Digit / 10;
		Sum += Digit % 10;
	}

	return 0 == Sum % 10;
}

>>>>>>> a8f2732737afb188d4aa5cf942be93fa0d0ba35e