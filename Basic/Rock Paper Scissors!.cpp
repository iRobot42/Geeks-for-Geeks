string gameResult( string s ) {
    return s.front() == s.back() ? "DRAW" :
        s == "RS" || s == "PR" || s == "SP" ? "A" : "B";
} // T: 0.01+
