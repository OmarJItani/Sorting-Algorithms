def selection_sort(nums):
    """
    Sorts an array using selection sort algorithm.
    Input:
    nums: Unsorted array
    Output:
    Sorted array 
    """

    for i in range(len(nums)):

        # find minimum of unsorted array
        min_ind = i
        for j in range(i,len(nums)):
            if nums[j] < nums[min_ind]:
                min_ind = j
        
        # perform swapping
        temp = nums[i]
        nums[i] = nums[min_ind]
        nums[min_ind] = temp
    
    return nums


if __name__ == "__main__":
    nums = [1,5,3,9,10,2]

    print(selection_sort(nums))