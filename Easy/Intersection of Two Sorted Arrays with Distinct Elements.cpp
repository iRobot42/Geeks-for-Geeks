vector< int > intersection( vector< int >& a, vector< int >& b ) {
    vector< int > v;
    for ( size_t ia{}, ib{}; ia < a.size() && ib < b.size(); )
        if ( a[ ia ] < b[ ib ] ) ++ia;
        else if ( b[ ib ] < a[ ia ] ) ++ib;
        else v.push_back( a[ ia++ ] ), ++ib;
    return v;
}
