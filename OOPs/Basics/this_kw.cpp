#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    bool inStock;

public:
    Product(int productId, string productName, bool inStock) {
        this->productId = productId;
        this->productName = productName;
        this->inStock = inStock;
    }

    void displayProduct() {
        cout << "productId: " << productId << ", productName: " << productName << ", In Stock? " << (inStock ? "Yes" : "No") << endl;
    }
};


int main() {
    Product p1(244, "Tongs", true);

    p1.displayProduct();

    return 0;
}