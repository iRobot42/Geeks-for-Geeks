int closestNo( int x, int n ) {
    const int l{ x / n * n }, r{ l + n };
    return l && x - l < r - x ? l : r;
} // 0.01+
