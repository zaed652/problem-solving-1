//write a program to ask the user to enter number 1, number2 then print the two numbers  , then swap the numbers and print them
#include <iostream>
using namespace std;
void readnumbers(int &num1, int &num2)
{

	cout << "enter the number 1\n";
	cin >> num1;
	cout << "enter the number 2\n";
	cin >> num2;

}
void swapnumbers(int &num1, int& num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

}
void printnumbers(int num1, int num2)
{
	cout << "the number 1 is : " << num1 << endl;
	cout << "the number 2 is : " << num2 << endl << endl;


}
int main()
{
	int num1, num2;
	readnumbers(num1, num2);
	printnumbers(num1, num2);
	swapnumbers(num1, num2);
	printnumbers(num1, num2);


}
