#include <stdio.h>

int main()
{
int num;
while (scanf("%d", &num) != EOF)
{
int *arr = new int[num];
for (int i = 0; i < num; i++) scanf("%d", &arr[i]);
for (int i = 0; i < num; i++)
{
if (i % 2 == 0)
{
for (int j = i / 2; j < num - (i / 2); j++)
printf("%d ", arr[j]);
}
else
{
for (int j = num - (i + 1) / 2, count = num - i; count > 0; j--, count--)
printf("%d ", arr[j]);
}
printf("\n");
}
}
return 0;
}

 