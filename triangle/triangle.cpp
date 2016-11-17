#include <iostream>
#include <cmath>

using namespace std;

float triangle(float base, float height)
{
	float multiplier = 0.5;
	return base * height * multiplier;
}

int main()
{
	cout << triangle(1.5, 5.0) << endl;
	return 0;
}