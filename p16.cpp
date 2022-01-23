#include <iostream>
#include <vector>

/**
 * @brief 
 * 
    You run an e-commerce website and want to record the last N order ids in a log. Implement a data structure to accomplish this, with the following API:

    record(order_id): adds the order_id to the log
    get_last(i): gets the ith last element from the log. i is guaranteed to be smaller than or equal to N.

    You should be as efficient with time and space as possible.
 */

/**
 * 1. array (limited length)
 * space complexity <- O(N)
 * time complexity of record method <- O(N) (move data)
 * time coplexity of get_last method <- O(1)
 * 
 * 2. array (infinite length)
 * space complexity <- O(inf)
 * time complexity of record method <- O(1)
 * time complexity of get_last method <- O(1)
 * 
 * 3. list
 * space complexity <- O(N)
 * time complexity of record method <- O(1)
 * time coplexity of get_last method <- O(N)
 * 
 * 4. ring buffer
 * space complexity <- O(N)
 * time complexity of record method <- O(1)
 * time coplexity of get_last method <- O(1)
 */

struct RingBuffer {
    int _size;
    int _max;
    std::vector<int> _buf;
    int _idx;

    RingBuffer(int size) : _size(0), _max(size), _buf(std::vector<int>(this->_max)),_idx(0) {};

    void record(int order_id) {
        this->_buf[this->_idx] = order_id;
        this->_idx = (++this->_idx) % this->_max;
        if(this->_size < this->_max) {
            this->_size++;
        }
    }

    int get_last(int i) {
        if(!this->_size) {
            throw "Exception : cannot call get_last method when size is 0...";
        }

        int ith_last_idx = (this->_idx - 1- i);
        if (ith_last_idx < 0) {
            ith_last_idx += this->_max;
        }

        return this->_buf[ith_last_idx];
    }
};

void solve() {
    int N;
    std::cin >> N;

    RingBuffer rb(N);

    rb.record(1);
    rb.record(2);
    rb.record(3);
    rb.record(4);
    rb.record(5);

    std::cout << rb.get_last(0) << std::endl;
    std::cout << rb.get_last(1) << std::endl;
    std::cout << rb.get_last(2) << std::endl;
    std::cout << rb.get_last(3) << std::endl;
    std::cout << rb.get_last(4) << std::endl;

    rb.record(6);
    rb.record(7);

    std::cout << rb.get_last(0) << std::endl;
    std::cout << rb.get_last(1) << std::endl;
    std::cout << rb.get_last(2) << std::endl;
    std::cout << rb.get_last(3) << std::endl;
    std::cout << rb.get_last(4) << std::endl;
}

int main(void) {
    solve();
}