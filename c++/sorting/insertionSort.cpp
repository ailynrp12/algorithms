/**
* Insertion Sort
* @author: Ailyn Rebollar
* @param numbers: a list of n numbers
* @return an ordered list of numbers
* Time Complexity: O(n²)
* Space Complexity: O(n)
* Algorithm taken by Cormen H. Thomas, Introduction to Algorithms
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int>);
void print(vector<int>);

int main(){
	vector<int> numbers;
	int n,aux;
	cin >> n;
	// Creating a new vector with a length n
	for(int u = 0; u < n; u++){
		cin >> aux;
		numbers.push_back(aux);
	}
	// Ordering with insertion sort algorithm
	vector<int> ordered = insertionSort(numbers);
	print(ordered);
	return 1;
}

// Auxiliar function which applies insertion sort
vector<int> insertionSort(vector<int> num){
	int i = 0;
	for(int j = 0; j < num.size(); j++){
		int key = num[j];
		i = j - 1;
		// Comparing with the element before
		while (i > -1 && num[i] > key){
			num[i+1] = num[i];
			i = i -1;
		}
		num[i+1] = key;
	}
	return num;
}

// Auxiliar function to print the ordered vector
void print(vector<int> num){
	for(int i = 0; i < num.size(); i++){
		cout << num[i] << " ";
	}
	cout << endl;

}