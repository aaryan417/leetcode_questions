class Solution {
public:
    double angleClock(int hour, int minutes) {
       double minutes_angle=6* minutes;
       double hour_angle =30* hour + 0.5 * minutes;
       double deff_angle =abs(hour_angle - minutes_angle);
       return  min(deff_angle, 360-deff_angle);

    }
};