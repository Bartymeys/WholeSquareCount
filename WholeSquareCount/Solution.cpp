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
	if (B < 0) {							//���� ��� ����� ������������, �� �� ����� ���� ������� ������
		return 0;
	}
	if (A < 0) {							//����� � ������ ������������ ����� �� ����� ������, ��� ��� �� 
		A = 0;								//���������� �������� ��� ���������� � �������
	}
	return (int)sqrt(B) - ceil(sqrt(A)) + 1;
}
