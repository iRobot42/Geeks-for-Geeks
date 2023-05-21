const int N{ 10'000 };
bool searchEle( int a[], int x ) {
    return find( a, a + N, x ) != a + N;
}
bool insertEle( int a[], int y, int yi ) {
    return a[ yi ] = y;
}
bool deleteEle( int a[], int z ) {
    return find( a, a + N, z );
}
