void findAll() {
    mp[ 1 ] = mp[ 2 ] = mp[ 3 ] = 1;
    for ( int i{ 11 }; i <= 1e6; ++i )
        if ( mp[ i % 10 ] && mp[ i / 10 ] )
            mp[ i ] = 1;
}
