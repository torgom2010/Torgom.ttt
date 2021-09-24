#include <iostream>

using namespace std;



struct Tiger {
    char name[25];
    int age;
};

struct Lion{;
        char name[15];
        int height;
        int eye_color;
};


void print_hello (Lion *hello ){
    std::cout << hello->height;
}

void print_data(Tiger *data){
    std::cout <<(data->age)<<"\n";
}


int main (){

Tiger roki;
roki.age = 7;
print_data(&roki);

Lion simba;
simba.height = 19;
print_hello(&simba);









    return 0;
}


