#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <windows.h>
using namespace std;

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//      int c = 0;
//      int maxc = 0;
//      for (int i = 0; i < nums.size(); i++)
//      {
//         if(nums[i] == 1){
//             c++;
//             maxc = max(maxc,c);
//         }
//         else{
//             c = 0;
//         }
//      }
//     return maxc;

//     }
// };

// class Solution
// {
// public:
//     int findNumbers(vector<int> &nums)
//     {
//         int n = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int c = 0;
//             int temp = nums[i];

//             while (temp != 0)
//             {
//                 temp = temp/10;
//                 c++;
//             }
//                 if (c % 2 == 0)
//                 {
//                   n++;
//                 }
//         }
//         return n;
//     }
// };

// class Solution
// {
// public:
//     vector<int> sortedSquares(vector<int> &nums)
//     {
        
//         vector<int> newNum;
//         for (int x : nums)
//         {
//             int y = x*x;
//             newNum.push_back(y);
//         }
        
//         sort(newNum.begin(), newNum.end());

//         return newNum;
//     }
// };


// class Solution {
// public:
//     void duplicateZeros(vector<int>& arr) 
//     {
//       int n = arr.size();

//       for (int i = 0; i < n; i++)
//       {
//         if (arr[i] == 0){

//             for (int j = n - 1; j > i ; j--)
//             {
//                 arr[j] = arr[j-1];
//             }

//             if (i+1 < n){
//                 arr[i+1] = 0;
//             }
//             i++;
//         }
//       }
//       for (int i = 0; i < n; i++)
//       {
//        cout<<arr[i]<<" ";
//       }
//     }
// };
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if ( head == NULL){
            cout<<"Empty"<<endl;
            return 0;
        }
        ListNode* temp = head;
        ListNode* d = NULL;
        while(temp->next != NULL){
            if(val == temp->val){
                 d = temp;
            }
            temp = temp->next;
            delete d;
        }
        return head;
    }
};

int main()
{
    // vector<int> d = {1,0,1,1,1,0,1};
    // Solution s;
    // int x = s.findMaxConsecutiveOnes(d);
    // cout<<x;

    // vector<int> nums = {555, 901, 4829, 1771};
    // Solution s;
    // int x = s.findNumbers(nums);
    // cout<<x;

    // vector<int> nums = {-1, 6, -2, -4, 3, 5};
    // Solution s;
    // vector x = s.sortedSquares(nums);
    // for(int y:x){
    //     cout<<y<<" ";
    // }
    
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if(arr[i] == 0){
    //         for (int j = n-1; j > i; j--)
    //         {
    //            arr[j] = arr[j-1];
    //         }

    //         if (i+1<n){
    //             arr[i+1] = 0;
    //         }
    //         i++;
    //     }
    // }
    //  for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    
    // vector<int> arr1 = {1,2,3};
    // vector<int> arr2 = {4,5,6};
    // int n = arr1.size(), m = arr2.size();

    Solution s;
    vector<int> num1;
    vector<int> num2;
    int m,n;
    s.merge(); 

        return 0;
}
