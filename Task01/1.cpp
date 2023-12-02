#include <iostream>
#include <vector>
int
main ()
{
  int N, K;
  std::cin >> N >> K;
  std::vector < int >arr;
  for (int i = 0; i < N; i++)
    {
      int value;
      std::cin >> value;
      arr.push_back (value);
    }

  int diff = 0;
  int count = 0;
  for (int i = 0; i < arr.size (); i++)
    {
      for (int j = 1; j < arr.size (); j++)
	{
	  diff = arr[j] - arr[i];
	  if (diff == K)
	    {
	      count++;
	    }
	}
    }
  std::cout << count << std::endl;
  return 0;
}
