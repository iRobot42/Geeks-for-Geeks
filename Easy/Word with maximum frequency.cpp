string maximumFrequency( string s ) {
    string w; int f{}; // result
    unordered_map< string, int > m;
    istringstream s1{ s }, s2{ s };
    while ( s1 >> w ) f = max( f, ++m[ w ] );
    while ( s2 >> w ) if ( m[ w ] == f ) break;
    return w + ' ' + to_string( f );
}
