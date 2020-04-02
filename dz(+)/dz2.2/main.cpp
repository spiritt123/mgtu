#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> split(string s){
    string con = "";
    vector <string> res;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            res.push_back(con);
            con = "";
        }
        else
        {
            con += s[i];
        }
    }
    res.push_back(con);
    return res;
}

int main()
{
    int n;
    cin >> n;
    string m;
    cin >> m;

    string temp;
    cin >> temp;
    vector<string> strings;
    getline(cin, temp);
    strings.push_back(temp);
    for (int i = 0; i < n-1; ++i)
    {
        string temp;
        getline(cin, temp);
        strings.push_back(temp);
    }
    for (int k = 0; k < n; ++k)
    {
        vector<string> temp = split(strings[k]);
        for (int i = 0; i < temp.size(); ++i)
        {
            if (i & 1)
            {
                if (temp[i][0] == 'n')
                {
                    cout << m << ' ';
                }
                else
                {
                    cout << temp[i] << ' ';
                }
            }
            else
            {
                if (temp[i][0] != 'l')
                {
                    cout << temp[i] << ' ';
                }
            }
        }
        cout << '\n';
    }
    return 0;
}