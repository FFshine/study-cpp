/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月17日 星期六 23时23分43秒
 ************************************************************************/

#include<iostream>
using namespace std;

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
      while (i < j && a[i] <x) {
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
  int a[] = {60, 40, 43, 46, 10,99};
  quickSort(a, 0, 5);
  for (int i = 0; i < 6; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
