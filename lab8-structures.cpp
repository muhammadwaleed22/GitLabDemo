//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student {
//    string name;
//    int roll;
//    float gpa;
//};
//
//int main() {
//    Student s;
//
//    cout << "Enter student name: ";
//    getline(cin, s.name);
//
//    cout << "Enter roll number: ";
//    cin >> s.roll;
//
//    cout << "Enter GPA: ";
//    cin >> s.gpa;
//
//    cout << "\n--- Student Details ---\n";
//    cout << "Name: " << s.name << endl;
//    cout << "Roll Number: " << s.roll << endl;
//    cout << "GPA: " << s.gpa << endl;
//
//    return 0;
//}




//
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Laptop {
//    string brand;
//    int ram; // in GB
//    float price;
//};
//
//int main() {
//    Laptop laptop;
//    
//    cout << "Enter laptop brand: ";
//    cin.ignore(); // Clear the input buffer
//    getline(cin, laptop.brand);
//    cout << "Enter RAM (in GB): ";
//    cin >> laptop.ram;
//    cout << "Enter price: $";
//    cin >> laptop.price;
//    
//    cout << "\nLaptop Specifications:" << endl;
//    cout << "Brand: " << laptop.brand << endl;
//    cout << "RAM: " << laptop.ram << " GB" << endl;
//    cout << "Price: $" << laptop.price << endl;
//    
//    return 0;
//}



//
//#include <iostream>
//using namespace std;
//
//struct Rectangle {
//    float length;
//    float width;
//};
//
//int main() {
//    Rectangle rect;
//    
//    cout << "Enter length of rectangle: ";
//    cin >> rect.length;
//    cout << "Enter width of rectangle: ";
//    cin >> rect.width;
//    
//    float area = rect.length * rect.width;
//    float perimeter = 2 * (rect.length + rect.width);
//    
//    cout << "\nRectangle Calculations:" << endl;
//    cout << "Area: " << area << endl;
//    cout << "Perimeter: " << perimeter << endl;
//    
//    return 0;
//}





#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student student1, student2;
    

    cout << "Enter details for first student:" << endl;
    cout << "Name: ";
    getline(cin, student1.name);
    cout << "Roll: ";
    cin >> student1.roll;
    cout << "GPA: ";
    cin >> student1.gpa;
    
   
    cin.ignore();
    
 
    cout << "\nEnter details for second student:" << endl;
    cout << "Name: ";
    getline(cin, student2.name);
    cout << "Roll: ";
    cin >> student2.roll;
    cout << "GPA: ";
    cin >> student2.gpa;
    
  
    cout << "\n=== GPA Comparison Result ===" << endl;
    if (student1.gpa > student2.gpa) {
        cout << student1.name << " has higher GPA (" << student1.gpa << ")" << endl;
    } else if (student2.gpa > student1.gpa) {
        cout << student2.name << " has higher GPA (" << student2.gpa << ")" << endl;
    } else {
        cout << "Both students have equal GPA (" << student1.gpa << ")" << endl;
    }
    
    return 0;
}
