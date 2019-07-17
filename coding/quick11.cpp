//============================================================================
// Name        : quick11.cpp
// Author      : AMAN
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void quick(int array[], int l, int r) {

      int n = l, m = r;

      int temp1;

      int pivot1 = array[(l + r) / 2];

      while (m<= n) {

            while (array[m] < pivot1)

                  m++;

            while (array[n] > pivot1)

                  n--;

            if (m <= n) {

                  temp1 = array[m];

                  array[m] = array[n];

                  array[n] = temp1;

                  ++m;

                  n--;
            }

      };

      if (l < n)

            quick(array, l, n);

      if (m < r)

            quick(array, m, r);

}

int main() {

	int a[]={2,45,7,78,52,3,1};
	quick(a,0,6);
	for(int m=0;m<7;m++)
	cout << a[m]<< " " ;
	return 0;
}
