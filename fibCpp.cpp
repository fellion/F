# include <iostream>

void getFibNumCycle(const int number)
{
	int value = 1;
	int beforeValue = 1;
	int buffValue = 0;
	int counter = 0;
	
	while (number != counter)
	{
		buffValue = value;
		value = beforeValue + value;
		beforeValue = buffValue;

		if (value % 2 == 0)
		{
			std::cout << value << std::endl;
			counter++;
		}
	}
}

void getFibNumRecursion(const int number, int value = 1, int beforeValue = 1,int counter = 0)
{
	int buffValue = 0;

	if (value % 2 == 0)
	{
		std::cout << value << std::endl;
		++counter;
	}

	buffValue = value;
	value = beforeValue + value;
	beforeValue = buffValue;

	if (counter != number)
	{
		getFibNumRecursion(number, value, beforeValue, counter);
	}
}
int main()
{
	getFibNumCycle(10);
	getFibNumRecursion(10);

	return 0;
}