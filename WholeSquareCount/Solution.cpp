#include "stdafx.h"
#include "Solution.hpp"
#include "cmath"


Solution::Solution()
{
}


Solution::~Solution()
{
}

int Solution::solution(int A, int B)
{
	if (B < 0) {							//если оба числа отрицательны, то не может быть другого ответа
		return 0;
	}
	if (A < 0) {							//брать в расчёт отрицатльные числа не имеет смысла, так как их 
		A = 0;								//невозможно получить при возведении в квадрат
	}
	return (int)sqrt(B) - ceil(sqrt(A)) + 1;
}
