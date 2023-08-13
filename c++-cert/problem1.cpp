#include<iostream>
#include<vector>
#include <string>
using namespace std;


class Grade{
  public:
    string subject_name;
    char grade;
    
    Grade(string name, char grad){
        
        subject_name = name;

        grade = grad;
    }
};

class Student {
  public:
    int student_id;
    string student_name;
    vector<Grade> grades;
    
    Student(int id, string name, vector<Grade> a){
        student_id = id;
        
        student_name = name;

        for(int i=0; i < a.size(); i++) {
            Grade b = {a[i].subject_name, a[i].grade };
            grades.push_back(b);    
        }

    }
};

int main(){
    
    int student_id;
    string student_name;
    cin >> student_id >> student_name;

    int subjectsCount;
    cin >> subjectsCount;

    vector<Grade> grades;
    while(subjectsCount--){
        string subject_name;
        char grade;
        cin >> subject_name >> grade;

        Grade g = {subject_name, grade};
        grades.push_back(g);
    }

    Student s = {student_id, student_name, grades};
    
    
}