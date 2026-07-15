func winningPlayer(x int, y int) string {
    chance := min(x,y/4)
    if chance%2 == 0 {
        return "Bob";
    }
    return "Alice";
}