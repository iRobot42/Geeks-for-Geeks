int distinctCount( int a[], int n ) {
    unordered_set< int > s;
    while ( n-- ) s.insert( abs( a[ n ] ));
    return s.size();
}
