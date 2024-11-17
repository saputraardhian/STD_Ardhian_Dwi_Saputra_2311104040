#include <iostream>
#include <limits>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

bool is_valid_bst(TreeNode* node, long min_val = std::numeric_limits<long>::min(), long max_val = std::numeric_limits<long>::max()) {
    if (!node) {
        return true; // Pohon kosong adalah BST yang valid
    }
    if (node->value <= min_val || node->value >= max_val) {
        return false; // Jika nilai node tidak berada dalam batas yang valid
    }
    return is_valid_bst(node->left, min_val, node->value) &&
           is_valid_bst(node->right, node->value, max_val);
}

// Fungsi untuk menguji apakah pohon memenuhi properti BST
void test_is_valid_bst() {
    // Pohon valid BST
    TreeNode* tree1 = new TreeNode(10);
    tree1->left = new TreeNode(5);
    tree1->right = new TreeNode(15);
    tree1->left->left = new TreeNode(3);
    tree1->left->right = new TreeNode(7);
    tree1->right->left = new TreeNode(12);
    tree1->right->right = new TreeNode(18);

    // Pohon tidak valid BST (karena 4 ada di kanan 5)
    TreeNode* tree2 = new TreeNode(10);
    tree2->left = new TreeNode(5);
    tree2->right = new TreeNode(15);
    tree2->left->left = new TreeNode(3);
    tree2->left->right = new TreeNode(4); // Ini yang membuatnya tidak valid
    tree2->right->left = new TreeNode(12);
    tree2->right->right = new TreeNode(18);

    // Pohon dengan satu node
    TreeNode* tree3 = new TreeNode(1);

    // Pohon kosong
    TreeNode* tree4 = nullptr;

    std::cout << "Tree1 (valid BST): " << (is_valid_bst(tree1) ? "True" : "False") << std::endl; // True
    std::cout << "Tree2 (invalid BST): " << (is_valid_bst(tree2) ? "True" : "False") << std::endl; // False
    std::cout << "Tree3 (single node, valid BST): " << (is_valid_bst(tree3) ? "True" : "False") << std::endl; // True
    std::cout << "Tree4 (empty tree, valid BST): " << (is_valid_bst(tree4) ? "True" : "False") << std::endl; // True

    // Hapus alokasi memori untuk mencegah kebocoran
    delete tree1->left->left;
    delete tree1->left->right;
    delete tree1->right->left;
    delete tree1->right->right;
    delete tree1->left;
    delete tree1->right;
    delete tree1;

    delete tree2->left->left;
    delete tree2->left->right;
    delete tree2->right->left;
    delete tree2->right->right;
    delete tree2->left;
    delete tree2->right;
    delete tree2;

    delete tree3;
}

int main() {
    test_is_valid_bst();
    return 0;
}
