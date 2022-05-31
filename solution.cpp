#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol217;
using namespace std;

/*takeaways
  - use a hash table to achieve O(n)
*/

bool Solution::containsDuplicate(vector<int> &nums)
{
  /*hash table*/
  auto s = unordered_set<int>();

  for (auto n : nums)
    /* already in the set */
    if (!s.insert(n).second)
      return true;

  return false;
}