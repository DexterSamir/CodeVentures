#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
#define ff fflush(stdout);

int main()
{
	int l = 1, r;
	char s, p, c;
	cin >> r;
	while (l <= r)
	{
		int mid = (l + r + 1) / 2;
		cout << mid;
		ff
				cin >>	c;
		if (c == 'E')
			break;
		if (c == 'L')
		{
			cout << mid;
			ff
					cin >>	s;
			if (s == 'E')
				break;
			if (c == s)
			{
				r = mid - 1;
				continue;
			}
			if (s == 'G')
			{
				cout << mid;
				ff
						cin >>	p;
				if (p == 'E')
					break;
				if (p == s)
				{
					l = mid;
					continue;
				}
				else
					r = mid - 1;
			}
		}
		
		if (c =='G')
		{
			cout << mid;
			ff
					cin >>	s;
			if (s == 'E')
				break;
			if (c == s)
			{
				l=mid;
				continue;
			}
			if (s == 'L' )
			{
				cout << mid;
				ff
						cin >>	p;
				if (p == 'E')
					break;
				if (p == s)
				{
					r=mid-1;
					continue;
				}
				else
					l=mid;
			}
		}




		/*
        if (c== 'L') 
            r = mid - 1;
        else if(c=='G')
            l = mid;
            */
	}
	return 0;
}