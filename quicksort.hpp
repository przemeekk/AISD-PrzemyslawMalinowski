#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <iterator>
#include <utility>

namespace detail {

template<typename RandomIt>
RandomIt partition_lomuto(RandomIt first, RandomIt last) {
    auto pivot = *(last - 1);
    RandomIt i = first;
    for (RandomIt j = first; j < last - 1; ++j) {
        if (*j < pivot) {
            std::iter_swap(i, j);
            ++i;
        }
    }
    std::iter_swap(i, last - 1);
    return i;
}

}

template<typename RandomIt>
void quicksort(RandomIt first, RandomIt last) {
    if (std::distance(first, last) > 1) {
        RandomIt p = detail::partition_lomuto(first, last);
        quicksort(first, p);
        quicksort(p + 1, last);
    }
}

template<typename T>
void quicksort(T *ptr, int left, int right) {
    if (left < right) {
        quicksort(ptr + left, ptr + right + 1);
    }
}

#endif