bool vessel( int a[], int n, int k ) {
    vector< bool > x( k + 1 );
    for ( int ix{ 1 }; ix <= k; ++ix )
        for ( int ia{}; ia < n; ++ia ) {
            x[ a[ ia ]] = true;
            const int i{ ix - a[ ia ] };
            if ( i > 0 && x[ i ] ) {
                x[ ix ] = true;
                break;
            }
        }
    return x[ k ];
}
