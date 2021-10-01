#include <stdio.h>

int arr[5];

int ascending_order() {
	int i,j,temp;
for ( i = 0; i < 5; i++) {     
        for ( j = i+1; j < 5; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }    
		 }
		 printf("\nascending order = ");
		 for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
 
		 
		
		}



void max(){
 int max=arr[0];
 int i;
 for(i=1;i<5;i++){
 	if(arr[i]>max){
 		 max=arr[i];
	 }
}

int j;
int pos;
 for(j=0;j<5;j++){
 	if(max==arr[j]){
  	pos=j;
  }
  }
  
 printf("\n\nmaximum number = %d and it's position = %d ", max ,pos);
 
}


int min(){
 int min=arr[0];
 int i;
 for(i=1;i<5;i++){
 	if(arr[i]<min){
 		 min=arr[i];
	 } }
	 return min;
} 

int j;
int pos;
 for(j=0;j<5;j++){
 	if(min==arr[j]){
  	pos=j;
  }
  }
printf("\nminimum number = %d and it's position = %d ", min ,pos);
return min;
}


int main(void){
	
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		printf("\n");
	}
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
 
  max();
  min();
  ascending_order();
}
