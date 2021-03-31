#include<iostream>

using namespace std;

double H(int N) 
{
 if (N == 1) return 1.0;
 return H(N) + 1.0/N;
}
int main()
{
int a;
cin >> a;
H(a);
}
//n=1, chuong trinh chay binh thuong
//n#{0,1} stopped working

