#include<iostream>

using namespace std;

void f(int a[])
{
	for(int i=0;i<3;i++)
	{
		cout << "Dia chi cua bien mang " << &a[i] << endl;
	}
}

int main ()
{
	int arr[3] = {1,2,3};
	for(int i=0;i<3;i++)
	{
		cout << "Dia chi cua bien mang trong main " << &arr[i] << endl;
	}
	f(arr);
	return 0;
}
