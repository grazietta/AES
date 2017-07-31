

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void testing(int* a){
	a[0] = 200;
}

int main(){
	int a[3] = {3,2,1};
	int b[3];

	testing(a);

	

	for(int i = 0; i< 3;i++){
	cout << b[i] << endl;
	}
}