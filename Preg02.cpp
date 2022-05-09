#include<iostream>
using namespace std;

int main(void){
	int n; cin>>n;
	int cifras[10];
	int i=0;
	
	cout<<"  Datos de entrada:\n"<<"  N: "<<n<<endl;
	while(n>0){
		cifras[i]=n%10;
		n=n/10;
		i++;
	}
	
	cout<<"\n  Datos de Salida:\n";
	
	for(int s=i-1; s>=0; s--){
		cout<<"  "<<cifras[s]<<endl;
	}
}
