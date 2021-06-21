
#include <stdio.h>

int main()
{
    printf("PRESS B FOR BURGER\n") ;
    printf("PRESS F FOR FRENCH FRY\n") ;
    printf("PRESS P FOR PIZZA\n") ;
    printf("PRESS S FOR SANDWISE\n") ;
    char price ;
    printf("PLEASE TAKE THE SEARCHING OPTION: \n\n") ;
    scanf("%c",&price) ;

    switch(price)
    {
        case 'B':
            {
                int q ;

                printf("\nBERGAR ELEMANT'S: ") ;
                scanf("%d",&q) ;
                printf("\nBURGER PRICE: %d\n",(200*q)) ;
                break ;
            }

        case 'F':
            {
                int q ;

                printf("\nFRENCH FRY ELEMANT'S: ") ;
                scanf("%d",&q) ;
                printf("\nFRENCH FRY: %d\n",(50*q)) ;
                break ;
            }

        case 'P':
            {
                int q ;

                printf("\nPIZZA ELEMANT'S: ") ;
                scanf("%d",&q) ;
                printf("\nPIZZA PRICE: %d\n",(500*q)) ;
                break ;
            }

        case 'S':
            {
                int q ;

                printf("\nSANDWISE ELEMANT'S: ") ;
                scanf("%d",&q) ;
                printf("\nSANDWISE PRICE: %d\n",(50*q)) ;
                break ;

            }
        default :
            {
                printf("\nTHANK YOU FOR VISTING OUR SHOP\n") ;
            }
    }

    return 0;
}
