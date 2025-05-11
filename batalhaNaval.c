#include <stdio.h>

int main() {

    int campo [10] [10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} 
    } ;

    //posicionar em [1 , 6] [1 , 8]
    int barcoH [3] = {3, 3, 3} ;

    //posicionar em [8 , 2] [6 , 2]
    int barcoV [3] = {3, 3, 3} ;


    int C = 10 ;
    int L = 10 ;
    int coords = 0 ;
    
    //primeiro tabuleiro sem os navios
    
    printf ("== + ==\n") ;
    printf ("Primeiro tabuleiro.\n") ;
    printf ("== + ==\n") ;
    
    printf ("x  A B C D E F G H I J\n") ;
    for ( int i = 0 ; i < L ; i++ ) {
        coords += 1 ;
        if (coords < 10 ){
           printf ("0%d ", coords);
        } else { printf ("10 ") ; }
        
        for ( int j = 0 ; j < C ; j++) {
            printf ("%d ", campo[i][j]);
        } 
        printf ("\n") ;
    }
    
    campo [1][6] = barcoH [0] ;
    campo [1][7] = barcoH [1] ;
    campo [1][8] = barcoH [2] ;
    
    campo [8][2] = barcoV [0] ;
    campo [7][2] = barcoV [1] ;
    campo [6][2] = barcoV [2] ;
    
    //segundo tabuleiro com os navios
    
    printf ("== + ==\n") ;
    printf ("Segundo tabuleiro.\n") ;
    printf ("== + ==\n") ;
    
    coords = 0 ;
    printf ("x  A B C D E F G H I J\n") ;
    for ( int i = 0 ; i < L ; i++ ) {
        coords += 1 ;
        if (coords < 10 ){
           printf ("0%d ", coords);
        } else { printf ("10 ") ; }
        
        for ( int j = 0 ; j < C ; j++) {
            printf ("%d ", campo[i][j]);
        } 
        printf ("\n") ;
    }

    return 0;
}
