void add_to_vector( vector< int >& a, int x ) {
    a.push_back( x );
}
void sort_vector_asc( vector< int >& a ) {
    sort( a.begin(), a.end() );
}
void reverse_vector( vector< int >& a ) {
    reverse( a.begin(), a.end() );
}
int size_of_vector( vector< int >& a ) {
    return a.size();
}
void sort_vector_desc( vector< int >& a ) {
    sort( a.rbegin(), a.rend() );
}
void print_vector( vector< int >& a ) {
    for ( const int i : a ) cout << i << ' ';
}
