#include<iostream>

using namespace std;

double H(int N)
{
 return H(N-1) + 1.0/N;
}
int main()
{
int a;
cin >> a;
H(a);
}
// stop working 
