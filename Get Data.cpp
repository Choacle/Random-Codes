#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream writeFile("test.txt");
	ifstream readFile("test.txt");
	string semicolon = "";
	string process;
	int proc;
	
	cout << "Please enter what you want to do\nread    -    write    -    remove\n";
	cin >> process;
	cout << process;
	if (process == "read")
		proc = 0;
	if (process == "write")
		proc = 1;
	if (process == "remove")
		proc = 2;
	
	switch (proc){
		case 1:
			if (writeFile.is_open()){
				writeFile << "hello dude";
				writeFile.close();
			}
		case 0:
			if (readFile.is_open()){
				while (getline(readFile, semicolon)){
					cout << semicolon << endl;
				}
			readFile.close();
			}
		case 2:
			int condition = remove("test.txt");
	}
return 0;
}
