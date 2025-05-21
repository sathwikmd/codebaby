 #include <stdio.h> 
void main() 
{ 
int i, a[20], n, pos; 
printf("Enter the number of elements: "); 
scanf("%d", &n); 
printf("Enter the elements: "); 
for (i = 0; i < n; i++) 
{ 
scanf("%d", &a[i]); 
} 
printf("Enter the position from which number has to be deleted: "); 
scanf("%d", &pos); 
for (i = pos; i < n - 1; i++) 
{ 
a[i] = a[i + 1]; 
} 
n--; 
printf("The array after deletion is :"); 
for (i = 0; i < n; i++) 
{ 
printf("\nA[%d]=%d", i, a[i]); 
} 
} 
