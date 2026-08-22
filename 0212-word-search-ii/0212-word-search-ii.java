class Trie {
    String word;
    Trie chars[] = new Trie[26];
}

class Solution {
    int diff[] = {0,1,0,-1,0};
    void dfs(int R, int C, int r, int c, char board[][], boolean visited[][], Trie t, List<String> ans) {
        int ch_idx = board[r][c] - 'a';
        if(t.chars[ch_idx] == null) return;
        Trie cur = t.chars[ch_idx];
        if(cur.word != null) {
            ans.add(cur.word);
            cur.word = null;
        }
        visited[r][c] = true;
        for(int i = 0; i < 4; i++) {
            int ar = r + diff[i], ac = c + diff[i+1];
            if(ar >= 0 && ac >= 0 && ar < R && ac < C && !visited[ar][ac]) {
                dfs(R,C,ar,ac,board,visited,cur,ans);
            }
        }
        visited[r][c] = false;
    }

    void buildTrie(Trie p, String word, int idx) {
        int ch_idx = word.charAt(idx) - 'a';
        if(p.chars[ch_idx] == null) {
            p.chars[ch_idx] = new Trie();
        }
        Trie cur = p.chars[ch_idx];
        if(idx == word.length()-1) {
            p.chars[ch_idx].word = word;
            return;
        }
        buildTrie(cur, word, idx+1);
    }

    public List<String> findWords(char[][] board, String[] words) {
        Trie root = new Trie();
        for(String word : words) {
            buildTrie(root, word, 0);
        }
        List<String> ans = new ArrayList<>();
        int R = board.length, C = board[0].length;
        boolean[][] visited = new boolean[R][C];
        for(int r = 0; r < R; r++) {
            for(int c = 0; c < C; c++) {
                dfs(R,C,r,c,board,visited,root,ans);
            }
        }
        return ans;
    }
}