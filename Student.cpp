#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid,char sname[20]) {
  studentId=sid;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID :"<<studentID<<endl;
  cout<<"Student name :"<<name<<endl;
}
