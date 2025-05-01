
#include <iostream>
#include <stack>
#include <string>

void findBracketRequirements(const std::string &expression, int &openingRequired, int &closingRequired) {
    std::stack<char> bracketStack;

    for (char bracket : expression) {
        if (bracket == '{') {
            bracketStack.push('{');
        } else if (bracket == '}') {
            if (bracketStack.empty()) {
                closingRequired++; // Increment count for unmatched closing bracket
            } else {
                bracketStack.pop();
            }
        }
    }

    // Remaining unmatched opening brackets in the stack
    openingRequired = bracketStack.size();
}

int main() {
    std::string expression;
    std::cout << "Enter an expression with curly brackets: ";
    std::cin >> expression;

    int openingRequired = 0;
    int closingRequired = 0;

    findBracketRequirements(expression, openingRequired, closingRequired);

    if (openingRequired == 0 && closingRequired == 0) {
        std::cout << "The expression is balanced.\n";
    } else {
        std::cout << "The expression is not balanced.\n";
        std::cout << "Number of opening brackets required: " << openingRequired << "\n";
        std::cout << "Number of closing brackets required: " << closingRequired << "\n";
    }

    return 0;
}
