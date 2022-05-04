#include <iostream>
using namespace std;
int digit_sum(string s,int ind)
{
	if (ind == s.length())
	{
		return 0;
	}
	if (s[ind] >= 48  && s[ind] <= 57)
	{
	
		return ((int)s[ind] - 48 )+ digit_sum(s, ind + 1);
	}
	return digit_sum(s, ind + 1);
	
}
int main()
{
	int n;
	cin >> n;
	string st;
	while (n--)
	{
		cin >> st;
		cout <<digit_sum(st,0) << endl;
	
	}
}
