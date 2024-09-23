import Foundation

func solution(_ n:Int) -> [Int] {
    var result: Set<Int> = []
    var num = n
    
    while num != 1 {
        for i in 2...num {
            if num.isMultiple(of: i) {
                num /= i
                result.insert(i)
                break
            }
        }
    }
    
    return Array(result).sorted()
}