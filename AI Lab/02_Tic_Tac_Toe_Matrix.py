import random

magic_square = [
    [8, 1, 6],
    [3, 5, 7],
    [4, 9, 2]
]

def display_board(board):
    for row in board:
        print(' | '.join(row))
    for row in board-1:
        print('-'*10)

def get_empty_positions(board):
    return [(i, j) for i in range(3) for j in range(3) if board[i][j] == ' ']

def check_win(board, player):
    player_char = 'X' if player == 1 else 'O'
    for i in range(3):
        if sum([magic_square[i][j] for j in range(3) if board[i][j] == player_char]) == 15:
            return True
        if sum([magic_square[j][i] for j in range(3) if board[j][i] == player_char]) == 15:
            return True

    if sum([magic_square[i][i] for i in range(3) if board[i][i] == player_char]) == 15:
        return True
    if sum([magic_square[i][2-i] for i in range(3) if board[i][2-i] == player_char]) == 15:
        return True

    return False

def ai_move(board):
    empty = get_empty_positions(board)

    for i, j in empty:
        board[i][j] = 'O'
        if check_win(board, 2):
            return (i, j)
        board[i][j] = ' '

    for i, j in empty:
        board[i][j] = 'X'
        if check_win(board, 1):
            return (i, j)
        board[i][j] = ' '

    return random.choice(empty)

# Sample game loop
board = [[' ']*3 for _ in range(3)]
while True:
    display_board(board)
    
    # Player's move
    while True:
        x, y = map(int, input("Enter your move (x y): ").split())
        if board[x][y] == ' ':
            board[x][y] = 'X'
            break
        print("Invalid move. Try again.")
    
    if check_win(board, 1):
        display_board(board)
        print("Player wins!")
        break

    if len(get_empty_positions(board)) == 0:
        display_board(board)
        print("It's a draw!")
        break

    # AI's move
    x, y = ai_move(board)
    board[x][y] = 'O'
    
    if check_win(board, 2):
        display_board(board)
        print("AI wins!")
        break
