from collections import deque

def escape_the_prison(n, m, maze):
    # Cari posisi start ('S') dan exit ('E')
    start = None
    exit_pos = None

    for i in range(n):
        for j in range(m):
            if maze[i][j] == 'S':
                start = (i, j)
            elif maze[i][j] == 'E':
                exit_pos = (i, j)

    # Jika start atau exit tidak ditemukan, langsung return "NO"
    if not start or not exit_pos:
        return "NO"

    # Arah gerakan (atas, bawah, kiri, kanan)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    # BFS dengan deque
    queue = deque([start])
    visited = set([start])

    while queue:
        x, y = queue.popleft()

        if (x, y) == exit_pos:
            return "YES"

        # Periksa setiap arah
        for dx, dy in directions:
            nx, ny = x + dx, y + dy

            # Pastikan koordinat dalam batas, bukan tembok, dan belum dikunjungi
            if 0 <= nx < n and 0 <= ny < m and maze[nx][ny] != '#' and (nx, ny) not in visited:
                visited.add((nx, ny))
                queue.append((nx, ny))

    return "NO"

# Input
n, m = map(int, input("").split())
maze = [list(input().strip()) for _ in range(n)]

# Output hasil
print(escape_the_prison(n, m, maze))
