/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<pair<int, int>> times;
        for (auto i : intervals) {
            times.push_back({i.start, 1});
            times.push_back({i.end, -1});
        }

        sort(times.begin(), times.end());

        int maxCount = 0, count = 0;
        for (auto t : times) {
            count += t.second;
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};
