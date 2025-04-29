#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>

class DataProcessor {
private:
    std::vector<int> data;
    std::string name;

public:
    DataProcessor(const std::string& n) : name(n) {}
    
    void addData(int value) {
        data.push_back(value);
    }
    
    int sum() const {
        return std::accumulate(data.begin(), data.end(), 0);
    }
    
    void process() {
        std::sort(data.begin(), data.end());
        std::cout << "Data processed for: " << name << std::endl;
    }
    
    void display() const {
        std::cout << "Data: ";
        for (const auto& val : data) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    auto processor = std::make_unique<DataProcessor>("MainProcessor");
    
    processor->addData(10);
    processor->addData(5);
    processor->addData(20);
    
    processor->process();
    processor->display();
    
    std::cout << "Sum: " << processor->sum() << std::endl;
    
    return 0;
}
