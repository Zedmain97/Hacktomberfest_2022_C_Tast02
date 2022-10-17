int sum(int k);

int main() {
  int result = sum(10); //data type error
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1); //missing semicolon
  } else {
    return 0; //missing return value
  }
}
