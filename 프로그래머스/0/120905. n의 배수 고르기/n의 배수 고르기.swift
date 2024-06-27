import Foundation

func solution(_ n:Int, _ numlist:[Int]) -> [Int] {
    
    return numlist.filter { $0.isMultiple(of: n) }
}