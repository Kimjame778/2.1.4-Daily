#include <iostream>
#include <cmath>

using namespace std;

bool divisableByFive(int a, int b)
{
	return (a % 5 == 0) && (b % 5 == 0);
}


int main()
{
	int divide, divideSecond;

	cout << "When did you start Highschool?: \n";
	cin >> int divide;
	cin >> int divideSecond;
	cout << divisableByFive(int a, int b);
}


// Create a function that checks if two numbers are divisible by 5. Return 1 if they are both
// divisable by 1, 0 if both are not.