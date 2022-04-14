int main(){
    int i, NUll, length = 10;
    int array[length];

    for (i = 0 ; i < length ; i++)
        array[i] = i * 10;
    printf("Before:");
    print(array, length);
    change(array, length);
    printf("After:");
    print(array, length);

    return 0;
}


void print(int *array,int length)
{
    int i;
    for(i = 0 ; i < length ; i++)
        printf("%d ", array[i]);
    printf("\n");
}


void change(int **array,int length)
{
    *array=malloc(length * sizeof(int) );
  if(*array == NUll)
    return;
  for(int i=0;i<length; i++)
    (*array)[i]=1;
}