#include<stdio.h>
void main()
{
	int a=2,b=1;
	int x=(a++ && (!b) && b|| ++a);
        printf("%d",x);

}
//-----------------output---------------
//1
