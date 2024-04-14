vector< int > getStarAndSuperStar( int a[], int n ) {
    vector< int > stars;
    int star{ INT_MIN }, superstar{ -1 };
    while ( n-- )
        if ( a[ n ] == star ) superstar = -1;
        else if ( a[ n ] > star )
            stars.push_back( superstar = star = a[ n ] );
    stars.push_back( superstar );
    return { stars.crbegin(), stars.crend() };
}
