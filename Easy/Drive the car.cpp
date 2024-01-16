long long required( long long a[], long long n, long long k ) {
    const auto d{ *max_element( a, a + n ) - k };
    return d > 0 ? d : -1;
}
