#include<iostream>
#include<string>
using namespace std;
void calprice(int price[5][3]);
void display(string name[5],int price[5][3]);
int main()
{
	string name[5];
	int price[5][3]; 
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Product Name :";
		cin>>name[i];
		cout<<"price :";
		cin>>price[i][0];
	}
	calprice(price);
	display(name,price);
	return 0;
}
void calprice(int price[][3])
{
	for(int i=0;i<5;i++)
	{
		price[i][1]=price[i][0]*0.07;
		price[i][2]=price[i][1] +price[i][0]; 
	}
}
void display(string name[],int price[][3])
{
	cout<<"No.\tproduct\tprice\tvat7%\tNet"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<i+1<<"\t"<<name[i]<<"\t"<<price[i][0]<<"\t"<<price[i][1]<<"\t"<<price[i][2];
	}
}