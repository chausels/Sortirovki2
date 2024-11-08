#include <Catch2/catch.hpp>
#include <Sortirovki2/ShakerSort.h>
TEST_CASE("ShakeSort Test") {
    int a[] = { 4, 2, 7, 5, 3, 8, 0 };
    int n = 7;
    ShakeSort(a, n);
    int sortA[] = { 0, 2, 3, 4, 5, 7, 8 };
    for (int i = 0; i < n; ++i)
        REQUIRE(a[i] == sortA[i]);
    double a2[] = { 100, 200 };
    n = 5;
    double sortA2[] = { 100, 200 };
    ShakeSort(a, n);
    for (int i = 0; i < n; ++i)
        REQUIRE(a2[i] == sortA2[i]);
    int a3[] = { 54, 45, 68, 0 };
    n = 4;
    ShakeSort(a3, n);
    int sortA3[] = { 0, 45, 54, 68 };
    for (int i = 0; i < n; ++i)
        REQUIRE(a3[i] == sortA3[i]);

}