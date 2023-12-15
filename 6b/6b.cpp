#include <iostream>
int main()
{
	const int n = 5;
	int i;
	int a[n];
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for (i = n - 1; i > 0; --i)
	{
		if (a[i] % 5 == 0)
		{
			std::cout << a[i];
			break;
		}
	}
	return 0;
}