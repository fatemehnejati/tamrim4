#include <iostream>
using namespace std;

int main()
{
	int a , b, i =0;
	cin >> a >>b;
	if (a > b)  i = a;
	else i = b;
	while ( a != 0)
	{
		if (i % a == 0 && i % b== 0)  break ;
		i++;
	}
	cout << i;
	return 0;
}
