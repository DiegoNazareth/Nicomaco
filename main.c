#include <iostream>

using namespace std;

void cubos(int);

int main(void){
	int N;
	
	cout<<" Cuantos cubos desea obtener"<<endl;
	cin>>N;
	cubos(N);
	
	return 0;
}
void cubos(int N){
	int i, j, num, cubo;
	
	num = 1;
	
	for (i = 1; i <= N; i++){
		cubo = 0;
		for (j = 0; j < i; j++){
			cubo += num;
			num += 2;
		}
		
		cout<<i; cout<<"^3==";
		cout<<cubo<<endl;
	}
}
