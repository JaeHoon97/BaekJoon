import Foundation

func solution(_ n:Int) -> [[Int]] {
    var result: [[Int]] = Array(repeating: Array(repeating: 0, count: n), count: n)
    var visited: [[Int]] = Array(repeating: Array(repeating: 0, count: n), count: n)
    var y = 0, x = 0 // 현재 좌표
    var status = 0 // 초기 값은 오른쪽 이동
    
    for num in 1...(n*n) {
        switch status {
        case 0: // right
            result[y][x] = num // 값 저장
            visited[y][x] = 1 // 방문 처리
            x += 1
            if x + 1 >= n || visited[y][x+1] == 1 {
                status = (status + 1) % 4
                continue
            }
        case 1: // down
            result[y][x] = num // 값 저장
            visited[y][x] = 1 // 방문 처리
            y += 1
            if y + 1 >= n || visited[y+1][x] == 1 {
                status = (status + 1) % 4
                continue
            }
        case 2: // left
            result[y][x] = num // 값 저장
            visited[y][x] = 1 // 방문 처리
            x -= 1
            if x - 1 < 0 || visited[y][x-1] == 1 {
                status = (status + 1) % 4
                continue
            }
        case 3: // up
            result[y][x] = num // 값 저장
            visited[y][x] = 1 // 방문 처리
            y -= 1
            if y - 1 < 0 || visited[y-1][x] == 1 {
                status = (status + 1) % 4
                continue
            }
        default:
            break
        }
    }

    return result
}