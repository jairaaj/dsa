def matrix_addition(A, B):
    result = []
    for i in range(len(A)):
        row = [A[i][j] + B[i][j] for j in range(len(A[0]))]
        result.append(row)
    return result

def matrix_subtraction(A, B):
    result = []
    for i in range(len(A)):
        row = [A[i][j] - B[i][j] for j in range(len(A[0]))]
        result.append(row)
    return result

def matrix_multiplication(A, B):
    result = []
    for i in range(len(A)):
        row = []
        for j in range(len(B[0])):
            cell = sum(A[i][k] * B[k][j] for k in range(len(B)))
            row.append(cell)
        result.append(row)
    return result

def transpose_matrix(A):
    return [[A[j][i] for j in range(len(A))] for i in range(len(A[0]))]

def print_matrix(matrix, name):
    print(f"\n{name}:")
    for row in matrix:
        print(row)

# Example Matrices
A = [[1, 2], [3, 4]]
B = [[5, 6], [7, 8]]

# Perform operations
add = matrix_addition(A, B)
sub = matrix_subtraction(A, B)
mul = matrix_multiplication(A, B)
trans = transpose_matrix(A)

# Display results
print_matrix(A, "Matrix A")
print_matrix(B, "Matrix B")
print_matrix(add, "Addition (A + B)")
print_matrix(sub, "Subtraction (A - B)")
print_matrix(mul, "Multiplication (A * B)")
print_matrix(trans, "Transpose of A")
