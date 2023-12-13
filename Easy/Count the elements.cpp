using V = vector< long long >;
V find( V a, V b, V q ) {
    V h( 1000001 );
    for ( const auto i : b ) ++h[ i ];
    const auto m{ *max_element( a.cbegin(), a.cend() )};
    for ( auto i{ 1 }; i <= m; ++i ) h[ i ] += h[ i-1 ];
    for ( auto& i : q ) i = h[ a[ i ]];
    return q;
}
