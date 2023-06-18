#define V1

#ifdef V1
string printNumber( string s, int n ) {
    return for_each( s.begin(), s.end(), []( char& c ){
        c = "22233344455566677778889999"[ c-97 ]; }), s;
} // T: 0.06+

#elif defined( V2 )
string printNumber( string s, int n ) {
    for ( auto& c : s ) c =
        c <= 'c' ? '2' : c <= 'f' ? '3' :
        c <= 'i' ? '4' : c <= 'l' ? '5' :
        c <= 'o' ? '6' : c <= 's' ? '7' :
        c <= 'v' ? '8' : '9';
    return s;
} // T: 0.08+

#endif
