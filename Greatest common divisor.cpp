//C++ Implementation of Euclid's Algorithm for finding
// the greatest common divisor for two numbers 
// Euclid's algorithm - gcd(a, 0) = a 
//                    - gcd(a, b) = gcd(b, a mod b).
// August 20, 2018


#include <iostream>

using Index = unsigned int;// 
// a simple implementation using recursive function
Index greatest_common_divisor1(Index a, Index b)
{
	return b == 0 ? a : greatest_common_divisor1(b, a % b);
}
// a non-recursive implementation
Index greatest_common_divisor2(Index a, Index b)
{
	while (b != 0) {
		Index r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main()
{
	std::cout << greatest_common_divisor1(20, 30) << std::endl;
	std::cout << greatest_common_divisor2(20, 30) << std::endl;
}

