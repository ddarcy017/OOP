#ifndef PAIR_H
#define PAIR_H

#include "Point.h"
#include <iostream>

// Original
// class Pair {
//     private:
//     int _st;
//     int _nd;

// };

//using template

template <class T1, class T2>
class Pair {
    private:
    T1 _st;
    T2 _nd;
    
    public:
    Pair(T1 st, T2 nd) : _st(st) , _nd(nd) {} // Const
    Pair() : Pair(0,0) {} // Def const

};
#endif
