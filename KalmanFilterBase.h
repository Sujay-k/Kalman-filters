// Author: Sujaykumar Kulkarni <kulkarnisujayk@gmail.com>


Class KalmanFilterBase {

    public:
        virtual bool predict() = 0;
        virtual bool update() = 0;
    
    private:
        State S;
        Covariance P;
};