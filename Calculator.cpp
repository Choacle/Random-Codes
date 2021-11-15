#include <iostream>
using namespace std;

int main(){
	double numOne, numTwo, answer;
	char operation;
	cout << "<Number One> <Number Two> <Number Three> : ";
	cin >> numOne >> operation >> numTwo;
	switch (operation){
		case '+':
			answer = numOne + numTwo;
			break;
		case '-':
			answer = numOne - numTwo;
			break;
		case 'x':
			answer = numOne * numTwo;
			break;
		case '/':
			answer = numOne / numTwo;
			break;
		default:
			answer = 0;
			break;
	}
	cout << answer;
	
	return 0;
}
