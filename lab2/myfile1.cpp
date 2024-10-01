#include <iostream>
using namespace std;

int main(void) {
    int tab[10];
    int* p;
    for (int i = 0;i < 10;i++) {
        tab[i] = i * i;
    }
    std::cout<<tab[2]<<'\n'; 
    tab[2] = tab[1];
    std::cout<<tab[2]<<'\n'; 
    tab[2] = *(tab + 1);
    std::cout<<tab[2]<<'\n'; 
    *(tab + 2) = tab[1];
    std::cout<<*(tab + 2)<<'\n'; 
    *(tab + 2) = *(tab + 1);
    std::cout<<*(tab + 2)<<'\n'; 
    p = &tab[0];
    p = tab + 1;
    tab[4] = *p;
    std::cout<<tab[4] <<'\n';
}
