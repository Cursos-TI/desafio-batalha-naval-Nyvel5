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
    
    int barcoD1 [3] = {3, 3, 3} ;
    
    int barcoD2 [3] = {3, 3, 3} ;


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
    
    campo [1][1] = barcoD1 [0] ;
    campo [2][2] = barcoD1 [1] ;
    campo [3][3] = barcoD1 [3] ;
    
    campo [6][8] = barcoD2 [1] ;
    campo [5][7] = barcoD2 [2] ;
    campo [4][6] = barcoD2 [3] ;
    
    campo [1][6] = barcoH  [0] ;
    campo [1][7] = barcoH  [1] ;
    campo [1][8] = barcoH  [2] ;
    
    campo [8][2] = barcoV  [0] ;
    campo [7][2] = barcoV  [1] ;
    campo [6][2] = barcoV  [2] ;
    
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
