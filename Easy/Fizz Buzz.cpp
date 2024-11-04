vector< string > fizzBuzz( int n ) {
    vector< string > v;
    for ( int i{ 1 }; i <= n; ++i ) {
        string s;
        if (!( i % 3 )) s += "Fizz";
        if (!( i % 5 )) s += "Buzz";
        v.push_back( s.empty() ? to_string( i ) : s );
    }
    return v;
}
