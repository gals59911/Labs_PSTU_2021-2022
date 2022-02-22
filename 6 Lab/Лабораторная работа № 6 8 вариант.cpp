#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[] = "2321391719";
	char t;
	for (int j = 1; j < strlen(s); j++)
	{
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] <= s[i + 1])
			{
				t = s[i + 1];
				s[i + 1] = s[i];
				s[i] = t;
			}
		}
	}
	for (int i = 0; i < strlen(s); i++)
	{
		cout << s[i]<<" ";
	}

}