import Foundation

func solution(_ num_list:[Int]) -> Int {
    
    var evenSum = 0
    var oddSum = 0
    
    num_list.enumerated().forEach { ($0+1).isMultiple(of: 2) ? (evenSum += $1) : (oddSum += $1) }
    
    return (evenSum > oddSum) ? evenSum : oddSum
}
