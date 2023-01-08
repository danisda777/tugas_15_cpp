#include <iostream>
using namespace std;


void perkalian(int*a,int*b){
	*a=*a* *b;
}

int main(){
	int x,y,hasil;
	cout<<"Inputkan Nilai X : ";
	cin>>x;
	cout<<"Inputkan Nilai Y : ";
	cin>>y;
	perkalian(&x,&y);
	cout<<"Hasil : "<<x;
	
	
	
	
}
