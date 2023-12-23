#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	if (N == 2)
	{
		std::cout << "NO" << std::endl;
	}

	if (N % 2 == 0)
	{
		std::cout << "YES" << std::endl;
		return 0;
	}

	std::cout << "NO" <<std::endl;
	return 0;
}
