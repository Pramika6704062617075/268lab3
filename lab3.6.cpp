#include <stdio.h>
int main()
{
int score , dif;
scanf("%d",&score);

dif = 75 - score ;

if(score > 100)
printf("error score") ;
else if (score >= 85)
printf("A");
else if (score >= 75)
printf("B");
else if (score >= 68)
printf("C need %d to get B" , dif);
else if (score >= 55)
printf("D");
else if (score < 0)
printf("error score") ;
else printf("F");

return 0;
}
