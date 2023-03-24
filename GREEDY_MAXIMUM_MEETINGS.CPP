https://www.codingninjas.com/codestudio/problems/maximum-meetings_1062658?leftPanelTab=0
#include <bits/stdc++.h> 
#include<algorithm>
struct meet {
    int meetingID;
    int startTime;
    int endTime;
};
bool compare(struct meet a, struct meet b) {
    if (a.endTime == b.endTime) {
        return a.meetingID < b.meetingID;
    }
    else{
        return a.endTime < b.endTime;
    }
    //sorted based on endtime.
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int n = start.size();
    // Creating meeting array of size N.
    struct meet meeting[n];
    for (int i = 0; i < n; i++) {
        meeting[i].meetingID = i + 1;
        meeting[i].startTime = start[i];
        meeting[i].endTime = end[i];
    }
    // Sorting the meeting array in increasing order of end time using customized comparator.
    sort(meeting, meeting + n, compare);
    vector<int> result;
    // Taking the first meeting of sorted array as our first meeting.
    result.push_back(meeting[0].meetingID);
    int currentTime = meeting[0].endTime;
    for (int i = 1; i < n; i++) {
        // If startTime of current meeting is greater than our currentTime.
        // Then we will perform this meeting and update currentTime with endTime of the meeting.
        if (meeting[i].startTime > currentTime) {
            result.push_back(meeting[i].meetingID);
            currentTime = meeting[i].endTime;
        }
    }

    return result;
}
/*
Using Greedy Approach
The idea is to create a struct array MEETING of size N, where each entry of MEETING will have three elements: meeting number, the start time of the meeting, the end time of the meeting.
Sort the MEETING array in increasing order of end time.
Select the first meeting of the sorted MEETING as your first meeting and add the meeting number in your result vector, also maintain one variable, say currentTime, to maintain the current allotted time. Initialize currentTime with end time of first meeting picked.
Now iterate through the rest of the MEETING array from left to right and for each MEETING[i], check if it is possible to organize that meeting or not. If the start time of the MEETING[i] is greater than the currentTime, means it is possible to organize MEETING[i], add the meeting number of MEETING[i] in your result vector and update currentTime with end time of MEETING[i].
Return the result vector.
Time Complexity
O(N * logN), where N is the number of meetings.
In the worst case, we are traversing the input arrays once which takes O(N) time and we are sorting the MEETING array of size N which takes O(N * log(N)) time. Thus the final time complexity is O(N) + O(N * log(N)) = O(N * log(N)).
Space Complexity
O(N), where N is the number of meetings.
In the worst case, we are creating a MEETING array of size N.
*/
