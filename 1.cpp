#include<iostream>
using namespace std;

int main()
{
	long long num;
	long long product=1;
	cin>>num;
	
	if(num==0)
	{
		product=0;
	}
	else
	{
		product=1;
	}
	while(num!=0)
	{
		product=product*(num%10);
		num=num/10;
	}
	cout<<product;
	return 0;
}
