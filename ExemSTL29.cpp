#include <algorithm>
#include <iostream>
using namespace std;

// Def generic tenplate
template <class T>
class Comparator { // we pass an object of this class as
				// third arg to sort function...
	
	// Def constructor
	public:
		bool operator()(T x1, T x2) {
		
			return x1 < x2;
	
	}

};


// Def class funComparator return type is bool
template <class T> bool funComparator(T x1, T x2) { 
	
		return x1 <= x2;

}

// Method to printing the array
void show(int a[], int array_size) {
	
	for (int i = 0; i < array_size; i++) 
		cout << a[i] << " ";
	
}

// Driver code 
int main() {
	
	// Def array
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof(a) / sizeof(int);
	
	cout << "The array before sorting is : ";
	show(a, asize);
	
	cout << endl << "The array after sorting is(asc) :";
	sort(a, a + asize);
	show(a, asize);
	
	cout << endl << "The array after sorting is(desc) :";
	sort(a, a + asize, greater<int>());
	show(a, asize);

	return 0;

} // End driver
