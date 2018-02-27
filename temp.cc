#include<iostream>

void quickSort(int *a, int l, int r) {
  if(l < r) {
    int i, j, x;
    i = l;
    j = r;
    x = a[i];
    while (i < j) {
      while (a[j] > x) {
        j--;
      }
      if (i < j) {
        a[i] = a[j];
        i++;
      }
      while (i < j &&  a[i] <x) {
        i++;
      }
      if (i < j) {
        a[j] = a[i];
        j--;
      }
    }
    a[i] = x;
    quickSort(a, l, i-1);
    quickSort(a, i+1, r);
  }
}

int main() {
  int a[] = {20, 45, 78, 98, 33, 76};
  std::cout << "before sort: ";
  for (int i = 0; i < 6; i++) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;

  quickSort(a, 0, 5);

  std::cout << "after sort: ";
  for (int i = 0; i < 6; i++) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}
