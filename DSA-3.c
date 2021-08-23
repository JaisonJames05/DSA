#include <stdio.h>

int main() {
    int i, j, n, arr[50][50], temp, total[50];

    printf("\n Enter the number of students: ");
    scanf("%d", &n);
    printf("\n Enter the marks of the 3 subjects for %d students ", n);
    for(i=0;i<n;i++)
        {
        	            printf("\n Enter the marks for STUDENT %d: ", i+1);
            for(j=0;j<3;j++)
                {   
                    printf("\n Enter mark for SUBJECT %d: ", j+1);
                    scanf("%d", &arr[i][j]);
                    total[i] = total[i] + arr[i][j];     
                }
        }
    printf("\n Marks of students in the 3 subjects: \n");
    for(i=0;i<n;i++)
        {   
            printf("   \n STUDENT %d:  \n", i+1);
            {
                for(j=0;j<3;j++)
                    {
                        printf("\n Subject %d: %d", j+1, arr[i][j]);
                        
                    }
				printf("\n Total Marks : %d", total[i]);
            }
        }
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    if(total[i] < total[j])
                      {
                        temp = total[i];
                        total[i] = total[j];
                        total[j] = temp;
                      }
                }
        }
    printf("\n Ranks of %d students: ",n);
    printf("\n RANK            Marks ");
    for(i=0;i<n;i++)
        {
            printf("\n %d             %d", i+1, total[i]);
        }

    
    return 0;
}


