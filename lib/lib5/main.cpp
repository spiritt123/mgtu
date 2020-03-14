#include<iostream>
using namespace std;

int main(){
	string s, res1, res2;
	char *p;
	bool fl = true, ex = true;
	while (ex && cin >> s)
	{
		if (s[s.size() - 1] == '.')
		{
			ex = false;
			s.erase(s.size() - 1, 1);
		}
		
		res2 += s + ' ';
		
		if (s[0] == 't' && fl)
		{
			for (int i = 0; i < s.size() / 2; ++i)
			{
				swap(s[i], s[s.size() - i - 1]);
			}
			fl = false;
		}
		else
		{
			for (int i = 0; i < s.size(); ++i){
				if (s[i] == 't'){
					p = &res2[res2.size()-s.size()+i-1];
					cout << (short *)p << '\n';
				}
			}
		}
		
		res1 += s + ' ';
	}

	cout << res2 << '\n' << res1;

	return 0;
}