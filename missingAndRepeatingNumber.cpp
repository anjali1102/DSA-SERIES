                        //Using extra space 

//time complexity- O(n)
//space complexity-O(n) as we are considering bool array
#include<bits/stdc++.h>
using namespace std;
void missingAndRepeat(int n,bool newArr[],int Arr[])    
{
    int repeat;
    int missing;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
        if(newArr[Arr[i]]==true)
            repeat=Arr[i];
        newArr[Arr[i]]=true;
    }

    for(int i=1;i<=n;i++)
    {
        if(newArr[i]==false)
        {   missing=i;
            break;
        }
    }
    cout<<repeat<<" "<<missing;
}
int main()
{
    int n;
    cin>>n;
    bool newArr[n+1]={false};
    int Arr[n];
    missingAndRepeat(n,newArr,Arr);
    return 0;
}