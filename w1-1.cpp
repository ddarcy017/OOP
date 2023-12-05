#include <iostream>

void create_2d_arr(int** &a, int rows, int cols){
    a = new int*[rows];
    for(int i=0; i <rows; i++){
        a[i] = new int[cols];
    }
}

int main() {

    int** p;
    create_2d_arr(p,5,2);
    for (int i=0; i<5; i++){
        for (int j=0; j<2; j++){
            std::cout << p[i][j] << std::endl;
        }
    }

    return 0;
}