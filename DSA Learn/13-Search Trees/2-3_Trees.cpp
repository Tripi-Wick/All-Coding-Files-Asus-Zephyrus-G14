#include <iostream>
using namespace std;

class node{
    public:
        node* left_leaf;
        int key_1;
        node* middle_leaf;
        int key_2;
        node* right_leaf;

        node(){
            left_leaf = right_leaf = middle_leaf = nullptr;
            key_1 = key_2 = int(NULL);
        }
        node(int data){
            left_leaf = right_leaf = middle_leaf = nullptr;
        }
};
class tt_tree{
    private:
        node* root;
    public:
};
int main()
{
    
    return 0;
}