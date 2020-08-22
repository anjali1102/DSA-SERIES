#include <bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int i;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ls = 0;
        int gs = 0;
        int sum = 0;
        int max = 0;
        int start = 0, m_start = 0, end = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == 0 || arr[i] / abs(arr[i]) == 1)
            {
                start = i;
                break;
            }
        }
        for (i = start; i < n; i++)
        {
            if (arr[i] == 0 || arr[i] / abs(arr[i]) == 1)
            {
                sum = sum + arr[i];
                if (sum >= max)
                {
                    m_start = start;
                    max = sum;
                    end = i;
                }
            }
            else
            {
                start = i + 1;
                i = start - 1;
                sum = 0;
            }
        }
        for (i = m_start; i <= end; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}