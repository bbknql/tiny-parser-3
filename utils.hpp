#ifndef DATA_PROCESSOR_H
#define DATA_PROCESSOR_H

#include <vector>
#include <string>

class DataProcessor {
private:
    std::vector<int> data;
    std::string name;

public:
    DataProcessor(const std::string& n);
    void addData(int value);
    int sum() const;
    void process();
    void display() const;
};

#endif // DATA_PROCESSOR_H
