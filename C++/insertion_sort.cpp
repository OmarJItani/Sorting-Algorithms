#include <iostream>
using namespace std;

#include <vector>

vector<int> insertion_sort(vector<int> nums){
    /*
    Sorts an array using insertion sort algorithm.
    Input:
    nums: Unsorted array
    Output:
    Sorted array 
    */

    // for each element in nums
    for (int i=0 ; i<nums.size() ; i++){
        int pos = i;
        // find its position in the sorted portion of the vector
        for (int j=0 ; j<i ; j++){
            if (nums[j] > nums[i]){
                pos = j;
                break;
            }
        }
        // place it in its position
        nums.insert(nums.begin()+pos,nums[i]);
        nums.erase(nums.begin()+i+1);
    }
    return nums;
}

int main(){

    vector<int> nums = {10,5,2,3,8};
    vector<int> sorted_nums = insertion_sort(nums);

    for (int i=0 ; i<sorted_nums.size() ; i++){
        cout << sorted_nums[i] << " ";
    }
    cout << endl;

    return 0;
}