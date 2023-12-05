using namespace std;
#include <iostream>


struct Book {
    string author;
    string title;
    int year;
    //int* bookID = new int; // Q3-1.3
    int bookID; // Q3-1.5
    
};

int main(){
    // Q3-1.3
// Book b1,b2
//  *b1.bookID = 100;
//  b2 = b1;
//  cout << *b2.bookID <<endl; // 100
//                             // b2.bookID (WITHOUT *) is a pointer, return address of pointer b2
//                             // & return address of struct b2

Book* b1;
b1->title = "AAA";
cout <<b1->title <<endl; //b1 is a pointer, not yet a created object, not properlly allocated
}