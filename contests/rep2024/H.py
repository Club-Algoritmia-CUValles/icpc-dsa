def max_subarray(numbers):
    """Find the largest sum of any contiguous subarray."""
    best_sum = float("-inf")
    current_sum = 0
    for x in numbers:
        current_sum = max(x, current_sum + x)
        best_sum = max(best_sum, current_sum)
    return best_sum


l1 = [1, 2, 3, 4, 5]
l2 = [10, -10, 10, -10, 10]
l3 = [1, -100, 1, -100, 1, -100, 1, -100, 1, -100]
print(max_subarray(l1))
print(max_subarray(l2))
print(max_subarray(l3))
