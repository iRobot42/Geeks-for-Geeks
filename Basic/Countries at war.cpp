string Country_at_war( int a[], int b[], int n ) {
    int s{};
    while ( n-- )
        s += ( a[ n ] > b[ n ] ) - ( a[ n ] < b[ n ] );
    return !s ? "DRAW" : s > 0 ? "A" : "B";
} // 0.35 - 0.40
