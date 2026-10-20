#ifndef INSERTSORT_HPP
#define INSERTSORT_HPP

#include <iterator>

template<typename RandomIt>
void insertsort(RandomIt first, RandomIt last) {
    if (first == last) {
        return;
    }
    for (RandomIt i = first + 1; i < last; ++i) {
        auto key = *i;
        RandomIt j = i;
        while (j > first && key < *(j - 1)) {
            *j = *(j - 1);
            --j;
        }
        *j = key;
    }
}

template<typename T>
void insertsort(T *ptr, int left, int right) {
    if (left < right) {
        insertsort(ptr + left, ptr + right + 1);
    }
}

#endif