#ifndef MAIN_HPP
#define MAIN_HPP

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int> &, int);
void printVector(vector<int>);
void bubble(vector<int> &);
void bubblesort(vector<int> &);

void bubble(vector<int> &number)
{
    for (int i = 0; i < number.size() - 1; i++)
    {
        if (number[i] > number[i + 1])
        {
            swap(number[i], number[i + 1]);
        }
    }
}

void bubblesort(vector<int> &number)
{
    int N = number.size();

    for (int i = 0; i < N - 1; i++)
    {
        bubble(number);
    }
}

void makeVector(vector<int> &number, int N)
{
    srand(time(NULL));
    number.clear();

    for (int i = 0; i < N; i++)
    {
        number.push_back(rand() % 20);
    }
}

void printVector(vector<int> number)
{
    for (auto iter = number.begin(); iter != number.end(); iter++)
    {
        cout << setw(5) << *iter;
    }
    cout << endl;
}

#endif