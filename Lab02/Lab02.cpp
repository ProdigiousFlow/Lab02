#include <iostream>

using namespace std;

int main()
{

	std::cout << "Hello, my name is Heath and I'm going to solve the equation:\n";
	std::cout << "Ax + B = 0\n";
	std::cout << "For x\n\n";
	float A;
	float B;
	float X;

	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;

	std::cout << "\nSolving " << A << "x" << +B << "=0 for x...\n\n";

	X = (0 - B) / A;

	std::cout << "The answer is:\n";
	std::cout << "x=" << X;

	
}