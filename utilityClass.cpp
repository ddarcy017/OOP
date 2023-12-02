#include <iostream>
#include <random>
#include <time.h>

class Student {
    private:
    int id;
    double grade;
    static int count; 
    
    public:
    Student() { 
        id = Student::count++; 
        grade = ((rand()*100.0)/RAND_MAX); //Max defined by *100.0 => 100.0 = max
    }
    
    static int getCount() {return count;}
    int getID() {return id;} 
    double getGrade() {return grade;}

};

class scoreSys { // This is the utility class, contain only static method, no data member
    public:
    static int counting(Student** s, int number_of_std, float grade) {
           int counting = 0; //Must declared inside the method
               for (int i=0; i<number_of_std; i++) {
                if(s[i]->getGrade() > grade){
                    counting++;
                }
            }
         return counting;
    }
};

int Student::count = 1000; 


int main() {

    int cr = 100;
    // Student* classroom[cr]; // classroom is an array of pointers to Student objects, with 'cr' elements
                               // classroom is a pointer to an array of pointers to 1000 students objects stored in the heap
    
    //Or else (equivalent way)
    Student** classroom; // classroom is a pointer to pointer(s)
    classroom = new Student*[cr]; // classroom now pointing to cr students allocated in the heap (cr=1000)
    for (int i=0; i<cr; i++) {
        classroom[i] = new Student; // Allocating memory for each new std in the heap
    }
    // for (int i=0; i<cr; i++) {
    //     std::cout << classroom[i]->getID() << std::endl; // Print each std id
    // }

    srand(time(NULL)); //Seeding time based on Epoch timing system
    // for (int i=0; i<cr; i++){
    //     std::cout << classroom[i]->getGrade() << std::endl;
    // }

    int pass = scoreSys::counting(classroom, cr, 50.0);
    std::cout << pass << " pass the course" << std::endl;

    return 0;

}