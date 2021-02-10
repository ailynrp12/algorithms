'''
Insertion Sort
@author: Ailyn Rebollar
@param numbers: a list of n numbers
@return an ordered list of numbers
Time Complexity: O(n²)
Space Complexity: O(n)
Algorithm taken by Cormen H. Thomas, Introduction to Algorithms
'''
def insertionSort(numbers):
	for j in range(len(numbers)):
		key = numbers[j]
		i = j - 1
		# Comparing with the element before
		while i > -1 and numbers[i] > key:
			numbers[i+1] = numbers[i]
			i = i-1
		numbers[i+1] = key
	return numbers
