vector<string> printNTimes(int n) {

  if (n == 0) {
    return {};
  }

  cout << "Coding Ninjas"
       << " ";
  n = n - 1;
  printNTimes(n);
  return {};
}
