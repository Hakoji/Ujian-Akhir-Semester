#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;


void profilediri() {
    cout << endl;
    cout << "=======================" << endl;
    cout << "Nama  : Ranggi Febrian" << endl; 
    cout << "NIM   : 231011402451" << endl;
    cout << "Kelas : 03TPLP029" << endl;
    cout << "=======================" << endl << endl;
}

// Node untuk pohon Huffman
struct Node {
    char ch;
    int freq;
    Node *left, *right;

    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

// Comparator untuk priority queue
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

// Fungsi untuk membangun pohon Huffman
Node* buildHuffmanTree(const string& text) {
    unordered_map<char, int> freqMap;
    for (char ch : text) {
        freqMap[ch]++;
    }

    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (auto& pair : freqMap) {
        pq.push(new Node(pair.first, pair.second));
    }

    while (pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();

        Node* parent = new Node('\0', left->freq + right->freq);
        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    return pq.top();
}

// Fungsi rekursif untuk menghasilkan kode Huffman
void encode(Node* root, const string& str, unordered_map<char, string>& huffmanCode) {
    if (!root) return;

    if (!root->left && !root->right) {
        huffmanCode[root->ch] = str;
    }

    encode(root->left, str + "0", huffmanCode);
    encode(root->right, str + "1", huffmanCode);
}

// Fungsi untuk decoding string Huffman
string decode(Node* root, const string& encodedStr) {
    string decoded = "";
    Node* current = root;
    for (char bit : encodedStr) {
        current = (bit == '0') ? current->left : current->right;

        if (!current->left && !current->right) {
            decoded += current->ch;
            current = root;
        }
    }

    return decoded;
}

int main() {
    profilediri();
    string text;
    cout << "Masukkan string untuk dikompresi: ";
    getline(cin, text);

    Node* root = buildHuffmanTree(text);

    unordered_map<char, string> huffmanCode;
    encode(root, "", huffmanCode);

    cout << "Kode Huffman:\n";
    for (auto& pair : huffmanCode) {
        cout << pair.first << " : " << pair.second << endl;
    }

    string encodedStr = "";
    for (char ch : text) {
        encodedStr += huffmanCode[ch];
    }

    cout << "\nString terkompresi: " << encodedStr << endl;

    string decodedStr = decode(root, encodedStr);
    cout << "\nString setelah decoding: " << decodedStr << endl;

    return 0;
}
