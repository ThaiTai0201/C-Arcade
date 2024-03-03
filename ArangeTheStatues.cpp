#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minAddtionalStatues(const vector<int>& statues)
{
    if (statues.empty())
    {
        return 0;
    }
    int smallest = *min_element(statues.begin(), statues.end());
    int largest = *max_element(statues.begin(), statues.end());
    
    int sizeDifference = largest - smallest;

    int presentStatues = statues.size();
    int addtionalStatuesNeeded = sizeDifference - (presentStatues - 1);
    addtionalStatuesNeeded = max(addtionalStatuesNeeded, 0);
    return addtionalStatuesNeeded;
}

int main()
{
    vector<int> statues = {6, 2, 3, 8};

    int result = minAddtionalStatues(statues);

    cout << "The minimum number of additional statues needed is: " << result << endl;

    return 0;
}