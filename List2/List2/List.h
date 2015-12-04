#pragma once
#include <iostream>
using namespace std;

class List {
public:
	double *data;
	int *index;
	int prev, curr;

	List(int n);
	~List();

	void MoveNext();
	void print ();
	void Add(double v);
	void Del();
	double operator * ();
};