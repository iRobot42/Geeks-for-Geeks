vector< string > convert( int a, int b, int c, string d ) {
    
    int t{}, i{};
    do t += a % 2 * pow( 10, i++ );
    while ( a /= 2 );
    vector< string > v{ to_string( t )};
    
    t = 0, i = 0;
    do t += b % 10 * pow( 2, i++ );
    while ( b /= 10 );
    v.push_back( to_string( t ));
    
    ostringstream ss;
    ss << hex << c;
    v.push_back( ss.str() );
    for ( char& c : v.back() ) c = toupper( c );
    
    istringstream( d ) >> hex >> t;
    v.push_back( to_string( t ));
    
    return v;
} // 0.01+
