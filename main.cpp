#include <algorithm>
#include <array>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "insertsort.hpp"
#include "quicksort.hpp"

void test_insertsort() {
    std::vector<int> v1 = {9, 4, 7, 3, 6, 8, 2, 1, 5, 0};
    insertsort(v1.begin(), v1.end());
    assert(std::is_sorted(v1.begin(), v1.end()));

    int arr1[] = {5, 2, 8, 1, 9, 3};
    insertsort(std::begin(arr1), std::end(arr1));
    assert(std::is_sorted(std::begin(arr1), std::end(arr1)));

    int arr2[] = {12, 11, 13, 5, 6};
    insertsort(arr2, 0, 4);
    assert(std::is_sorted(arr2, arr2 + 5));

    std::array<double, 6> arr3 = {3.14, 1.41, 2.71, 0.58, 1.73, 2.22};
    insertsort(arr3.begin(), arr3.end());
    assert(std::is_sorted(arr3.begin(), arr3.end()));

    std::vector<std::string> words = {"kot", "pies", "albatros", "zebra", "borsuk"};
    insertsort(words.begin(), words.end());
    assert(std::is_sorted(words.begin(), words.end()));

    std::vector<int> empty;
    insertsort(empty.begin(), empty.end());
    assert(std::is_sorted(empty.begin(), empty.end()));

    std::vector<int> single = {42};
    insertsort(single.begin(), single.end());
    assert(std::is_sorted(single.begin(), single.end()));

    std::vector<int> reversed = {5, 4, 3, 2, 1};
    insertsort(reversed.begin(), reversed.end());
    assert(std::is_sorted(reversed.begin(), reversed.end()));

    std::vector<int> duplicates = {4, 2, 4, 3, 2, 4, 1};
    insertsort(duplicates.begin(), duplicates.end());
    assert(std::is_sorted(duplicates.begin(), duplicates.end()));
}

void test_quicksort() {
    std::vector<int> v1 = {9, 4, 7, 3, 6, 8, 2, 1, 5, 0};
    quicksort(v1.begin(), v1.end());
    assert(std::is_sorted(v1.begin(), v1.end()));

    int arr1[] = {10, -3, 25, 0, -15, 8, 2};
    quicksort(std::begin(arr1), std::end(arr1));
    assert(std::is_sorted(std::begin(arr1), std::end(arr1)));

    int arr2[] = {50, 40, 30, 20, 10};
    quicksort(arr2, 0, 4);
    assert(std::is_sorted(arr2, arr2 + 5));

    std::array<float, 5> arr3 = {0.9f, 0.1f, 0.5f, 0.3f, 0.7f};
    quicksort(arr3.begin(), arr3.end());
    assert(std::is_sorted(arr3.begin(), arr3.end()));

    std::vector<std::string> words = {"warszawa", "krakow", "gdansk", "poznan", "wroclaw"};
    quicksort(words.begin(), words.end());
    assert(std::is_sorted(words.begin(), words.end()));

    std::vector<int> empty;
    quicksort(empty.begin(), empty.end());
    assert(std::is_sorted(empty.begin(), empty.end()));

    std::vector<int> single = {100};
    quicksort(single.begin(), single.end());
    assert(std::is_sorted(single.begin(), single.end()));

    std::vector<int> reversed = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    quicksort(reversed.begin(), reversed.end());
    assert(std::is_sorted(reversed.begin(), reversed.end()));

    std::vector<int> all_equal = {7, 7, 7, 7, 7, 7};
    quicksort(all_equal.begin(), all_equal.end());
    assert(std::is_sorted(all_equal.begin(), all_equal.end()));
}

int main() {
    test_insertsort();
    test_quicksort();
    std::cout << "Wszystkie testy zakonczone sukcesem." << std::endl;
    return 0;
}