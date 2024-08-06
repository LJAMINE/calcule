#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,somme,moduleu;

    float diffirence,division;

    printf("entrer a ");
    scanf("%d",&a);

     printf("entrer b ");
    scanf("%d",&b);

     somme=a+b;
    diffirence=a-b;
    if (b!=0){
       division=a/b;
    moduleu=a%b;
    }else {
    printf("error b=0");
    }





    printf("somme = %d ,diffirence= %f,division= %f,moduleu=%d ",somme,diffirence,division,moduleu);
    return 0;
}
