#include <stdio.h>

void solve_test_case(int case_num) {
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);

    int patterns[50][50] = {0};
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &patterns[i][j]);
        }
    }

    // Read visiting sequence
    int visits[50];
    for(int i = 0; i < Q; i++) {
        scanf("%d", &visits[i]);
    }

    // Initialize rooms (0 = light off)
    int rooms[50] = {0};

    // Process each visit
    for(int i = 0; i < Q; i++) {
        int friend_idx = visits[i] - 1; // Convert to 0-based index

        // Apply friend's pattern to rooms
        for(int room = 0; room < M; room++) {
            if(patterns[friend_idx][room] == 1) {
                // Toggle light (0->1 or 1->0)
                rooms[room] = !rooms[room];
            }
        }
    }

    // Print result
    printf("Case #%d:\n", case_num);
    for(int i = 0; i < M; i++) {
        printf("%s\n", rooms[i] ? "YES" : "NO");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for(int t = 1; t <= T; t++) {
        solve_test_case(t);
    }

    return 0;
}
