#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");  // create file

    string name;
    int age;
    float gpa;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    fout << name << " " << age << " " << gpa << endl;

    fout.close();

    cout << "Data written to data.txt!" << endl;
    return 0;
}

//
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    ifstream fin("data.txt");  // open file to read
//
//    string name;
//    int age;
//    float gpa;
//
//    cout << "\n--- Student Records ---\n";
//
//    while (fin >> name >> age >> gpa) {
//        cout << name << "   " << age << "   " << gpa << endl;
//    }
//
//    fin.close();
//    return 0;
//}

