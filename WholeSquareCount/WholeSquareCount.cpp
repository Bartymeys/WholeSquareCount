// WholeSquareCount.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Solution.hpp"
#include <iostream>


int main()
{
	std::cout << "Number of whole squares: " << Solution::solution(3, 12) << std::endl;
	system("pause");
	return 0;
}
