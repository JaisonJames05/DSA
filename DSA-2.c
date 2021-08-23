#include <stdio.h> 
#include <conio.h> 
int main() { 
   int arr1 [10], arr2 [10], arr3 [20]; 
   int i,j, n1, n2, m,c, a=0;
   printf("\n Enter the number of elements in array 1: "); 
   scanf("%d", &n1); 
   printf("\n\n Enter the Elements of the first array"); 
   for(i=0;i<n1;i++)  { 
     scanf ("%d",&arr1[i]); 
   } 
   printf("\n Enter the number of elements in array 2: "); 
   scanf ("%d", &n2 ); 
   printf("\n\n Enter the Elements of the second array"); 
   for(i=0;i<n2;i++) { 
      scanf ("%d", &arr2[i]); 
      m = n1+n2; 
   } 
   for(i=0;i<n1;i++) { 
     arr3[a]=arr1[i]; 
     a++; 
   } 
   for(i=0;i<n2;i++) { 
      arr3[a]=arr2[i]; 
      a++; 
   } 
    for (i = 0; i < m;i++) 
        {
            for (j = i + 1; j < m;j++) 
            {
                if (arr3[i] > arr3[j]) 
                {
                    c = arr3[i];
                    arr3[i] = arr3[j];
                    arr3[j] = c;
                }
            }
    	}
   printf ("\n\n The merged array is"); 
   for(i=0;i<m;i++) { 
     printf("\t\n %d",arr3[i]); 
   } 
     getch(); 
     return 0; 
 }
