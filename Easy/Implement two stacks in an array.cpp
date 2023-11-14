class twoStacks {
    array< int, 100 > a;
    int t1, t2;
public:
    twoStacks( int n = 100 ) : t1( -1 ), t2( n ) {}
    void push1( int x ) { if ( t1+1 < t2 ) a[ ++t1 ] = x; }
    void push2( int x ) { if ( t2-1 > t1 ) a[ --t2 ] = x; }
    int pop1() { return t1 >=  0 ? a[ t1-- ] : -1; }
    int pop2() { return t2 < 100 ? a[ t2++ ] : -1; }
};
