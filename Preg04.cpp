#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(){
	
	int num;
	int div =0;
	cout<<"Ingrese un numero";
	cin>>num;
	
	for(int i=1; i<num;i++){
		if(num%i==0){
			div+=i;
		}
	}
	
	if(num==div){
		cout<<"El número SI es perfecto";
	}
	else{
		cout<<"El número NO es perfecto";
	}
}
