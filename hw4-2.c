#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d",&a,&b);
        if(a!=123&&a!=456&&a!=789&&a!=336&&a!=775&&a!=556)
        {
            printf("error");

        }
            if(a==123){if(b==456){printf("%d",9000);}else{printf("error");}}
            if(a==456){if(b==789){printf("%d",5000);}else{printf("error");}}
            if(a==789){if(b==888){printf("%d",6000);}else{printf("error");}}
            if(a==336){if(b==558){printf("%d",10000);}else{printf("error");}}
            if(a==775){if(b==666){printf("%d",12000);}else{printf("error");}}
            if(a==556){if(b==1221){printf("%d",7000);}else{printf("error");}}
}
}

