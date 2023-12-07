#include <iostream>
#include <vector>
#include <string>

int main()
{
	int N;
	std::cin >> N;
	std::vector<std::string> s;
	for (int i = 0; i < N; ++i)
	{
		std::string s1;
		std::cin >> s1;
		s.push_back(s1);
	}

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i].size() < 10)
		{
			std::cout << s[i] << std::endl;
		}
		else
		{
			std::cout << s[i][0];
			std::cout << s[i].size() - 2;
			std::cout << s[i][s[i].size()-1] << std::endl;
		}
	}
}
