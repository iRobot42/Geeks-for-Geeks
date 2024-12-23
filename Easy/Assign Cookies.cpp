int maxChildren( vector< int >& greed, vector< int >& cookies ) {
    sort( greed.begin(), greed.end() );
    sort( cookies.begin(), cookies.end() );
    int c{}, i{};
    for ( const int cookie : cookies )
        if ( cookie >= greed[ i ] && ( ++c, ++i == greed.size() ))
            break;
    return c;
}
