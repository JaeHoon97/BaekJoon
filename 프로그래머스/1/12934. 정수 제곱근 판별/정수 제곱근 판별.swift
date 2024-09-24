import Foundation

func solution(_ n:Int64) -> Int64 {
    
    let squareRoot = Int(sqrt(Double(n)))
    
    if squareRoot * squareRoot == n {
        return Int64((squareRoot + 1) * (squareRoot + 1))
    } else {
        return -1
    }
}