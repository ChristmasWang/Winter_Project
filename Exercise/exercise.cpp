#include <iostream>
#include <random>
#include <ctime>
using namespace std;

#define ARRAY_SIZE 20

#define SELECTSORT_TEST
//#define BUBBLESORT_TEST
//#define INSERTSORT_TEST
//#define MERGESORT_TEST
//#define QUICKSORT_TEST

void print(int *MyArray, int size) {
	for (int i = 0; i < size; i++) {
		cout << MyArray[i] << "\t";
	}
	cout << endl;
}

void Init(int *MyArray, int size) {
	srand((int)time(0));  
	for (int i = 0; i < size; i++)
	{
		MyArray[i] = rand() % 100;
	}
}


void SelectSort(int *MyArray, int size) {
	// TODO 
}

void BubbleSort(int *MyArray, int size) {
	// TODO 
}

void InsertSort(int *MyArray, int size) {
	// TODO 
}

void MergeSort(int *MyArray, int size) {
	// U do not have to do this
	// If U want to learn more, U can finish it 
	// If U find it difficult, U can contact me via QQ 
}

void QuickSort(int *MyArray, int size) {
	// U do not have to do this 
	// If U want to learn more, U can finish it 
	// If U find it difficult, U can contact me via QQ 
}

int main()
{
	int *MyArray = new int[ARRAY_SIZE];

	// Init
	Init(MyArray, ARRAY_SIZE);
	cout << "Before Sort:"; print(MyArray, ARRAY_SIZE);

#ifdef SELECTSORT_TEST
	SelectSort(MyArray, ARRAY_SIZE);
	cout << "After SelectSort:"; print(MyArray, ARRAY_SIZE);
#endif // SELECTSORT_TEST

#ifdef BUBBLESORT_TEST
	BubbleSort(MyArray, ARRAY_SIZE);
	cout << "After BubbleSort:"; print(MyArray, ARRAY_SIZE);
#endif // BUBBLESORT_TEST

#ifdef INSERTSORT_TEST
	InsertSort(MyArray, ARRAY_SIZE);
	cout << "After InsertSort:"; print(MyArray, ARRAY_SIZE);
#endif // INSERTSORT_TEST

#ifdef MERGESORT_TEST
	MergeSort(MyArray, ARRAY_SIZE);
	cout << "After MergeSort:"; print(MyArray, ARRAY_SIZE);
#endif // MERGESORT_TEST

#ifdef QUICKSORT_TEST
	QuickSort(MyArray, ARRAY_SIZE);
	cout << "After QuickSort:"; print(MyArray, ARRAY_SIZE);
#endif // QUICKESORT_TEST
	delete []MyArray;
}

// Q1: What is the time complexity of your sorting algorithm？ 
// It would be better if U can write down the process how you calculate

// Q2: What is the loop invariant of your sorting algorithm?
// I kown U must Know!! 

// Q3: What difficulties did you encounter when writing the code?
// I will read this carefully!