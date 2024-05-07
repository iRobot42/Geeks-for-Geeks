int isPossible( int n, int a[] ) {
    return !( accumulate( a, a + n, 0, []( int s, int i ){
        while ( i ) s += i % 10, i /= 10; return s; }) % 3 );
}
