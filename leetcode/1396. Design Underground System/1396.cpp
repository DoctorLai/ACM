// https://helloacm.com/how-to-design-underground-system-using-several-hash-maps/
// https://leetcode.com/problems/design-underground-system/
// MEDIUM, HASH MAP

class UndergroundSystem {
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        timeIn[id] = t;
        placeIn[id] = stationName;
    }
    
    void checkOut(int id, string stationName, int t) {
        timeOut[id] = t;
        placeOut[id] = stationName;
        string startStation = placeIn[id];
        int c = count[placeIn[id]][stationName] ++;
        average[startStation][stationName] = (average[startStation][stationName] * c + timeOut[id] - timeIn[id]) / (c + 1);
    }
    
    double getAverageTime(string startStation, string endStation) {
        return average[startStation][endStation];
    }
    
private:
    unordered_map<int, int> timeIn;
    unordered_map<int, int> timeOut;
    unordered_map<int, string> placeIn;
    unordered_map<int, string> placeOut;
    unordered_map<string, unordered_map<string, int>> count;
    unordered_map<string, unordered_map<string, double>> average;
};
