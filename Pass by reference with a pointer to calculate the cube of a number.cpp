/*#include<iostream>
using namespace std;
int cubenumber(int*);
int main() {
	int number;
	cout << " Enter a number to calculate the cube ao the number :\n";
	cin >> number;
	cout << "The cube of the number is \t" << cubenumber(&number)<<endl ;
	system("pause");
}
int cubenumber(int*nPtr) {
return  *nPtr** nPtr** nPtr;
}*/



#include<iostream>
using namespace std;
void cubenumber(int*);
int main() {
	int number;
	cout << " Enter a number to calculate the cube ao the number :\n";
	cin >> number;
	cubenumber(&number);
	cout << "The cube of the number is \t" << number << endl;
	system("pause");
}
void cubenumber(int* nPtr) {
	*nPtr= *nPtr * *nPtr * *nPtr;
}