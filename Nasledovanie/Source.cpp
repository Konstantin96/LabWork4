#include "CiS.h"

int main() {
	Circle_in_Square h;
	ifstream in_file("in.txt");
	if (!in_file) {
		cerr << "File open Error" << endl;
	}
	else {
		while (!in_file.eof()) {
			in_file >> h;
			cout << h<<endl;
		}
	}
	system("pause");
	return 0;
}