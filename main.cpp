#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol217;

/*
Input: [1,2,3,1]
Output: true
]
*/

tuple<vector<int>, bool>
testFixture1()
{
  auto input = vector<int>{1, 2, 3, 1};
  return make_tuple(input, true);
}

/*
Input: [1,2,3,4]
Output: false
*/

tuple<vector<int>, bool>
testFixture2()
{
  auto input = vector<int>{1, 2, 3, 4};
  return make_tuple(input, false);
}

/*
Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
*/

tuple<vector<int>, bool>
testFixture3()
{
  auto input = vector<int>{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  return make_tuple(input, true);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.containsDuplicate(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.containsDuplicate(get<0>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.containsDuplicate(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}