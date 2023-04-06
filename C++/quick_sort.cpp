#include <iostream>
using namespace std;
#include <vector>

vector<int> quick_sort(vector<int> nums){
    if (nums.size() <= 1){
        return nums;
    }

    int pivot = nums[0];
    vector <int> left = {};
    vector <int> right = {};

    for(int i=1; i<nums.size(); i++){
        if (nums[i] <= pivot){
            left.push_back(nums[i]);
        }
        else{
            right.push_back(nums[i]);
        }
    }

    left = quick_sort(left);
    right = quick_sort(right);
    
    // Concatenate left + {pivot} + right
    vector<int> res = left;
    res.push_back(pivot);
    res.insert(res.end(),right.begin(),right.end());

    return res;
};


int main(){
    vector<int> nums = {1,5,4,10,7,3};
    vector<int> nums_sorted = {1,3,4,5,7,10};
    
    bool test = quick_sort(nums) == nums_sorted;
    if (test){
        cout << "Sorted Successfully" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

    return 0;
}