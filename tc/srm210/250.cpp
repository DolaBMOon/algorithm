#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;


class TitleString {
    public:
        string toFirstUpperCase(string title) {
            int sz = title.size();
            bool in_word = false;
            for(int i=0; i<sz; i++){
                if(title[i]==' ' && in_word==true){
                    in_word = false;
                }else if(title[i]!=' ' && in_word==false){
                    in_word = true;
                    title[i] = toupper(title[i]);
                }
            }
            return title;
        }
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, string p1) {
    cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
    cout << "]" << endl;
    TitleString *obj;
    string answer;
    obj = new TitleString();
    clock_t startTime = clock();
    answer = obj->toFirstUpperCase(p0);
    clock_t endTime = clock();
    delete obj;
    bool res;
    res = true;
    cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    if (hasAnswer) {
        cout << "Desired answer:" << endl;
        cout << "\t" << "\"" << p1 << "\"" << endl;
    }
    cout << "Your answer:" << endl;
    cout << "\t" << "\"" << answer << "\"" << endl;
    if (hasAnswer) {
        res = answer == p1;
    }
    if (!res) {
        cout << "DOESN'T MATCH!!!!" << endl;
    } else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
        cout << "FAIL the timeout" << endl;
        res = false;
    } else if (hasAnswer) {
        cout << "Match :-)" << endl;
    } else {
        cout << "OK, but is it right?" << endl;
    }
    cout << "" << endl;
    return res;
}
int main() {
    bool all_right;
    all_right = true;

    string p0;
    string p1;

    {
        // ----- test 0 -----
        p0 = "introduction to algorithms";
        p1 = "Introduction To Algorithms";
        all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 1 -----
        p0 = "more than  one   space    between     words";
        p1 = "More Than  One   Space    Between     Words";
        all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 2 -----
        p0 = "  lord of the rings   the fellowship of the ring  ";
        p1 = "  Lord Of The Rings   The Fellowship Of The Ring  ";
        all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 3 -----
        p0 = "  ";
        p1 = "  ";
        all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 4 -----
        p0 = "i";
        p1 = "I";
        all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 5 -----
        p0 = "the king and i";
        p1 = "The King And I";
        all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 6 -----
        p0 = "";
        p1 = "";
        all_right = KawigiEdit_RunTest(6, p0, true, p1) && all_right;
        // ------------------
    }

    if (all_right) {
        cout << "You're a stud (at least on the example cases)!" << endl;
    } else {
        cout << "Some of the test cases had errors." << endl;
    }
    return 0;
}
// END KAWIGIEDIT TESTING