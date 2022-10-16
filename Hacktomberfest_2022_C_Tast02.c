int sum(int j);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int j) {
  if (j > 0) {
    return j + sum(j - 1);
  } else {
    return 0;
  }
}
