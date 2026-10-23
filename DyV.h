#include <vector>
#include <iostream>
using namespace std;
template <typename T>


int BusquedaBinaria(T val, const vector <T> &v, int ini, int fin){
	if (ini>fin){
		cout<<"no se encuentra en el array"<<endl;
		return -1;
	}else{
		int medio = (ini+fin)/2;
		if(v[medio] == val){
			return medio;
		}else{
			if(v[medio]>val){
				return BusquedaBinaria(val, v, ini, medio-1);
			}else{
				return BusquedaBinaria(val, v, medio+1, fin);
			}
		}
	}
}

template <typename T>
 
 int Partition(vector <T> &v, int ini, int fin){
	 T x = v[fin];
     int i=ini;
      for(int j=ini;j<fin;j++){
          if(v[j]<=x){
              T temp=v[i];
              v[i]=v[j];
              v[j]=temp;
              i++;
          }
      } 
      T temp = v[i];
      v[i]=v[fin];
      v[fin]=temp;
  return i;
 }

template <typename T>

void QuickSort(vector <T> &v, int ini, int fin){
	if(ini<fin){
		int pivot = Partition(v,ini,fin);
		QuickSort(v,ini, pivot-1);
		QuickSort(v, pivot+1,fin);
	}
}

