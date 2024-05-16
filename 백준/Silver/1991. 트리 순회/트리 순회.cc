#include <algorithm>
#include <iostream>
#include <cstring>
#include <map>
#include <vector>

using namespace std;

int N;
char root = 'A', node, leftNode, rightNode;
int visited[27];
map<char, pair<char, char>> m;

void preorder(const char& currentNode);
void inorder(const char& currentNode);
void postorder(const char& currentNode);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> node >> leftNode >> rightNode;
        m.insert({node, {leftNode, rightNode}});
    }

    preorder(root);
    memset(visited, 0, sizeof(visited));
    cout << '\n';
    inorder(root);
    memset(visited, 0, sizeof(visited));
    cout << '\n';
    postorder(root);
    memset(visited, 0, sizeof(visited));
    cout << '\n';

    return 0;
}

void preorder(const char& currentNode) {
    cout << currentNode;

    if (m[currentNode].first != '.') {
        preorder(m[currentNode].first);
    }

    if (m[currentNode].second != '.') {
        preorder(m[currentNode].second);
    }
}

void inorder(const char& currentNode) {
    if (m[currentNode].first != '.') {
        inorder(m[currentNode].first);
    }

    cout << currentNode;

    if (m[currentNode].second != '.') {
        inorder(m[currentNode].second);
    }
}

void postorder(const char& currentNode) {
    if (m[currentNode].first != '.') {
        postorder(m[currentNode].first);
    }

    if (m[currentNode].second != '.') {
        postorder(m[currentNode].second);
    }
    cout << currentNode;
}