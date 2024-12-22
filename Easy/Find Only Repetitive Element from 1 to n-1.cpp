int findDuplicate( vector< int >& arr ) {
    vector< bool > seen( arr.size() );
    for ( const int number : arr )
        if ( seen[ number ] ) return number;
        else seen[ number ] = true;
    throw( "No repeating element" );
}
