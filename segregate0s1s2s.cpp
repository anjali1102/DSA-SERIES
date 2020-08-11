#include<iostream>
using namespace std;
void segregate(int n,int A[])
{
    int low=A[0];
    int high=n-1;
    int mid=A[0];
    while(mid<=high){
        switch(A[mid])
        {
        case 1:
            mid++;
            break;
            
        case 2:
            swap(A[mid],A[high]);
            mid++;high--;
            break;
        case 0:
            swap(A[low],A[mid]);
            low++;mid++;
            break;
        }
    }
}

int main(){
    int n;
    int A[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    segregate(n,A);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}