#ifndef _THE_3_H_
#define _THE_3_H_

#include <iostream>
#include <climits>
#include <cmath>
#include <string>

int recursive_sln(int i, char**& arr, int*& len, int &number_of_calls);
int memoization_sln(int i, char**& arr, int*& len, int**& mem);
int dp_sln(int size, char**& arr, int*& len, int**& mem);

#endif
