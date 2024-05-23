string convertToWords( long n ) {
    static const string a[]{
        "",        "one",     "two",       "three",    "four",
        "five",    "six",     "seven",     "eight",    "nine",
        "ten",     "eleven",  "twelve",    "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    static const string b[]{
        "",      "",      "twenty",  "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety" };
    const auto& part{ [ & ]( long i, const string& s ) -> string {
        if ( !i ) return {};
        if ( i < 20 ) return a[ i ] + ' ' + s + ' ';
        string t;
        if ( i > 9 ) t += b[ i / 10 ] + ' ';
        if ( i %= 10 ) t += a[ i ] + ' ';
        return t + s + ' '; }};
    return part( n / 10000000, "crore" )
         + part( n / 100000 % 100, "lakh" )
         + part( n / 1000 % 100, "thousand" )
         + part( n / 100 % 10, "hundred" )
         + ( n > 99 && n % 100 ? "and " : "" )
         + part( n % 100, "" );
}
