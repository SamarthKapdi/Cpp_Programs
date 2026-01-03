// STL: examples for set, map, multimap, deque, stack, queue, priority_queue
#include <iostream>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>

int main()
{
    std::set<int> s = {3, 1, 2};
    for (int x : s)
        std::cout << x << ' ';
    std::cout << '\n';

    std::map<std::string, int> m;
    m["a"] = 1;
    m["b"] = 2;
    for (auto &kv : m)
        std::cout << kv.first << ":" << kv.second << '\n';

    std::deque<int> d = {1, 2, 3};
    d.push_front(0);
    std::cout << d.front() << ' ' << d.back() << '\n';

    std::stack<int> st;
    st.push(1);
    st.push(2);
    std::cout << st.top() << '\n';
    std::queue<int> q;
    q.push(10);
    q.push(20);
    std::cout << q.front() << '\n';

    std::priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(7);
    std::cout << pq.top() << '\n';
    return 0;
}
