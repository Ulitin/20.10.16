#include "queue.h"

double* fun(int w, int* x, int size) {
	if ((x != 0) && (size > 0) &&  (w > 0) && (w <= size)) {
		int sum = 0;
		QUEUE q;
		for (int i = 0; i < w; i++) {
			q.push(x[i]);
			sum = sum + x[i];
		}
		double *a = new double[size - w + 1];
		a[0] = sum / w;
		int old, next;
		for (int i = 0; i < (size - w); i++) {
			old = q.front();
			next = x[w + i];
			sum = sum - old + next;
			q.pop();
			q.push(next);
			a[i+1] = sum / w;
		}
		delete[] x;
		return a;
	}
	else{
	    throw 1;
	}
}
