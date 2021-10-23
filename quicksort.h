#include <algorithm>

template <typename T>
void quicksort(T* values, int began, int end){
	int i, j;
	T pivo;
	i = began;
	j = end-1;
	pivo = values[(began + end) / 2];

	while(i <= j)	{
		while(values[i] < pivo && i < end) i++;
		while(values[j] > pivo && j > began) j--;
	
		if(i <= j){
			std::swap(values[i], values[j]);
			i++;
			j--;
		}
	}
	if(j > began)
		quicksort(values, began, j+1);
	if(i < end)
		quicksort(values, i, end);
}
// complexity O(n log(n))