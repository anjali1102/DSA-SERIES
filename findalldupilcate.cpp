//1. only  when elements are from 1 to n+1 
//2. 0 will not be present in array
//3. same element should not be pesent more than twice
//4. modification in array is allowed by interviwer

//time complexity---O(n)   as traversing the array
//space complexity--O(1)   no extra space taken here


//How to get the logic??
// * As 1 point is suspicious.nothing is given casually..it has something to be done with solution..hmmm
// * total indices==total elements in array..
// indices= 0 1 2 3 4
// array=  [4,4,4,2,1]
// * thus,linked list algorithm comes into mind...
// * we can call index through element or vice versa..now lets relate it with duplication of elements 


#include<iostream>
using namespace std;
void duplicate(int n,long long int A[])
{
    for(int i=0;i<n;i++)
    {
        int pos=abs(A[i])-1;
        if(A[pos]>0)
            A[pos] = -A[pos];
        else
            cout<< (pos+1)<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    long long int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    duplicate(n,A);
    return 0;
}

