#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> p[n];
        for (auto &i : p)
            cin >> i.first >> i.second;
        sort(p, p + n);
        vector<pair<int, int>> ans;
        ans.push_back(p[0]);
        for (int i = 1; i < n; i++)
        {
            if (ans.back().second >= p[i].first)
            {
                ans.back().second = max(p[i].second, ans.back().second);
            }
            else
                ans.push_back(p[i]);
        }
        for (auto i : ans)
            cout << i.first << " " << i.second << " ";
        cout << '\n';
    }
    return 0;
}