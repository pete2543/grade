#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
 
	cout << "Enter Number :";
	cin >> n;
	if ((n > 0)&& (n < 59))cout << "you got F";
	else if (n > 60 && n < 69)
	{
		cout << "you got D" << endl;
	}
	else if (n > 70 && n < 79)
	{
		cout << "you got C" << endl;
	}
	else if (n > 80 && n < 89)
	{
		cout << "you got B" << endl;
	}
	else if (n > 90 && n < 100)
	{
		cout << "you got A" << endl;
	}
	  cout << "End" << endl;
	
	return (0);
}
