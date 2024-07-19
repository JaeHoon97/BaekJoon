import Foundation

func solution(_ n:Int, _ k:Int) -> [Int] {

    
    return (1...n).filter { $0.isMultiple(of: k) }
}