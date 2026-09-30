// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
   int arr[6]={22,21,11,34,66,12};
    int n=6;
    int k=3;
    int MaxSum=1000;
    for(int i=0;i<=n-k;i++)
        {
            int sum=0;
            for(int j=i;j<i+k;j++)
                {
                    sum+=arr[j];
                }
            MaxSum=min(MaxSum,sum);
        }
    cout<<MaxSum;
    return 0;
}