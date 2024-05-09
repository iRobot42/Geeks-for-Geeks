int maxValueOfExpression( int a[], int n ) {
    int l1{ *a }, h1{}, l2{ *a }, h2{}, t;
    while ( n-- )
        l1 = min( l1, t = a[ n ] + n ), h1 = max( h1, t ),
        l2 = min( l2, t = a[ n ] - n ), h2 = max( h2, t );
    return max( h1 - l1, h2 - l2 );
}
