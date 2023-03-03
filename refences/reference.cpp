#include <iostream>

void work(int &x){
    x++;
    std:: cout << x << std::endl;
}

int main(){
    int a = 10;
    work(a);
    std::cout << a << std::endl;
    return 0;
}


