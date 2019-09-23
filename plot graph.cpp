#include<iostream>
#include<time.h>
#include<string>
using namespace std;
void call_display(int ar[5][6]);
char call_graph(int g);
int main()
{
	int a[5][6];
	int ar[5][6];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++) {
			ar[i][j] = rand() % 10;
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
	call_display(ar);
	return 0;
}
void call_display(int ar[5][6])
{
	cout << "--------------display graph--------------------\n";
	cout << "\t0\t1\t2\t3\t4\t5\t" << endl;
	cout << "-------------------------------------------------\n";
	for (int i = 0; i < 5; i++) {
		cout << i << "|";
		for (int j = 0; j < 6; j++) {
			int g =ar[i][j];
			cout << "\t" << call_graph(g);
		}
		cout << endl;
	}
}
char call_graph(int g)
{
	char n;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			if (g == 0)
				n = ' ';
			else
				n = '*';
		}
	}
	return n;
}