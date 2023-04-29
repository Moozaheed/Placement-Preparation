#include<bits/stdc++.h>
#define ll long long
using namespace std;

//https://www.youtube.com/watch?v=Iqjo4PNQT7A&t=7s

//Not completed Yet

//Find the pivot point
int findPeak(const std::vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}



int search(int arr[],int key,int left,int right)
{
    if(left>right)return -1;

    int mid=(left+right)/2;
    if(arr[mid]==key)
    {
        return mid;
    }

    if(arr[left]<=arr[mid])
    {
        if(key>=arr[left] && key<=arr[mid])
        {
            return search(arr,key,left,mid-1);
        }
    }
    return search(arr,key,mid+1,right);


}


int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
}







// #include <iostream>
// #include <vector>

// using namespace std;

// int findPivot(vector<int>& nums) {
//     int left = 0;
//     int right = nums.size() - 1;

//     while (left < right) {
//         int mid = (left + right) / 2;
//         if (nums[mid] > nums[right]) {
//             left = mid + 1;
//         } else {
//             right = mid;
//         }
//     }

//     return left;
// }

// int main() {
//     vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
//     int pivot = findPivot(nums);
//     cout << "Pivot index: " << pivot << endl;
//     cout << "Pivot value: " << nums[pivot] << endl;
//     return 0;
// }





