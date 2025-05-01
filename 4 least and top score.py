def find_top_and_least_scores(scores):
    if not scores:
        return None, None  # Handle empty list

    scores.sort()  # O(n log n) time complexity
    least = scores[0]
    top = scores[-1]
    return top, least

# Example usage
scores = [85, 92, 76, 150, 67, 8, 95]
top_score, least_score = find_top_and_least_scores(scores)

print("Top Score:", top_score)
print("Least Score:", least_score)