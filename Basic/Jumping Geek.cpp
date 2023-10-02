string jumpingGeek( int n ) {
    return !( n %= 6 ) || n == 1 || n == 3 ? "yes" : "no";
} // 0.01+
