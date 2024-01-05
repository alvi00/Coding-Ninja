vector<int> generateFibonacciNumbers(int n) {
    vector<int> result;
    int n1 = 0;
    int n2 = 1;

    if (n == 1) {
        result.push_back(0);
        return result;
    }

    result.push_back(n1);
    result.push_back(n2);

    for (int i = 2; i < n; i++) {
        int ans = n1 + n2;
        result.push_back(ans); // Push the current Fibonacci number into the vector
        n1 = n2;
        n2 = ans;
    }

    return result;
}
