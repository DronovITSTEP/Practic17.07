#include <iostream>
#include <Windows.h>

using namespace std;


//Заполнение двумерного массива одинаковыми числами
/*int& rf(int index);

int a[10][2];

int main()
{
	int b;
	cout << "Fill array\n";
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << " elemnt: ";
		cin >> b;
		a[i][0] = b;
		rf(i) = b;
	}
	cout << "\nShow array\n";
	for (int i = 0; i < 10; i++) {
		cout << a[i][0] << "\t" << rf(i) << endl;
	}
}

int& rf(int index) { //возвращает ссылку на элемент массива
	return a[index][1];
}*/
//Нахождение максимального элемента в массиве и замена его на 0
/*int& rmax(int n, int d[]) {
	int im = 0;
	for (int i = 0; i < n; i++) {
		im = d[im] > d[i] ? im : i;
	}
	return d[im];
}

void main() {
	int x[] = { 10,20,30,14 };
	int n = 4;
	cout << "rmax(n, x) = " << rmax(n, x) << endl;
	rmax(n, x) = 0;

	for (int i = 0; i < n; i++) {
		cout << "x[" << i << "] = " << x[i] << endl;
	}
}*/

/*указатель_на_тип = new имя_типа(инициализатор);

int* ip = new int; // динамическое выделение памяти под элемент
int i = 0;
ip = &i;

int n;
cin >> n;
int arr[n];

int* mas = new int[n];//динамическое выделение памяти под 
					  //массив


void main() {
	srand(time(NULL));
	int size;
	int* dar;
	//запрос размера массива
	cout << "Enter size: ";
	cin >> size;
	//выделение памяти под массив
	dar = new int[size];

	//заполение массива и показ на экран
	for (int i = 0; i < size; i++) {
		dar[i] = rand() % 100;
		cout << dar[i] << " ";
	}
	if (dar) {
		delete[] dar;
		dar = nullptr;
	}
	cout << endl << dar[3];

}

//delete ip; //int *ip = new int
//delete[]mas; //int* mas = new int[];
*/

/*
Задание 1 Используя указатели и оператор разыменования, 
определить наибольшее из двух чисел.
*/
/*
//предеча через ссылки 
int maxNum(int &a, int &b) {
	return a > b ? a : b;
}
//передача через указатели
int maxNum1(int* a, int* b) {
	return *a > *b ? *a : *b;
}

void main() {
	int a = 6, b = 8;
	cout << "Maximum: " << maxNum(a, b);
	cout << "Maximum: " << maxNum1(&a, &b);
}
*/
/*
Задание 2 Используя указатели и оператор разыменования, 
определить знак числа, введённого с клавиатуры.
*/
/*
string znak(int* a) {
	return *a > 0 ? "positive" : "negative";
}

void main() {
	int a; cin >> a;
	cout << znak(&a);
}
*/
/*
Задание 3 Используя указатели и оператор разыменования, 
обменять местами значения двух переменных.
*/
/*void replacement(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main() {
	int a = 5, b = 9;
	replacement(&a, &b);
	cout << a << " " << b;
}
*/
/*
Задание 4 Написать примитивный калькулятор, 
пользуясь только указателями.
*/
/*
int sum(int* a, int* b) { return *a + *b; }
int dif(int* a, int* b) { return *a - *b;}
int div(int* a, int* b) { return *a / *b;}
int mult(int* a, int* b) { return *a * *b;}

void main() {
	int a = 7, b = -3;
	cout << sum(&a, &b) << "\n"
		<< dif(&a, &b) << "\n"
		<< div(&a, &b) << "\n"
		<< mult(&a, &b) << "\n";
}
*/
/*
Задание 5 Используя указатель на массив целых чисел, 
посчитать сумму элементов массива. 
Использовать в программе арифметику указателей для 
продвижения по массиву, а также оператор разыменования.
*/
/*
void sumArray(int* arr, int s) {
	int summa = 0;
	int summa1 = 0;
	int summa2 = 0;
	for (int i = 0; i < s; i++, arr++) {
		summa += arr[i];
		summa1 += *(arr + i); // arr++ в цилке не прописывается
		summa2 += *arr;	//arr++ прописывается в цикле
	}
	cout << summa << endl << summa1 << endl << summa2;
}
void main() {
	int arr[5] = { 1,2,3,4,5 };
	sumArray(arr, 5);
}
*/
/*
Задание 6 Даны два массива: 
А[M] и B[N] (M и N вводятся с клавиатуры). 
Необходимо создать третий массив минимально 
возможного размера, в котором нужно собрать 
элементы обоих массивов.
*/
/*
void fillArr(int* a, int s) {//заполнение массива и вывод на экран
	srand(time(NULL));
	for (int i = 0; i < s; i++) {
		*(a + i) = rand() % 10;
		cout << *(a + i) << " ";
	}
	cout << endl;
}

void main() {
	int M, N;
	cout << "Enter size array: \n";
	cin >> M >> N;
	int* A = new int[M];
	fillArr(A, M);
	int* B = new int[N];
	fillArr(B, N);
	int* C = new int[M + N];
	for (int i = 0; i < M + N; i++) {
		if (i < M)
			*(C + i) = *(A++);
		else if (i >= M)
			*(C + i) = *(B++);

		cout << *(C + i) << " ";
	}
		delete[]C;

}
*/
/*
Задание 7 Даны два массива: 
А[M] и B[N] (M и N вводятся с клавиатуры). 
Необходимо создать третий массив минимально 
возможного размера, в котором нужно собрать 
общие элементы двух массивов без повторений.
*/
//заполнение массива и вывод на экран
void fillArr(int* a, int s) {	
	for (int i = 0; i < s; i++) {
		*(a + i) = rand() % 10;
		cout << *(a + i) << " ";
	}
	cout << endl;
	Sleep(300);
}

//объединение двух массивов А и В в один массив С
void allArr(int* A, int* C, int* B, int M, int N) {
	for (int i = 0; i < M + N; i++) {
		if (i < M)
			*(C + i) = *(A++);
		else if (i >= M)
			*(C + i) = *(B++);

		cout << *(C + i) << " ";
	}
}

//подсчет кол-ва элемнтов без повторений
int countArrayElem(int* C, int M, int N) {
	int counter = 1;
	bool flag;
	for (int i = 0; i < M + N - 1; i++) {
		flag = true;
		for (int j = i + 1; j < M + N; j++) {
			if (C[i] == C[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			counter++;
		}
	}
	cout << endl << counter << endl;
	return counter;
}

void main() {
	srand(time(NULL));
	int M, N;
	cout << "Enter size array: \n";
	cin >> M >> N;
	int* A = new int[M];
	fillArr(A, M);
	int* B = new int[N];
	fillArr(B, N);
	int* C = new int[M + N];
	allArr(A, C, B, M, N);

	int *C1 = new int[countArrayElem(C, M, N)]; //создание массива (в размер передает результат функции)
	bool flag;
	//заносим значения из массива С в массив С1 без повторений
	for (int i = 0, k = 0 ; i < M + N; i++) {
		flag = true;
		for (int j = i-1; j >=0; j--) {
			if (C[i] == C[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			C1[k] = C[i];
			k++;
		}
	}
	//вывод результата на экран
	for (int i = 0; i < countArrayElem(C, M, N); i++) {
		cout << C1[i] << " ";
	}

}
