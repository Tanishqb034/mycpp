#include <iostream>
using namespace std;
int main() {
 int arr[6]={4,3,6,7,12,34};
    int n=6;
    int k=3;
    int Maxsum=0;
    for(int i=0;i<=n-k;i++)
        {  int sum=0;
            for(int j=i;j<i+k;j++)
                {
                    sum+=arr[j];
                }
           Maxsum=max(Maxsum,sum);
        }
    cout<<Maxsum;
    return 0;
    }