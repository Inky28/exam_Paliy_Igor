#include <iostream>

using namespace std;

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

int main()
{
	
	return 0;
}