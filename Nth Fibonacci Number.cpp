#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        int arr[n];
        arr[0]=1; arr[1]=1;
        for(int i =2;i<n;i++){
                arr[i]=arr[i-1]+arr[i-2];
        }
        cout<<arr[n-1];
        return 0;
}
