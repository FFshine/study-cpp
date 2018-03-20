#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  //map插入的三种方法
  //insert() 方法插入
  map<int, string> mapStudent;
  mapStudent.insert(map<int, string>::value_type(1, "student_one"));
  mapStudent.insert(map<int, string>::value_type(2, "student_two"));
  mapStudent.insert(map<int, string>::value_type(3, "student_tree"));

  map<int, string>::iterator iter;
  for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++) {
    cout << iter->first << " " << iter->second << endl;
  }

  //用数组方法插入
  map<int, string> mapStudent2;
  mapStudent2[1] = "student2_one";
  mapStudent2[2] = "student2_two";
  mapStudent2[3] = "student2_tree";
  mapStudent2[5] = "student2_four";

  map<int, string>::iterator iter2;
  for (iter2 = mapStudent2.begin(); iter2 != mapStudent2.end(); iter2++) {
    cout << iter2->first << " " << iter2->second << endl;
  }

  //用 insert() 方法插入
  map<int,string> mapstudent;
  mapstudent.insert(pair<int, string>(1, "student_one"));
  mapstudent.insert(pair<int, string>(2, "sstudent_two"));
  auto p = mapstudent.insert(pair<int, string>(3, "student_tree"));
  cout << p.first->first << endl;
  cout << p.first->second << endl;
  cout << p.second << endl;

  //map<int, string>::iterator iter3;
  for (auto iter3 = mapstudent.begin(); iter3 != mapstudent.end(); iter3++) {
    cout << iter3->first << " " << iter3->second << endl;
  }

  map<char, int> testMap;
  testMap['z'] = 54;
  pair<map<char, int>::iterator, bool> ret;
  ret = testMap.insert(pair<char, int>('z', 500));
  if (ret.second == false) {
    cout << "element 'z' already existed";
    cout << " whith a value of " << ret.first->second << endl;
  }
  return 0;
}