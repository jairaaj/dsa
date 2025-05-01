def sum_except_self(arr):
    total_sum = sum(arr)
    result = [total_sum - x for x in arr]
    return result

# Example usage
A = [1, 2, 3, 4, 5]
output = sum_except_self(A)
print(output)
