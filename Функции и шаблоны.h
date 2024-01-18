#pragma once
using namespace std;

template <typename T>
int get_random(T a, T b) {
    srand(time(NULL));                  //генерирует случайное число от a до b
    return rand() % (a - b + 1) + a;
}

template <typename T>
void show_arr(int size, T* arr) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";          //выводит элементы массива на консоль
    }
    cout << endl;
}

template <typename T>
void get_rand_arr(int size, T* arr) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {     //заполняет массив случайными значениями
        arr[i] = rand() % 10;
        
    }
}

template <typename T>
int search_max(int size, T* arr) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {    //находит максимальное значение
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
int search_min(int size, T* arr) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {    //находит минимальное значение
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

template <typename T>
void my_swap(T& a, T& b) {
    T x = a;                            //меняет местами значения
    a = b;
    b = x;
}

void discrete_sort(int size, int* arr) {
    // array values are from 0 to 10
    int baskets[10]{};
    for (int k = 0; k < size; k++) {        //сортировка массива дискретным методом с элементами 
                                            //от 0 до 10        
        baskets[arr[k]]++;
    }
    int n = 0;
    for (int k = 0; k < std::size(baskets); k++) {
        while (baskets[k] > 0) {
            arr[n] = k;
            baskets[k]--;
            n++;
        }
    }
}

template <typename T>
int get_min(int size, T* arr) {
    T min_val = arr[0];
    int min_id = 0;
    for (int k = 1; k < size; k++) {
        if (min_val > arr[k]) {
            min_val = arr[k];
            min_id = k;
        }
    }
    return min_id;
}

template <typename T>
void select_sort(int size, T* arr) {
    for (int k = 0; k < size; k++) {
        my_swap(arr[k],                         //сортировка массива методом выбора
            arr[get_min(size - k, arr + k) + k]);
    }
}

template <typename T>
void bubble_sort(int size, T* arr) {
    int iter = 0;
    for (int w = 0; w < size; w++) {
        /*	cout << "----Walk " << w + 1 << "----- " << endl;*/
        bool is_sort = true;
        for (int k = 0; k < size - 1 - w; k++) {

            if (arr[k] < arr[k + 1]) {              //улучшенная сортировка массива 
                my_swap(arr[k], arr[k + 1]);        //методом пузырька
                is_sort = false;
            }
            /*cout << iter++ << " : " << is_sort << " : ";
            show_arr(size, arr);*/
        }

        if (is_sort) {
            return;
        }
    }
}


template<typename T>
void insert_sort(int size, T* arr) {
    int iter = 0;
    for (int w = 0; w < size; w++) {
        int k;
        T t = arr[w];
        for (k = w - 1; k >= 0 && arr[k] > t; k--) {
            arr[k + 1] = arr[k];
           /*cout << iter++ << " " << t << " : ";       //сортировка массива методом вставки
            spec_show(0, w, arr);
            cout << "(" << '*' << ") ";
            spec_show(w+1, size, arr);
            cout << endl;*/
        }
        arr[k + 1] = t;
    }
}

template<typename T>
void spec_show(int begin, int end, T* arr) {
    for (int k = begin; k < end; k++) {
        cout << arr[k] << " ";
    }
}