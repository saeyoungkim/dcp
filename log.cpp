#include <string>
#include <iostream>

// circular array

class Log {
public:
    Log() = default;

    static Log& createLog(unsigned long id){
        return *(new Log(id));
    }

    std::string to_string(){
        return "[ " + _time + " ] " + std::to_string(_id);
    }
private:
    Log(unsigned long id) : _time(__TIME__), _id(id) {};

    std::string _time;
    unsigned long _id;
};

class Logs {
public:
    Logs(int capacity) : _capacity(capacity) {
        _logs = new Log[_capacity];
    }
    ~Logs() {
        delete[] _logs;
    }
    void record(unsigned long id) {
        // sizeがcapacityと同じであれば
        if(_size == _capacity){
            _logs[_idx] = Log::createLog(id);
            _idx = (_idx + 1) % _capacity;
        }
        else if(_size < _capacity) _logs[(_idx + (++_size) - 1) % _capacity] = Log::createLog(id);
    }
    Log get_last(int i) {
        if(i < 1 || i > _size) std::exit(1);

        return _logs[(_idx + _size - i) % _capacity];
    }
    void print_all_logs() {
        for(int i = _idx, j = 0; j < _size; i = (i + 1) % _capacity, ++j){
            std::cout << _logs[i].to_string() << std::endl;
        }
    }
private:
    int _idx = 0;
    const int _capacity;
    int _size = 0;
    Log* _logs = nullptr;
};

int main(void){
    Logs logs(5);
    logs.record(1512518231);
    logs.record(544251523);
    logs.record(1623423);
    logs.record(85239402);
    logs.record(2235232);
    logs.record(15293812);

    logs.print_all_logs();


    std::cout << logs.get_last(1).to_string() << std::endl;
}