def quick_sort(lst):

    if len(lst) <= 1:
        return lst

    pivot = lst[0]
    right = []
    left = []

    for element in lst[1:]:
        if element <= pivot:
            left.append(element)
        else:
            right.append(element)

    right = quick_sort(right)
    left = quick_sort(left)

    return left + [pivot] + right

lst=[3,10,5,8,6]
print(quick_sort(lst))