def merge_two_sorted_lists(right,left):
    r_idx = l_idx = 0
    sorted_lst = []

    while r_idx <= len(right)-1 and l_idx <= len(left)-1:
        if right[r_idx] <= left[l_idx]:
            sorted_lst.append(right[r_idx])
            r_idx = r_idx + 1
        else:
            sorted_lst.append(left[l_idx])
            l_idx = l_idx + 1

    while r_idx <= len(right)-1:
        sorted_lst.append(right[r_idx])
        r_idx = r_idx + 1

    while l_idx <= len(left)-1:
        sorted_lst.append(left[l_idx])
        l_idx = l_idx + 1
    
    return sorted_lst

def merge_sort(lst):
    if len(lst) <= 1:
        return lst
    else:
        mid = len(lst) // 2
        right = merge_sort(lst[mid:])
        left = merge_sort(lst[:mid])
        return merge_two_sorted_lists(right,left)

lst1 = [1,6,4,10,3,8]
# lst2 = [2,5,8]

print(merge_sort(lst1))
