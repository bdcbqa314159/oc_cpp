#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

int main() {

  std::cout << "Working with the stl\n";

  std::cout << "======> vector\n";
  std::vector<int> tab(4, 4);
  for (int &x : tab)
    std::cout << x << ", ";
  std::cout << "\n";
  tab.pop_back();
  tab.push_back(6);
  for (int &x : tab)
    std::cout << x << ", ";
  std::cout << "\n";

  std::vector<int> a(3, 5), b(2, 9);
  std::cout << "a:\n";
  for (int &x : a)
    std::cout << x << ", ";
  std::cout << "\n";
  std::cout << "b:\n";
  for (int &x : b)
    std::cout << x << ", ";
  std::cout << "\n";

  a.swap(b);
  std::cout << "after swap ...\n";
  std::cout << "a:\n";
  for (int &x : a)
    std::cout << x << ", ";
  std::cout << "\n";
  std::cout << "b:\n";
  for (int &x : b)
    std::cout << x << ", ";
  std::cout << "\n";

  std::cout << "======> list\n";
  std::list<double> my_list;
  std::cout << "is my linked list empty? " << my_list.empty() << "\n";

  std::cout << "======> set\n";
  std::set<std::string> my_set;
  my_set.insert("name");
  my_set.insert("big");
  my_set.insert("person");
  for (const std::string &word : my_set)
    std::cout << word << ", ";
  std::cout << "\n";
  my_set.clear();
  std::cout << "is my set empty? " << my_set.empty() << "\n";

  std::cout << "======> deque\n";
  std::deque<int> my_deque(4, 5);
  my_deque.push_front(2);
  my_deque.push_back(8);

  for (auto x : my_deque)
    std::cout << x << ", ";
  std::cout << "\n";

  std::cout << "======> stack\n";
  std::stack<int> my_stack;
  my_stack.push(3);
  my_stack.push(4);
  my_stack.push(5);

  while (!my_stack.empty()) {
    std::cout << my_stack.top() << ", ";
    my_stack.pop();
  }
  std::cout << "\n";

  std::cout << "======> queue\n";
  std::queue<int> my_queue;
  my_queue.push(1);
  my_queue.push(2);
  my_queue.push(3);

  while (!my_queue.empty()) {
    std::cout << my_queue.front() << ", ";
    my_queue.pop();
  }

  std::cout << "\n";

  std::cout << "======> priority_queue\n";
  std::priority_queue<int> my_pqueue;
  my_pqueue.push(1);
  my_pqueue.push(2);
  my_pqueue.push(3);

  while (!my_pqueue.empty()) {
    std::cout << my_pqueue.top() << ", ";
    my_pqueue.pop();
  }

  std::cout << "\n";

  std::cout << "======> map\n";
  std::map<char, int> my_map;
  std::string word = "aiafhakhfawecnvklhvcxhoqwdfa";

  for (auto c : word)
    ++my_map[c];

  for (auto it = my_map.begin(); it != my_map.end(); ++it)
    std::cout << it->first << ": " << it->second << "\n";

  return 0;
}
