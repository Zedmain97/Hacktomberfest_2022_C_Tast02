int sum(int k);

int main() {
  inting result = sum(10)
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1)
  } else {
    return;
  }
}
