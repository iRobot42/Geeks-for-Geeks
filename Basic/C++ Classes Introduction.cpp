class CollegeCourse {
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorPoints;
public:
    void set_CourseId( const string& CID ) {
        courseID = CID;
    }
    void set_Grade( char g ) {
        grade = g;
    }
    void set_Credit( int cr ) {
        credits = cr;
    }
    int calculateGradePoints( char g ) {
        return gradePoints = 75 - toupper( g );
    }
    float calculateHonorPoints( int gp, int cr ) {
        return honorPoints = gp * cr;
    }
    void display() const {
        cout << gradePoints << ' ' << honorPoints << '\n';
    }
};
