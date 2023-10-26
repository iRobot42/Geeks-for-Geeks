int is_weird( int n ) {
    constexpr int w[]{ 70, 836, 4030, 5830, 7192, 7912, 9272 };
    return find( w, w + 7, n ) != w + 7;
} // 0.01+
