class TrieNode:
    child = [TrieNode(i) for i in range(27)]
    cnt = 0
    TrieNode