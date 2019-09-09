#include<iostream>
#include<string>
using namespace std;
void ListStudent(string A[10], int B[10], int);
char Calgrade(int);
int main()
{
	int i,s;
	int  B[10];
	string A[10];
	cout << "lnput Number of Student :";
	cin >> s;
	for (i = 0; i< s; i++)
	{
		cout << "lnput Name :";
		cin >> A[i];
		cout << "lnput score :";
		cin >> B[i];
		cout << endl;
	}
	ListStudent(A, B, s);
	return 0;
}
void  ListStudent(string Name[10], int score[10], int array)
{
	int i;
	for (i = 0; i < array; i++)
	{
		int g = score[i];
		cout << "Student  Name :" << Name[i]<<"\t" << "Score " << i + 1<<"=" << score[i] << "\t";
		cout << "Your grade is ";
		cout<< Calgrade(g);
		cout << endl;
	}
}
char Calgrade(int g)
{
	char grade;
	if (g >= 80)
	{
		grade = 'A';
	}
	else if (g >= 70)
	{
		grade = 'B';
	}
	else if (g >= 60)
	{
		grade = 'C';
	}
	else if (g >= 50)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	return grade;
}