//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    string name;
//    int age;
//};
//
//class Student : public Person {
//public:
//    int roll;
//    float gpa;
//
//  
//    void display() {
//        cout << "Name: " << name << endl;
//        cout << "Age: " << age << endl;
//        cout << "Roll No: " << roll << endl;
//        cout << "GPA: " << gpa << endl;
//    }
//};
//
//int main() {
//    Student s;
//    s.name = "Adnan";
//    s.age = 21;
//    s.roll = 23893;
//    s.gpa = 3.51;
//
//    s.display();  
//    return 0;
//}











//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    string name;
//    int age;
//
//    
//    Person(string n, int a) {
//        name = n;
//        age = a;
//    }
//};
//
//class Student : public Person {
//public:
//    int roll;
//    float gpa;
//
//    
//    Student(string n, int a, int r, float g) : Person(n, a) {
//        roll = r;
//        gpa = g;
//    }
//
//    void display() {
//        cout << "Name: " << name << endl;
//        cout << "Age: " << age << endl;
//        cout << "Roll No: " << roll << endl;
//        cout << "GPA: " << gpa << endl;
//    }
//};
//
//int main() {
//    Student s("Waleed", 20, 1, 3.4);
//    s.display();
//    return 0;
//}








//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    string name;
//    int age;
//
//    Person(string n, int a) {
//        name = n;
//        age = a;
//    }
//};
//
//class Teacher : public Person {
//public:
//    string subject;
//    float salary;
//
//    
//    Teacher(string n, int a, string sub, float sal) : Person(n, a) {
//        subject = sub;
//        salary = sal;
//    }
//
//    void display() {
//        cout << "Name: " << name << endl;
//        cout << "Age: " << age << endl;
//        cout << "Subject: " << subject << endl;
//        cout << "Salary: $" << salary << endl;
//    }
//};
//
//int main() {
//    Teacher t("Adnan Ahmad", 21, "Science", 50000);
//    t.display();
//    return 0;
//}












#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    int roll;
    float gpa;

    Student(string n, int a, int r, float g) : Person(n, a) {
        roll = r;
        gpa = g;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Student s1("Adnan", 20, 1, 3.4);
    Student s2("Zaira", 19, 2, 3.8);

    s1.display();
    s2.display();

    return 0;
}


