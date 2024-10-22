#include <iostream>
#include <vector>
#include "DyV.hpp"



void test() {
    std::vector<int> vec{10, 3, 6, 7, 2, 8, 1, 9, 5, 4};
    // Imprimir vector original
    std::cout << "Vector original: ";
    printVector(vec);
    
    // Ordenar el vector usando QuickSort
    QuickSort(vec, 0, vec.size() - 1);
    
    // Imprimir vector ordenado
    std::cout << "Vector ordenado con QuickSort: ";
    printVector(vec);
    
    // Probar búsqueda binaria en el vector ordenado
    int target = 7;
    int index = BinarySearch(target, vec, 0, vec.size() - 1);
    if (index != -1) {
        std::cout << "Elemento " << target << " encontrado en el índice " << index << " tras la ordenación.\n";
    } else {
        std::cout << "Elemento " << target << " no encontrado tras la ordenación.\n";
    }
    
    // Probar búsqueda de un valor que no está presente
    int targetNotFound = 11;
    index = BinarySearch(targetNotFound, vec, 0, vec.size() - 1);
    if (index != -1) {
        std::cout << "Elemento " << targetNotFound << " encontrado en el índice " << index << " tras la ordenación.\n";
    } else {
        std::cout << "Elemento " << targetNotFound << " no encontrado tras la ordenación.\n";
    }
}

int main() {
    test();
    return 0;
}
