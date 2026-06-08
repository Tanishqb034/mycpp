#include <iostream>
using namespace std;
int main() {
 int left=0,right=4; //Size -1 for targeting index 
 bool isPalandrome=true;
 int arr[5]={1,2,3,3,1};
 while(left<right)
 {
     if(arr[right]==arr[left])
     {
         isPalandrome=true;
         left++;
         right--;
     }
     else
     {
         isPalandrome=false;
         cout<<"THIS IS NOT A PLANDROME "<<endl;
         break;
     }
 }
 if(isPalandrome)
 {
     cout<<"IT IS A PALANDROME"<<endl;
 }
    return 0;
}
//  THIS IS ANOTHER APPROCH BETTER THEN THIS BASIC CODE
/*#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 3, 1};
    int left = 0;
    int right = 4; 
    bool isPalindrome = true; // Corrected spelling

    while (left < right) {
        if (arr[left] != arr[right]) { // Change to checking for mismatch
            isPalindrome = false;
            break; // Stop immediately if a mismatch is found
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "IT IS A PALINDROME" << endl;
    } else {
        cout << "THIS IS NOT A PALINDROME" << endl; // Moved output here for cleaner logic
    }

    return 0;
}
*/
