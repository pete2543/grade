#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void checknum(int);
int main()
{
	cout << "###Welcome to guessing number game#### \n";
	cout << "Secret the has deen chosen" << endl;
	srand(time(NULL));
	int n;
	n = rand() % 10 + 1;
	checknum(n);
	return(0);
}
void checknum(int Rand )
{
	int g;
	int i = 0;
	do {
		cout << "Guess the number(1 to 10):";
		cin >> g;
		if (g < Rand) {
			cout << "The secret number is higher" << endl;
			i++;
		}
		else if (g == Rand) {
			cout << "Congratulations!" << endl;
			cout << "The secret number is " << Rand << endl;
			i++;
		}
		else {
			cout << "The secret number is lower" << endl;
			i++;
		}
	} while (g != Rand);
	cout << "You made " << i << "guesses" << endl;

}