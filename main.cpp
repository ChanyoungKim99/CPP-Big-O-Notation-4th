#include <iostream>

void CountDown(int n)
{
	// base case
	if (n == 0)
	{
		std::cout << "Fire" << std::endl;;
		return;
	}

	// recursive case
	std::cout << n << std::endl;
	CountDown(n - 1);
};

void CountDown2(int n)
{
	// base case
	if (n == 0)
	{
		std::cout << "Fire" << std::endl;;
		return;
	}

	// recursive case
	std::cout << n << std::endl;
	CountDown(n - 2);
};

int main()
{
	// 10 9 8 7 6 5 4 3 2 1 Fire
	CountDown(10);
}

// CountDown의 Ot, Os?
// Ot = n 
// Os = n (함수를 계속 호출하면서, 스택에 n이 계속 생성되므로)


// CountDown2의 Ot, Os?
// Ot = n 
// Os = n (1/2 * n = n)