#ifndef DYV_HPP
#define DYV_HPP

#include <iostream>
#include <vector>
#include <utility>

// Forward declaration of printVector
template <typename T>
void printVector(const std::vector<T> &v);

// Definition of partition function
template <typename T>
int partition(std::vector<T> &v, int ini, int fin) {
    T pivot = v[fin];
    int i = ini - 1;
    for (int j = ini; j < fin; ++j) {
        if (v[j] <= pivot) {
            ++i;
            std::swap(v[i], v[j]);
        }
    }
    std::swap(v[i + 1], v[fin]);
    return i + 1;
}

// Definition of QuickSort function template
template <typename T>
void QuickSort(std::vector<T> &v, int ini, int fin) {
    if (ini < fin) {
        int pivot = partition(v, ini, fin);
        QuickSort(v, ini, pivot - 1);
        QuickSort(v, pivot + 1, fin);
    }
}

// Definition of BinarySearch function template
template <typename T>
int BinarySearch(T target, const std::vector<T> &v, int ini, int fin) {
    while (ini <= fin) {
        int mid = ini + (fin - ini) / 2;
        if (v[mid] == target) {
            return mid;
        } else if (v[mid] < target) {
            ini = mid + 1;
        } else {
            fin = mid - 1;
        }
    }
    return -1;
}

// Definition of printVector function template
template <typename T>
void printVector(const std::vector<T> &v) {
    for (const T &elem : v) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

#endif // DYV_HPP