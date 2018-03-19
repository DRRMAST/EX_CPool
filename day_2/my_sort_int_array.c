#include <unistd.h>
#include <stdio.h>
void my_sort_int_array ( int *array , int size )
{
	int i = 0,j = 0,t;    
	
	while(i < size - 1){
		j = 0;
		while(j < size - i - 1){
			if(array[j] > array[j + 1]){
				t = array[j + 1];
				array[j + 1] = array[j];
				array[j] = t;
			}
			j++;
		}
		i++;
	}
	
}
int main()
{
	int array[10]={12 ,43,9,13,67,98,101,89,3,35};//十个数的无序数列 
	my_sort_int_array(array,10);
	for(int i=0;i<10;i++)  
    {  
  
        printf("%d ",array[i]);  
    }
	
}
 
    
