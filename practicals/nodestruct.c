#include"vector.h"
int main()
{
     // start coding
    vector array;
    construct(&array,0,0);
    push_back(&array,10);
    push_back(&array,11);
    push_back(&array,12);
    push_back(&array,14);
    push_back(&array,189);
   // pop(&array);
for (size_t i = 0; i < size(&array); i++)
{
printf("\t%lld\n ", array.Array[i]); 
}
printf("The begin of the vector is:%lld\n",begin(&array));
printf("The end of the vector is:%lld\n",end(&array));
printf("Before shrinking:\n");
printf("The size of the vector is:%lld\n",size(&array));
printf("The capacity of the vector is:%lld\n",capacity(&array));
shrink_to_fit(&array);
printf("After shrinking:\n");
printf("The size of the vector is:%lld\n",size(&array));
printf("The capacity of the vector is:%lld\n",capacity(&array));
forEach(&array);
clear(&array);
forEach(&array);
return 0;
}