import Foundation

func solution(_ n:Int) -> Int {
    
    let num = sqrt(Double(n))
    return num == Double(Int(num)) ? 1 : 2
}
