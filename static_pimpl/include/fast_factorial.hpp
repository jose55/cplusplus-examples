struct FastFactorialImplementation {
  int operator()(const int n) {
    int result = 1;

    for (int i = 0; i < n; ++i)
      result *= (n-i);

    return result;
  }
};
