

// Write your Student class here
class Student{
    public:
        int one,two,three,four,five;
    void input(){
        cin>>one>>two>>three>>four>>five;
    }
    int calculateTotalScore(){
        int sum = one+two+three+four+five;
        return sum;
    }

};


