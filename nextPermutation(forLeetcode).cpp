class Solution
{
public:
    void permutation(vector<int> &n)
    {
        int size = n.size(), k, l;
        for (k = size - 2; k >= 0; k--)
            if (n[k] < n[k + 1])
            {
                break;
            }
    }
    if (k < 0)
    {
        reverse(n.begin(), n.end());
    }
    else
    {
        for (l = size - 1; l > k; l--)
        {
            if (n[l] > n[k])
            {
                break;
            }
        }
        swap(n[k], n[l]);
        reverse(n.begin() + k + 1, n.end());
    }
}
}
;