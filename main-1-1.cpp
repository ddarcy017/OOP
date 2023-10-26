#include <iostream>

#include "Musician.h"

int main() {

    Musician m1("piano", 5);
        std::cout << "Intrument: " << m1.get_instrument() << std::endl
                  << "Experience years: " <<m1.get_experience() << std::endl;
    
  return 0;

}