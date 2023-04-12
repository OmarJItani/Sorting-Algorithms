def insertion_sort(nums):
    """
    Sorts an array using insertion sort algorithm.
    Input:
    nums: Unsorted array
    Output:
    Sorted array 
    """

    # for each of the elements in nums
    for i in range(len(nums)):
        pos = i
        # search for its position in the sorted array
        for j in range(i):
            if nums[j]>nums[i]:
                pos = j
                break
        # remove it from unsorted array
        val = nums.pop(i)
        # add it to the sorted array in its position
        nums.insert(pos,val)
    
    return nums


if __name__ == "__main__":
    nums = [3,5,10,8,9,2,7]

    print(insertion_sort(nums))