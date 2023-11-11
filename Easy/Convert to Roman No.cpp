#define V3

#ifdef V1
string convertToRoman( int n ) {
    const vector< pair< int, string >> r{
        { 1000, "M" }, { 900, "CM" },
        {  500, "D" }, { 400, "CD" },
        {  100, "C" }, {  90, "XC" },
        {   50, "L" }, {  40, "XL" },
        {   10, "X" }, {   9, "IX" },
        {    5, "V" }, {   4, "IV" },
        {    1, "I" }};
    string s;
    for ( const auto& p : r )
        while ( n >= p.first )
            n -= p.first,
            s += p.second;
    return s;
}

#elif defined( V2 )
string convertToRoman( int n ) {
    const vector< vector< string >> r{
        { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
        { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
        { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
        { "", "M", "MM", "MMM" }};
    return r[ 3 ][ n / 1000 ]
         + r[ 2 ][ n % 1000 / 100 ]
         + r[ 1 ][ n % 100 / 10 ]
         + r[ 0 ][ n % 10 ];
}

#elif defined( V3 )
string convertToRoman( int n ) {
    string s;
    switch ( n / 1000 ) {
        case 1: s += "M"; break;
        case 2: s += "MM"; break;
        case 3: s += "MMM"; break;
    } n %= 1000;
    switch ( n / 100 ) {
        case 1: s += "C"; break;
        case 2: s += "CC"; break;
        case 3: s += "CCC"; break;
        case 4: s += "CD"; break;
        case 5: s += "D"; break;
        case 6: s += "DC"; break;
        case 7: s += "DCC"; break;
        case 8: s += "DCCC"; break;
        case 9: s += "CM"; break;
    } n %= 100;
    switch ( n / 10 ) {
        case 1: s += "X"; break;
        case 2: s += "XX"; break;
        case 3: s += "XXX"; break;
        case 4: s += "XL"; break;
        case 5: s += "L"; break;
        case 6: s += "LX"; break;
        case 7: s += "LXX"; break;
        case 8: s += "LXXX"; break;
        case 9: s += "XC"; break;
    } n %= 10;
    switch ( n ) {
        case 1: s += "I"; break;
        case 2: s += "II"; break;
        case 3: s += "III"; break;
        case 4: s += "IV"; break;
        case 5: s += "V"; break;
        case 6: s += "VI"; break;
        case 7: s += "VII"; break;
        case 8: s += "VIII"; break;
        case 9: s += "IX"; break;
    }
    return s;
}

#endif
