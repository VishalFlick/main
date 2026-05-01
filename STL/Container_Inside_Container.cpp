// TOPIC: Container Inside Container

#include <iostream>
#include <vector>
using namespace std;

int main() {
  std::vector<vector<int>> vecTree;
  int edge, n1, n2;

  cin >> edge;
  vecTree.resize(edge);

  for (int i = 0; i < edge; ++i) {
    cin >> n1 >> n2;
    vecTree[n1].push_back(n2);
  }

  for (const auto &e1 : vecTree) {
    for (const auto &e2 : e1) {
      cout << e2 << " ";
    }
    cout << endl;
  }

  return 0;
}