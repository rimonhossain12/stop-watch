                                        /** In the name of ALLAH */

#include <stdio.h>
#include <stdlib.h>
#define CYCLE 10
int main()
{
    int hour,minutes,second;
    printf("Enter hour minutes second: ");
    scanf("%d %d %d",&hour,&minutes,&second);

    int h = 0, m = 0, s = 0;
    while(1){
        printf("\n\n\n\n\n\t\t\t\t*******************STOP WATCH**************************\n\n\n\n");
        printf("\t\t\t\t\t\t\t%.2d:%.2d:%.2d\n",h,m,s);
        if( h == hour && m == minutes && s == second){
            break;
        }
        else{
            system("Cls");
        }
        s++;
        if ( s == CYCLE ){
            m++;
            s = 0;
        }
        if ( m == CYCLE){
            h++;
            m = 0;
        }
    }
    printf("\n\n\n\n\n\t\t\t\t*******************STOP WATCH**************************\n\n\n\n");

    return 0;
}
