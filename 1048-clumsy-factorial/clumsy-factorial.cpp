class Solution {
public:
    int clumsy(int n) {
        stack<int> stk;
        stk.push(n); // Push the first number onto the stack
        n--;

        int operation = 0; // 0 = *, 1 = /, 2 = +, 3 = -
        while (n > 0) {
            if (operation == 0) { // Multiplication
                int top = stk.top();
                stk.pop();
                stk.push(top * n);
            } else if (operation == 1) { // Division
                int top = stk.top();
                stk.pop();
                stk.push(top / n);
            } else if (operation == 2) { // Addition
                stk.push(n);
            } else if (operation == 3) { // Subtraction
                stk.push(-n);
            }
            operation = (operation + 1) % 4; // Cycle through operations
            n--;
        }

        // Sum up all elements in the stack
        int result = 0;
        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }

        return result;
    }
};