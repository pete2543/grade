#include <iostream>
#include <string>
#include<iomanip>
//void check_val(int x);
//#define SIZE 4
//void print_arr(int a[4]);
//void find_max(int vals[5]);
//float average(float num[10]);
//void edit_arr(int a[4]);
using namespace std;
/*int main()
{
	int num[4];
	float total=0;
	string name[4];
	for(int i=0;i<4;i++)
	{
		cout<<"Enter num ["<<i<<"]:";
		cin>>num[i];
		cout<<"Enter name ["<<i<<"]:";
		cin>>name[i];
	}
	cout<<"-------------------------\n";
	cout<<"Name\t\t"<<"score"<<endl;
	cout<<"-------------------------\n";
	for(int i=0;i<4;i++){
	 cout<<name[i]<<"\t\t"<<num[i]<<endl;
	  total += num[i];
	}
	cout<<"--------------------------\n";
	cout<<"Average score ="<<fixed<<setprecision(2)<<endl;
	cout<<total/4<<endl;
	return 0;
}*/
/*int main()//ไม่มีในชีส
{
	int num[10]={99,19,1,23,0,15,10,23,-26,-9};
	int temp;
	for(int n=0;n<9;n++)
		for(int n=0;n<9;n++)
	{     if(num[n] > num[n+1])
	   {  temp=num[n+1];
	      num[n+1]=num[n];
		  num[n]=temp;
	   }
	}
	for(int n=0; n<=9; n++)
	{
		cout<<num[n]<<" ";
	}
	cout<<"\n The maximum number is"<<num[9]<<endl;
	return 0;
}*/
/*int main()
{
	int num[SIZE]={1,4,5,7};
	int total=0;
	for(int i=0;i<SIZE;i++)
		total=total +num[i];
	cout<<"Sum of all elements ="<<total<<endl;
	return 0;
}*/
/*int main()
{
	int a[3]={2,-1,5};
	check_val(a[0]);
	return 0;
}
void check_val(int x)
{
	if(x>=0)
		cout<<x<<": Positive\n";
	else
		cout<<x<<": Negative\n";
}*/
/*int main()
{
	int num[4]={5,2,-1,8};
	print_arr(num);//ไม่ต้องใส่เเบล็คเก็ท
	return 0;
}
void print_arr(int a[4])
{
	for(int i=0;i<4;i++)
		cout<<a[i];
}*/
/*void main()
{
	int nums[5]={2,18,1,27,16};
	find_max(nums);
}

void find_max(int vals[5])
{
	int max =vals[0];
	for (int i=1;i<5;i++)
		if(max<vals[i])
		max =vals[i];
	cout<<"The maximum value is"<<max<<endl;
}*/
/*int main()
{
	int i;float score[10],avg_score;
	for(i=0;i<10;i++)
	{
		cout<<"Enter score"<<i+1<<":";
		cin>>score[i];
	}
	cout<<"Average score is"<<avg_score<<endl;
		return 0; 
}
float average(float num[10])
{
	float total =0.0,avg=0.0;
	for(int i=0;i<10;i++)
		total= total +num[i];
	avg = total/10.0;
	return avg;
}*/
/*int main()
{
	int num[4]={2,5};
	edit_arr(num);
	for(int i=0;i<4;i++)
		cout<<num[i]<<endl;
	return 0;
}
void edit_arr(int a[4])
{
	for(int i=0;i<4;i++)
		a[i]=a[i]*a[i];
}*/
