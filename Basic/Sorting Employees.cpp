void sortRecords( node a[], int n ) {
    sort( a, a + n, []( node i, node j ){ return i.salary == j.salary ?
        i.name < j.name : i.salary < j.salary; } );
} // T: 0.85 - 0.90
