#include <iostream>
#include <string>
#include <vector>

using namespace std;


class methodearray
{
private:

public:
     methodearray(/* args */);
     ~methodearray();
};

methodearray::methodearray(/* args */)
{
    vector<int> array;
    // numofarraynaum это числа для того что бы знать длинну массива. numfornumofarray это числа самого массива
    int numofarraynaum, numfornumofarray ;
    int arraynum = 1;
    //вводим числа длинны массива
    cout << "enter the length of the array" << endl;
    cin >> numofarraynaum;
    //вводим числа маасива и сразу записывем их в массив
    cout << "enter numbers array" << endl;
    for (int y{ 0 }; y < numofarraynaum; y++)
    {
        cin >> numfornumofarray;
        array.push_back(numfornumofarray);
    }

    //достаем числа из массива и унажаем значения миссива 
    for (int i{ 0 }; i < array.size(); i++)
    {
        arraynum *= array[i];
    }


    cout << "multiply array evaluations" << arraynum << endl;
    
}

methodearray::~methodearray()
{


}
