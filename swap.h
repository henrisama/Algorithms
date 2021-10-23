template <typename T>
void swap(T *a, T *b){
  T aux;
  aux = *a;
  *a = *b;
  *b = aux;
}