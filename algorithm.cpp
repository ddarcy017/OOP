#include <iostream>
#include <vector>
#include <map> 
#include <string>
#include <algorithm>

class Point {
    public: 
    int _x;
    int _y;
};

int main() {

    std::vector<int> v = {0,2,4,1,3,5};
    std::vector<int>::iterator itr; 
    typedef std::vector<int>::iterator Itr;

    sort(v.begin(),v.end()); //Used in algorithm
                             //Sort ele from small to large
                             //from end to begin return nothing, ALWAYS be begin -> end

    reverse(v.begin(),v.end()); //Reversing order of eles

    Itr fv = find(v.begin(),v.end(),5); //Need to use iterator pointer
                                        // Only return the found element (5 itc)
                                        //For non exist ele, return random number
    std::cout << *fv << std::endl; //Need to be a pointer cause iterator is a pointer
    
    for (itr=v.begin(); itr<v.end(); itr++) {   
         std::cout << *itr << std::endl; 
    }

    return 0;

}