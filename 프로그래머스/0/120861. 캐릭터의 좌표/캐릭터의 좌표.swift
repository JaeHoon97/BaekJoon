import Foundation

func solution(_ keyinput:[String], _ board:[Int]) -> [Int] {
    
    var result = [0, 0]
    
    keyinput.forEach {
        if $0 == "up" {
            if result[1] < (board[1] / 2) { result[1] += 1 }
        } else if $0 == "down" {
            if -(board[1] / 2) < result[1] { result[1] -= 1 }
        } else if $0 == "right" {
            if result[0] < (board[0] / 2) { result[0] += 1 }
        } else {
            if -(board[0] / 2) < result[0] { result[0] -= 1 }
        }
    }
    return result
}