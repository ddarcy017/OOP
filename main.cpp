#include <iostream>
#include "Point.h"
#include "Pair.h"

int main() {
    // Point <int> p1(1,1);
    // Point <double> p2(2.2,2.2);
    // Point <float> p3(3.33 , 3.33); 

    // Or else
    typedef Point<int> Point_i;
    typedef Point<double> Point_d;
    typedef Point<float> Point_f;
    typedef Point<int>* Point_ptr_i;

    typedef int* ptr_i; //typedef can also define pointers

    typedef Pair<int, float> Pair_if;


    // If so
    Point_i p1(1,1);
    Point_d p2(2.2,2.2);
    Point_f p3(3.33,3.33);

    p1.print();
    p2.print();

    Point_f* ptr3 = &p3;
    Point<int>* ptr4 = new Point(4,4);
    Point_d* ptr5 = new Point_d(5.5,5.5);
    Point_ptr_i ptr6 = new Point_i(6,6);

    ptr_i pi1 = new int; //Allocating memory for an integer using typedef identifier

    ptr3->print();  // -> instead of . for pointers
    ptr4->print();
    ptr5->print();
    ptr6->print();

    Pair pa1(11,11);


    Pair_if pa2(22,22.22);


    Pair<Point<int>, Point<double> > line1_2(p1,p2);



}