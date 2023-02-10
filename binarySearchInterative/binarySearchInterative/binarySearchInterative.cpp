// binarySearchInterative.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int binary_search(int* arr, int size, int search_num);
int binary_search_rekursiv(int* arr, int size, int search_num);


int main()
{
    int* arr;
    int size;
    int result;
    int result_rekursiv;
    int search_num;

    std::cout << "Insert size of arr" << std::endl;
    std::cin >> size;

    arr =  (int*) new int[size];

    std::cout << "Insert numbers of array " << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    std::cout << "Insert number for search" << std::endl;
    std::cin >> search_num;

    result = binary_search(arr, size, search_num);

    if (result == -1)
    {
        std::cout << "array dont have this number";
    }
    else
    {
        std::cout << "result is "<<result<<std::endl;
    }

    result_rekursiv = binary_search_rekursiv(arr, size, search_num);

    if (result == -1)
    {
        std::cout << "array dont have this number";
    }
    else
    {
        std::cout << "result is " << result_rekursiv<< std::endl;
    }
   
}

int binary_search(int* arr, int size, int search_num)
{
 
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == search_num)
        {
            return i;
        }
    }

    return -1;
   
}

int binary_search_rekursiv(int* arr, int size, int search_num)
{
    if (arr[size--] == search_num) return size;
    else {
        return binary_search(arr, size--, search_num);
    }

    return -1;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
