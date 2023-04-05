def bubble_sort(lst):
    for i in range(0,len(lst)-2):
        for j in range(0,len(lst)-1):
            if lst[j] >= lst[j+1]:
                temporary = lst[j]
                lst[j] = lst[j+1]
                lst[j+1] = temporary
    return lst