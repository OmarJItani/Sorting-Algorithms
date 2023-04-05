#include <iostream>
using namespace std;
#include <vector>

vector<int> bubble_sort(vector<int> nums){
    for (int i = 0; i < nums.size(); i++){
        for (int j = 0; j < nums.size()-1; j++){
            if (nums[j] > nums[j+1]){
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp; 
            }
        }
    }    
    return nums;
};

int main(){
    vector<int> nums = {1,5,4};
    vector<int> nums_sorted = {1,4,5};
    
    bool test = bubble_sort(nums) == nums_sorted;
    if (test==1){
        cout << "Sorted Successfully" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

    return 0;
}