#include <iostream>
#include <unordered_map>
#include <string>

class Inventory {
private:
    std::unordered_map<std::string, int> items;

public:
    void AddItem(const std::string& item, int count = 1) {
        items[item] += count;
    }

    void RemoveItem(const std::string& item, int count = 1) {
        if (items.find(item) != items.end()) {
            items[item] -= count;
            if (items[item] <= 0) items.erase(item);
        }
    }

    void PrintInventory() const {
        std::cout << "Inventory:\n";
        for (const auto& pair : items) {
            std::cout << "- " << pair.first << ": " << pair.second << "\n";
        }
    }

    bool HasItem(const std::string& item) const {
        return items.find(item) != items.end();
    }
};

int main() {
    Inventory inv;
    inv.AddItem("Potion", 3);
    inv.AddItem("Sword", 1);
    inv.AddItem("Potion", 2);

    inv.PrintInventory();

    inv.RemoveItem("Potion", 4);
    inv.PrintInventory();

    std::cout << "Has Sword? " << (inv.HasItem("Sword") ? "Yes" : "No") << "\n";
}
