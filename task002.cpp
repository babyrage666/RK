#include <iostream>
#include <vector>

template <typename Iterator, typename T>
auto find_two_elements_with_sum(Iterator first, Iterator last, T c)
{
	for (; first != last; ++first) 
	{
		if ((*first + (++(*first))) == c) 
		{
			return (true, (first, ++first));
		}
		--first;
	}
}

int main()
{
	std::vector<int> posl = {1,2,3,4,5,6};

	find_two_elements_with_sum(posl.begin(), posl.end(), 2);
	return 0;
}
