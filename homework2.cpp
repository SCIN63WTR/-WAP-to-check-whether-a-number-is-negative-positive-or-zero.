//WAP to check whether a number is negative, positive or zero.
#include <iostream>
using namespace  std;
int main()

{
	float declarednum; //float cuz like what if they want to type a number like 1.32423 or 2.4234

	//user input for the float variable
	cout << "Please enter a number: ";
	cin >> declarednum;

	//if else if ladder

	if (declarednum > 0)
	{
		cout << "positive " << declarednum << endl;
	}
	else if (declarednum < 0)
	{
		cout << "negative " << declarednum << endl;
	}
	else
	{
		cout << "zero " << declarednum;
	}


	int x;
	cin >> x;

}
	
