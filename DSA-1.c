#include <stdio.h>

int main() {
    int i, j, n;
    float arr[100], temp;
    printf(" Enter the number of students in the class: ");
    scanf("%d", &n);
    
    printf("\n Enter the marks for %d students: ", n);
    for(i=0;i<n;i++)
        {
            scanf("%f", &arr[i]);
        }
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    if(arr[i] < arr[j])
                      {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                      }
                }
        }
    printf("\n Ranks of students: ");
    printf("\n RANK            Marks ");
    for(i=0;i<n;i++)
        {
            printf("\n %d             %0.2f", i+1,arr[i]);
        }
		return 0;
		
}
		
