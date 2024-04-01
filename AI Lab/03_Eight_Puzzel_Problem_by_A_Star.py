import heapq

# Define the goal state for the 8-puzzle
goal_state = (1, 2, 3, 4, 5, 6, 7, 8, 0)

# Define the possible moves (up, down, left, right)
moves = [(0, -1), (0, 1), (-1, 0), (1, 0)]

def heuristic(state):
    # Manhattan distance heuristic
    distance = 0
    for i in range(9):
        if state[i] != 0:
            goal_position = goal_state.index(state[i])
            current_position = i
            distance += abs(current_position % 3 - goal_position % 3) + abs(current_position // 3 - goal_position // 3)
    return distance

def is_valid_move(x, y):
    return 0 <= x < 3 and 0 <= y < 3

def apply_move(state, move):
    empty_index = state.index(0)
    x, y = empty_index % 3, empty_index // 3
    new_x, new_y = x + move[0], y + move[1]

    if is_valid_move(new_x, new_y):
        new_empty_index = new_y * 3 + new_x
        new_state = list(state)
        new_state[empty_index], new_state[new_empty_index] = new_state[new_empty_index], new_state[empty_index]
        return tuple(new_state)
    else:
        return None

def a_star(initial_state):
    open_set = [(heuristic(initial_state), 0, initial_state)]
    closed_set = set()

    while open_set:
        _, g, current_state = heapq.heappop(open_set)

        if current_state == goal_state:
            return g

        if current_state in closed_set:
            continue

        closed_set.add(current_state)

        for move in moves:
            new_state = apply_move(current_state, move)
            if new_state:
                f = g + 1 + heuristic(new_state)
                heapq.heappush(open_set, (f, g + 1, new_state))

    return None

# Example usage:
initial_state = (1,2,3,0,4,5,6,7,8)
steps = a_star(initial_state)

if steps is not None:
    print(f"Minimum number of moves to reach the goal: {steps}")
else:
    print("No solution found.")