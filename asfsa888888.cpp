#include <iostream>
#include <ctime>
using namespace std;
double pi = 3.14;
double circles(double r) {
	double s = pi * r * r;
	return s;
}
double rings(double r1, double r2) {
	double sr1 =pi*r1*r1;
	double sr2=pi*r2*r2;
	double s = sr1 - sr2;
	return s;
}
double trianglep(double a, double h) {
	double b2 = pow(a / 2, 2) + h * h;
	double b = sqrt(b2);
	double p = b + b + a;
	return p;
}
int sumrange(int a, int b) {
	if (a > b) {
		return 0;
	}
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum = sum + i;
	}
	return sum;
	
}
double calc(double a, double b, int op) {
	if (op == 1) {
		return a - b;
	}
	if (op == 2) {
		return a * b;
	}
	if (op == 3) {
		return a / b;
	}
	if (op > 3) {
		return a + b;
	}
}
int quarter(double x, double y) {
	if (y > 0 && x > 0) {
		return 1;
}
	if (y > 0 && x < 0) {
		return 2;
	}
	if (y < 0 && x < 0) {
		return 3;
	}
	if (y < 0 && x > 0) {
		return 4;
	}

}
bool even(int k) {
	if (k % 2 == 0) {
		return true;
	}
	if (k % 2 != 0) {
		return false;
	}
}

int main(){
/*	Proc18.Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R(R — вещественное).С помощью этой функции
		найти площади трех кругов с данными радиусами.Площадь круга радиуса R вычисляется по формуле S = π·R
		2
		.В качестве значения π использовать 3.14.*/
/*	for (int i = 1; i <= 3; i++) {
		double r;
		cin >> r;
		cout << circles(r)<<" ";
	}*/
	/*Proc19.Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром
		и радиусами R1 и R2(R1 и R2 — вещественные, R1 > R2).С ее помощью
		найти площади трех колец, для которых даны внешние и внутренние радиусы.Воспользоваться формулой площади круга радиуса R : S = π·R
		2
		.В
		качестве значения π использовать 3.14.*/
	/*for (int i = 1; i <= 3; i++) {
		double r1, r2;
		cin >> r1 >> r2;
		cout << rings(r1, r2)<<" ";
	}*/
	/*Proc20.Описать функцию TriangleP(a, h), находящую периметр равнобедренного треугольника по его основанию a и высоте h, проведенной к
		основанию(a и h — вещественные).С помощью этой функции найти
		периметры трех треугольников, для которых даны основания и высоты.
		Для нахождения боковой стороны b треугольника использовать теорему
		Пифагора :
	b
		2 = (a / 2)2 + h
		2
		.*/
	/*for (int i = 1; i <= 3; i++) {
		double a, h;
		cin >> a >> h;
		cout << trianglep(a, h) << " ";
	}*/
	/*Proc21◦
		.Описать функцию SumRange(A, B) целого типа, находящую сумму
		всех целых чисел от A до B включительно(A и B — целые).Если A > B, то функция возвращает 0. С помощью этой функции найти суммы чисел
		от A до B и от B до C, если даны числа A, B, C.*/
	/*int a, b, c;
	cin >> a >> b >> c;
	cout << sumrange(a, b) << " ";
	cout << sumrange(b, c) << " ";
	*/
	/*Proc22.Описать функцию Calc(A, B, Op) вещественного типа, выполняющую
		над ненулевыми вещественными числами A и B одну из арифметических
		операций и возвращающую ее результат.Вид операции определяется целым параметром Op : 1 — вычитание, 2 — умножение, 3 — деление, остальные значения — сложение.С помощью Calc выполнить для данных A и B
		операции, определяемые данными целыми N1, N2, N3.*/
	/*double a, b;
	int op;
	cin >> a >> b >> op;
	cout << calc(a,b,op);*/
/*	Proc23.Описать функцию Quarter(x, y) целого типа, определяющую номер
		координатной четверти, в которой находится точка с ненулевыми вещественными координатами(x, y).С помощью этой функции найти номера
		координатных четвертей для трех точек с данными ненулевыми координатами.*/
	
	/*for (int i = 1; i <= 3; i++) {
		double x, y;
		cin >> x >> y;
		cout << quarter(x, y)<<" ";
	}*/
	/*Proc24.Описать функцию Even(K) логического типа, возвращающую TRUE,
		если целый параметр K является четным, и FALSE в противном случае.С
		ее помощью найти количество четных чисел в наборе из 10 целых чисел.*/
	/*for (int i = 1; i <= 10; i++) {
		int k;
		cin >> k;
		cout <<boolalpha<< even(k) << " ";
	}*/
	

	return 0;

}