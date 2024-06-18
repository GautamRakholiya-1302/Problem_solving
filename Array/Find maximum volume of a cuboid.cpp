class Solution {
  public:
    double maxVolume(double perimeter, double area) {
      double result =
            (pow((perimeter - (sqrt(pow(perimeter, 2) - (24 * area)))) / 12, 2) *
             ((perimeter / 4) -
              (2 * ((perimeter - (sqrt(pow(perimeter, 2) - (24 * area)))) / 12))));

        return result;  // code here
    }
};
