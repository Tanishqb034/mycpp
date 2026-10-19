// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

int main() {
int arr[5]={12,25,30,50,44};
    int n=5;
int largest=arr[0];
    int seclrg=-1;
    for(int i=1;i<n;i++)
        {
            if(arr[i]>largest)
            {
                seclrg=largest;
                largest=arr[i];
            }
            else if( arr[i]<largest && arr[i]> seclrg)
            {
                seclrg=arr[i];
            }
        }
    cout<<largest<<endl;
    cout<<seclrg<<endl;
    return 0;
}