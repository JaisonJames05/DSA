#include <stdio.h>
int main() {
  int n, m, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &n);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &m);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum of two matrices: \n");
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) {
      printf("%d   ", sum[i][j]);
      
      }
    

  return 0;
}

