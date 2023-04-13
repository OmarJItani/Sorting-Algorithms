#include <iostream>
using namespace std;

#include <vector>

vector<int> selection_sort(vector<int> nums){
    /*
    Sorts an array using selection sort algorithm.
    Input:
    nums: Unsorted array
    Output:
    Sorted array 
    */
    
    int min_ind, temp;

    for (int i=0 ; i<nums.size() ; i++){
        min_ind = i;
        for (int j=i ; j<nums.size() ; j++){
            if (nums[j] < nums[min_ind]){
                min_ind = j;
            }
        }
        temp = nums[i];
        nums[i] = nums[min_ind];
        nums[min_ind] = temp;
    }
    return nums;
}

int main(){

    vector<int> nums = {10,5,2,3,8};
    vector<int> sorted_nums = selection_sort(nums);

    for (int i=0 ; i<sorted_nums.size() ; i++){
        cout << sorted_nums[i] << " ";
    }
    cout << endl;


    return 0;
}