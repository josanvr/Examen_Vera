#include <iostream>

using namespace std;

int main()
{
	int n, aux, ninv, b; 
	cout<<"N:"; 
	cin>>n;
	ninv=0;
	aux=n;
	
	while (n>0)
	{
		b = n % 10;
		ninv = b + ninv * 10;
		n = n/10;
	}
	
	if(ninv == aux)
	{
		cout<<"es capicua";
	}
	else
		cout<<"no es capicua";
		
	return 0;
}
