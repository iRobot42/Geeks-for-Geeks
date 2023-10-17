#define V2

#ifdef V1
string getLine( int a, int b, int c, int d ) {
    const int x{ d - b }, y{ a - c };
    return to_string( x ) + ( y >= 0 ? "x+" : "x" )
        + to_string( y ) + "y=" + to_string( a*x + b*y );
} // 0.01+

#elif defined( V2 )
string getLine( int a, int b, int c, int d ) {
    const int x{ d - b }, y{ a - c };
    ostringstream ss;
    ss << x << 'x' << showpos << y << "y=" << noshowpos << a*x + b*y;
    return ss.str();
} // 0.01+

#endif
