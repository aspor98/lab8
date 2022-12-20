#include<iostream>
using namespace std;

char before(char x){

	char output;
		if(x>= 'A' && x <='Z'){
		output = x - 1;
			if(x=='A'){
			output = 'Z';
			}

		}else{
	 	output = '0';
		}
	return output;
}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
