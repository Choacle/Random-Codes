#include <iostream>
using namespace std;

class Romans{
	public:
		void RomanToDecimal(string romanNumber){
			int counter = 0;
			for(int i = 0; i < romanNumber.size(); i++){
				if (romanNumber[i] == 'C' and romanNumber[i+1] == 'M'){
					counter = counter + 900;
					i++;
				}else if (romanNumber[i] == 'M'){
					counter = counter + 1000;
				}else if (romanNumber[i] == 'C' and romanNumber[i+1] == 'D'){
					counter = counter + 400;
					i++;
				}else if (romanNumber[i] == 'D'){
					counter = counter + 500;
				}else if (romanNumber[i] == 'X' and romanNumber[i+1] == 'C'){
					counter =counter + 90;
					i++;
				}else if (romanNumber[i] == 'C'){
					counter = counter + 100;
				}else if (romanNumber[i] == 'X' and romanNumber[i+1] == 'L'){
					counter = counter + 40;
					i++;
				}else if (romanNumber[i] == 'L'){
					counter = counter + 50;
				}else if (romanNumber[i] == 'I' and romanNumber[i+1] == 'X'){
					counter = counter + 9;
					i++;
				}else if (romanNumber[i] == 'X'){
					counter = counter + 10;
				}else if (romanNumber[i] == 'I' and romanNumber[i+1] == 'V'){
					counter = counter + 4;
					i++;
				}else if(romanNumber[i] == 'V'){
					counter = counter + 5;
				}else if (romanNumber[i] == 'I'){
					counter = counter + 1;
				}
			}
			cout << counter << "\n";
		}
		void DecimalToRoman(int data){
			int iCounter = 0, vCounter = 0, ivCounter = 0, xCounter = 0, ixCounter = 0, lCounter = 0, xcCounter = 0, cCounter = 0, cdCounter = 0, dCounter = 0, cmCounter = 0, mCounter = 0;
			if (data > 999){
				while (data > 999){
					data = data - 1000;
					mCounter++;
				}
			}
			if (data < 1000 and data > 899){
				cmCounter++;
				data = data - 900;
			}
			if (data < 900 and data > 499){
				dCounter++;
				data = data - 500;
			}
			if (data < 500 and data > 399){
				cdCounter++;
				data = data - 400;
			}
			if (data < 400 and data > 90){
				while (data > 100){
					data = data - 100;
					cCounter++;
				}
			}
			if (data < 100 and data > 89){
				xcCounter++;
				data = data - 90;
			}
			if (data < 90 and data > 39){
				data = data - 50;
				lCounter++;
			}
			if (data < 40 and data > 9){
				while (data > 9){
					data = data - 10;
					xCounter++;
				}
			}
			if (data == 9){
				ixCounter = 1;
			}
			if (data < 9 and data > 4){
				while (data > 4){
					data = data - 5;
					vCounter++;
				}
			}
			if (data == 4){
				ivCounter++;
			}if (data < 4){
				while (data > 0){
					data--;
					iCounter++;
				}
			}
			
			
			if (mCounter > 0){
				while (mCounter > 0){
					cout << "M";
					mCounter--;
				}
			}
			if (cmCounter == 1){
				cout << "CM";
			}if (dCounter == 1){
				cout << "D";
			}if (cdCounter == 1){
				cout << "CD";
			}if (cCounter > 0){
				while (cCounter > 0){
					cout << "C";
					cCounter--;
				}
			}if (xcCounter == 1){
				cout << "XC";
			}if (lCounter == 1){
				cout << "L";
			}if (xCounter > 0){
				while (xCounter > 0){
					cout << "X";
					xCounter--;
				}
			}if (ixCounter == 1){
				cout << "IX";
			}if (vCounter == 1){
				cout << "V";
			}if (ivCounter == 1){
				cout << "IV";
			}if (iCounter > 0){
				while (iCounter > 0){
					cout << "I";
					iCounter --;
				}
			}
			cout << "\n";
		}
};

int main(){
	Romans x;
	string whatYouGonnaDo;
	string rtd;
	int dtr;
	while (true){
		cout << "Please enter what you want to Do(decimaltoroman or romantodecimal):	";
		cin >> whatYouGonnaDo;
		if (whatYouGonnaDo == "romantodecimal"){
			cout << "Please enter the Roman number:	";
			cin >> rtd;
			x.RomanToDecimal(rtd);
		}
		else if (whatYouGonnaDo == "decimaltoroman"){
			cout << "Please enter the Decimal number:	";
			cin >> dtr;
			x.DecimalToRoman(dtr);
		}
	}
return 0;	
}
