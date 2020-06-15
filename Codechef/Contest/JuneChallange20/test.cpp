#include <iostream>
using namespace std;

#define ll long long
#define pii pair<ll, ll>
#define bug(a) cerr << #a << " : " << a << endl;
#define FastRead                      \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);

const int MAX = 1e6;

int main()
{
	int st = 0, en, mid, num, x, y;
	string s;
	bool ss, sss;
    cin>>en;
    x=en;
	while (st <= en)
	{
		mid = (st + en) / 2;
        y=mid;
		cout << mid << endl;
		//fflush(stdout);
        ss= (x>y);
        sss=(x<y);
		cin >> s;

		if (s == "G")
		{
			if(ss )
			st = mid + 1;
		}
		else if (s == "L"){
			if(sss)
			en = mid - 1;
		}
		else
		{
			num = mid;
			break;
		}
	}
	//cout << "omg " <<num << endl;
}