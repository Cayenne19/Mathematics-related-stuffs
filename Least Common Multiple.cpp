// C++ Implementation of algorithm for the calculation
// of the least common multiple number of two values
// August 20, 2018

// A possible way of implementing this algorithm is by
// using the greatest common factor algorithm 

using Index = unsigned int;


#include <iostream>
#include <numeric>
#include <algorithm>

Index greatest_common_multiple(Index a, Index b)
{
	return b == 0 ? a : greatest_common_multiple(b, a % b);
}

Index least_common_multiple(Index a, Index b)
{
	Index h = greatest_common_multiple(a, b);
	return h ? (a * b) / h : 0;
}

int main()
{
	std::cout << least_common_multiple(3, 4) << std::endl;
	std::cout << least_common_multiple(20, 30) << std::endl;
	std::cout << least_common_multiple(9, 81) << std::endl;
}