#include "Matrix.h"
#include <iostream>
using namespace std;

int main()
{
	Matrix<int> m{ 3,3 };
	int jednodpole[] = { 0,1,2,3,4,5,6,7,8 };
	m.SetArray(jednodpole, 9);
	cout << "Matice: " << endl;
	m.toString();
	Matrix<int> mt = m.Transpose();
	cout << "Transpozice: " << endl;
	mt.toString();
	Matrix<int> mmt = m.Multiply(mt);
	cout << "Nasobeni: " << endl;
	mmt.toString();
	Matrix<double> mmt_d = mmt.Cast<double>();
	Matrix<double> n_d{ 3,3 };
	double jednodpole_d[] = { 4.5,5,0,2,-0.5,7,1.5,9,6 };
	n_d.SetArray(jednodpole_d, 9);
	cout << "Double: " << endl;
	n_d.toString();
	Matrix<double> mmtn_d = mmt_d.Multiply(n_d);
	cout << "Nasobeni double: " << endl;
	mmtn_d.toString();
	Matrix<int> r = mmtn_d.Cast<int>();
	Matrix<int> t{ 3,3 };
	int tpole[] = { 85,225,236,292,819,866,499,1413,1496 };
	t.SetArray(tpole, 9);
	std::cout << "r==t ? " << (r.Equals(t) ? "true" : "false") << std::endl;
	return 0;
}