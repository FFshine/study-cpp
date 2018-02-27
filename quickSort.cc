#include<iostream>

using namespace std;

void quickSort(int *a, int l, int r) {
    if (l < r) {//递归结束条件
      int i, j, x;
      i = l;
      j = r;
      x = a[i];
      while (i < j){//如果左小于右
        while (a[j] > x) { //如果右数大于左数，则右前移
          j--;
        }
        if (i < j) {//如果右数小于左数，并且此时左依然小于右 
          a[i++] = a[j];//把右数移到左边
        }
        while (i < j && a[i] < x) {//i自增之后，a[i] 小于 x； 
                                   i 继续自增
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
    int i;
    int a[] = {30, 40, 50, 60, 10, 20};
    int ilen = (sizeof(a)) / (sizeof(a[0]));

    cout << "before sort: ";
    for (i = 0; i < ilen; i++)
      cout << a[i] << " ";
    cout << endl;

    quickSort(a, 0, ilen-1);

    cout << "after sort: ";
    for (i = 0; i < ilen; i++)
      cout << a[i] << " ";
    cout << endl;

    return 0;
}

