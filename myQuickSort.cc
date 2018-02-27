#include<iostream>

using std::cout;
using std::endl;

void quickSort(int *a, int l, int r) {
  if (l < r) {
    int i, j, x;
    i = l;
    j = r;
    x = a[i];
    while (i < j) {
      while (a[j] > x) {
        j--;
      }
      if (i < j) {
        a[i++] = a[j];
      }
      while (i < j && a[i] < x) {
        i++;
      }
      if (i < j) {
        a[j--] = a[i];
      }
    }
    a[i] = x;
    quickSort(a, l, i-1);
    quickSort(a, i+1, r);
  }
}

int main() {
  int a[] = {30, 40, 50, 60, 10, 20};
  int ilen = (sizeof(a)) / (sizeof(a[0]));

  cout << "before sort: ";
  for (int i = 0; i < ilen; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  quickSort(a, 0, ilen-1);
  cout << "after sort: ";
  for (int i = 0; i < ilen; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
