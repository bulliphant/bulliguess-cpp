#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

inline int ReadNumber(char* szBuffer);

void main()
{
	const int BUFFER_SIZE = 32;
	char szBuffer[BUFFER_SIZE];
	int  nGuessNumber;
	int  nGuessesLeft = 5;
	int  nSecretNumber;

	cout << (void*)szBuffer << endl;

	cout << "Enter the secret number" << endl
		<< "-> ";
	nSecretNumber = ReadNumber(szBuffer);

	system("cls");

	cout << "Good one..." << endl
		<< "Let the game begin!" << endl;

	cout << "Enter your guess ->";
	nGuessNumber = ReadNumber(szBuffer);

	while ((nGuessesLeft > 0) && (nGuessNumber != nSecretNumber))
	{
		cout << "Wrong!" << endl
			<< "Guess again -> ";
		nGuessNumber = ReadNumber(szBuffer);

		nGuessesLeft--;
	}

	if (nGuessNumber == nSecretNumber)
	{
		cout << "Good job!" << endl;
	}
	else
	{
		cout << "Maybe at the next time..." << endl;
	}
}

inline int ReadNumber(char* szBuffer)
{
	scanf("%s", szBuffer);
	return atoi(szBuffer);
}
