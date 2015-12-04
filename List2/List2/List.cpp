#include "List.h"

List::List(int n) {
	data = new double[n];
	index = new int[n];
}

List::~List() {
	delete []data;
	delete []index;
}

void List::print() {
	int i = index[0];
	while (i != 0) {
		cout<<data[i]<<" ";
		i = index[i];
	}
}

void List::MoveNext() {
	prev = curr;
	curr = data[curr];
}