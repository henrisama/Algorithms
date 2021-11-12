#include <list>

template <typename T>
int binarySearch(T* list, T key, int begin, int end){
  // get middle of the list
  int i = (begin + end) / 2;

  if(list[i] == key)
    return i;

  // if key does not exist, return -1
  if(begin+1 == end)
    return -1;

  if(list[i] > key)
    return binarySearch(list, key, begin, i);
  else
    return binarySearch(list, key, i, end);
}
// complexity O(log(n))