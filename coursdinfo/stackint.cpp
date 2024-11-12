#include <iostream>

struct IntStack10{
    
private :
    
    int * stack;
    int i_sommet;
    
public :
    
    void init(int taille) {
        stack = new int[taille];
        i_sommet = -1;
    }
    
    bool empty() const {
        return i_sommet == -1;
    }
    bool full() const {
        return i_sommet == 9;
    }
    

    
    void push(int val) {
        if (full()) {
            std::cout << "Erreur : La pile est pleine." << std::endl;
        } else {
            stack[++i_sommet] = val;
            std::cout << val <<" a été ajouté à la pile." << std::endl;
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
    
   void print() const {
        if (empty()) {
            std::cout << "La pile est vide." << std::endl;
        } else {
            std::cout << "Éléments dans la pile : " << std::endl;
            for (int k = 0; k <= i_sommet; k++) {
                std::cout << stack[k] << " ";
            }
        }
       std::cout << " " << std::endl;
    }
};


int main() {
    IntStack10 stack;
    stack.init(10);

    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.print();
    
    std::cout << "Élément retiré : " << stack.pop() << std::endl;
    
    stack.print();

    
    return 0;
}
