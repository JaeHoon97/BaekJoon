import Foundation

func solution(_ board:[[Int]]) -> Int {
    var result = board
    var points: [(Int, Int)] = []
    
    for y in result.indices {
        for x in result[y].indices {
            if result[y][x] == 1 { points.append((y, x))}
        }
    }
    
    points.forEach { y, x in
        for ny in y-1...y+1 {
            for nx in x-1...x+1 {
                guard 0 <= ny && ny < board.count else { continue }
                guard 0 <= nx && nx < board[0].count else { continue }
                guard (ny, nx) != (y, x) else { continue }
                guard board[ny][nx] == 0 else { continue }
                result[ny][nx] = 2
            }
        }
    }
    
    return result.flatMap { $0 }.filter{ $0 == 0 }.count
}