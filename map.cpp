#include <iostream>
#include <map> // Use to pair objects
#include <string>

class Point {
    public:
    int _x;
    int _y;
};

int main() {

    //Use of map
    std::map<std::string,int> uni; //Create a map name uni
    std::pair<std::string,int> s1("Adam",1234);

    typedef std::pair<std::string,int> Student;

    Student s2("Eva",2345);

    uni.insert(s1); // Insert student in uni map
    uni.insert(s2);

    int id = uni["Adam"]; // To look up ID using the name


    //Print
    std::cout << id << std::endl;

    //Map with special data type
    typedef std::map<std::string, Point> setRecords;
    typedef std::pair<std::string, Point> Rec;

    setRecords r;

    // Rec r1("start point", 1,1); // Cant use cause theres no point
    Point p1 = {1,1};
    Point p2 = {2,2};

    Rec r1 ("startpoint", p1);
    Rec r2 ("endpoint", p2);

    r.insert(r1);
    r.insert(r2);

    Point p3 = r["endpoint"];

    std::cout << p3._x << "," << p3._y << std::endl; 


    return 0;
    



}