#include <iostream>

struct IntStack10{
    
private :
    
    int stack [10];
    int i_sommet; // Indice du sommet de la pile que j'initialise à -1
    
public :
    
    bool empty() {
        return i_sommet == -1;
    }
    bool full() {
        return i_sommet == 9;
    }
    
    void init() {
        i_sommet = -1;
    }
    
    void push(int i) {
        if (full()) {
            std::cout << "Erreur : La pile est pleine." << std::endl;
        } else {
            stack[++i_sommet] = i;
            std::cout << i << " a été ajouté à la pile." << std::endl;
        }
    }
    int pop() {
        if (empty()){
            std::cout << "Erreur : La pile est vide." << std::endl;
            return 0;
        } else {
            return stack[i_sommet--];
        }
    }
    
    void print() {
        if (empty()) {
            std::cout << "La pile est vide." << std::endl;
        } else {
            std::cout << "Éléments dans la pile : ";
            for (int k = 0; k <= i_sommet; k++) {
                std::cout << stack[k] << " ";
            }
            std::cout << std::endl;
        }
    }
};


int main() {
    IntStack10 stack;
    stack.init();

    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.print();

    std::cout << "Élément retiré : " << stack.pop() << std::endl;

    stack.print();

    return 0;
}
