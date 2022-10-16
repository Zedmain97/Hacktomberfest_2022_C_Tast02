int sum(int k);

int main() {
  int r = sum(10);
  printf("%d", r);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
