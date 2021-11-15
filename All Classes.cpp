#include <iostream>
#include <string>

using namespace std;

class Process{	
	public:
		void PerfectNumber(int data){
			int x = data, y = data, i = 1, t = 1, ans = 0;
			while(i <= x){
				while(t <= y){
					if(t < i){
						if(i % t == 0){
							ans = ans + t;
						}
					}
					t++;
				}
				if(ans == i){
					cout << ans << "\n" << endl;
				}
				i++;
				t = 1;
				ans = 0;
			}
		}
		void ExamResult(int data){
			int result;
			if (data < 0 or data > 100)
				result = 0;
			else if (data >= 85)
				result = 5;
			else if (data >= 70)
				result = 4;
			else if (data >= 60)
				result = 3;
			else if (data >= 50)
				result = 2;
			else
				result = 1;
			
			if (result == 0)
				cout << "ERROR\n";
			else
				cout << "The Note is:	" << result <<"\n";
		}
		void PrimeNumber(int data){
			int i = data - 1, res;
			while (i > 1){
				if (data % i == 0){
					res = 0;
					break;
				}
				else
					res = 1;
				i--;
			}
			if (data == 0)
				cout << "ERROR and finished";
			else if (res == 1)
				cout << "This number is Prime\n";
			else
				cout << "This number is not prime\n";
		}
		void TaxCalculator(double data){
			double x;
			x = data * 118 / 100;
			cout << "The price with taxes is:	" << x << "\n";
		}
		void AreTheeseNumbersPrime(int data){
			int check;
			while (data > 1){
				int i = data - 1;
				while (i > 1){
					if (data%i == 0){
						check = 1;
						break;
					}
					else
						check = 0;
					i--;
				}
				if (check == 0)
					cout << data << " number is prime\n";
				data--;
			}
		}
		void DividingSevenAndThree(int data){
				while (data > 1){
					if (data % 7 == 0 and data % 3 == 0)
						cout << data << "\n";
					data--;
				}
			}
			
};

int main(){
	Process x;
	int whatUGonnaDo;
	cout << "Please enter what you gonna do:	\n0 - Exam Result Calculator\n1 - Perfect Number Calculator\n2 - Prime Number Calculator\n3 - Tax calculator\n4 - Prime numbers to the number 2 calculator\n5 - Dividing to seven ans three\n";
	cin >> whatUGonnaDo;
	if (whatUGonnaDo == 0){
		while(true){
			int number;
			cout << "Please enter your exam result: ";
			cin >> number;
			x.ExamResult(number);
			if (number == 101)
				break;
		}
	}else if (whatUGonnaDo == 1){
		while(true){
			int number;
			cout << "Please enter the number you want:	";
			cin >> number;
			x.PerfectNumber(number);
			if (number == 0)
				break;
		}
	}else if (whatUGonnaDo == 2){
		while(true){
			int number;
			cout << "Please enter the number you wanna check:	";
			cin >> number;
			x.PrimeNumber(number);
			if (number == 0)
				break;
		}
	}else if (whatUGonnaDo == 3){
		while(true){
			int number;
			cout << "Please enter the price without tax:	";
			cin >> number;
			x.TaxCalculator(number);
			if (number == 0)
				break;
		}
	}else if (whatUGonnaDo == 4){
		while(true){
			int number;
			cout << "Please enter the number you wanna check:	";
			cin >> number;
			x.AreTheeseNumbersPrime(number);
			if (number == 0)
				break;
		}
	}else if (whatUGonnaDo == 5){
		int number;
		while(true){
			cout << "Please enter the number check that dividing seven and three:	";
			cin >> number;
			x.DividingSevenAndThree(number);
			if (number == 0)
				break;
		}
	}
}
