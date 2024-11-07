#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "my sort algorithm" << std::endl;
    int tab[] = {16,5,8,34,89};

    for (int i=0; i<4; i=i+1) {
        int i_min = i;
        for (int j = i+1; j<5; j= j+1) {
            if (tab[i_min] > tab[j]) {
                i_min = j;
            }
        }
        if (i_min != i){
            int temp =tab[i];
            tab[i] = tab[i_min];
            tab[i_min] = temp;
            }
        }
    
    
    for (int k = 0; k < 5; k=k+1) {
        std::cout << tab[k] << " ";
    }
    return 0;
}
