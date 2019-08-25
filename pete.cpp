#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void checknum(int,int);
int main()
{
	cout << "###Welcome to guessing number game#### \n";
	cout << "Secret the has deen chosen" << endl;
	srand(time(NULL));
	int n,g;
	int i = 0;
	n = rand() % 10 + 1;
	do {
		cout << "Guess the number(1 to 10):";
		cin >> g;
		i++;
		checknum(n,i);
	} while (g != n);
	cout << "You made " << i << "guesses" << endl;
	return(0);
}
void checknum(int Rand, int Input)
{
		if (Input < Rand) {
			cout << "The secret number is higher" << endl;
		}
		else if (Input == Rand) {
			cout << "Congratulations!" << endl;
			cout << "The secret number is " << Rand << endl;
			
		}
		else {
			cout << "The secret number is lower" << endl;
			
		}
}