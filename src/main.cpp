#include <iostream>
int nums[] = {3, 5};
const char *words[] = {"fizz", "buzz"};
int main()
{

	for (int i = 0; i < 100; i++)
	{
		bool write = true;
		for (int j = 0; j < sizeof(nums) / sizeof(int); j++)
		{
			if (i % nums[j] == 0)
			{
				write = false;
				std::cout << words[j];
			}
		}
		if (write)
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}
}
