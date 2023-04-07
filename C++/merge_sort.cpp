#include <iostream>
using namespace std;
#include <vector>


vector<int> merge_two_sorted_lists(vector<int> left , vector<int> right){
    int r_ind = 0;
    int l_ind = 0;
    vector<int> sorted_list = {};
    
    while ((r_ind < right.size()) && (l_ind < left.size())){
        if (right[r_ind] <= left[l_ind]){
            sorted_list.push_back(right[r_ind]);
            r_ind += 1;
        }
        else{
            sorted_list.push_back(left[l_ind]);
            l_ind += 1;
        }
    }

    while (r_ind < right.size()){
        sorted_list.push_back(right[r_ind]);
        r_ind += 1;
    }

    while (l_ind < left.size()){
        sorted_list.push_back(left[l_ind]);
        l_ind += 1;
    }

    return sorted_list;
};

vector<int> merge_sort(vector<int> nums){
    // if nums is empty or has one element, return nums
    if (nums.size() <= 1){
        return nums;
    }

    // divide nums to left and right
    vector<int> left;
    vector<int> right;

    int lgth = nums.size();
    left.insert(left.end() , nums.begin() , nums.begin() + (lgth/2));
    right.insert(right.end() , nums.begin() + (lgth/2) , nums.end());
    
    // do merge sort on left and right
    left = merge_sort(left);
    right = merge_sort(right);
    
    // return merge_two_sorted_lists(left,right)
    vector<int> ans = merge_two_sorted_lists(left,right);
    return ans;
};


int main(){
    
    vector<int> nums = {1,5,4,10,7,3};          // Original nums
    vector<int> nums_sorted = {1,3,4,5,7,10};   // Sorted nums
    
    bool test = merge_sort(nums) == nums_sorted;
    if (test){
        cout << "Sorted Successfully" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

    return 0;
}