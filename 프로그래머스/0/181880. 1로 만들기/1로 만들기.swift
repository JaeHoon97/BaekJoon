import Foundation

func solution(_ num_list:[Int]) -> Int {
    
    var result = 0
    
    num_list.forEach {
        var num = $0
        
        while num != 1 {
            if num.isMultiple(of: 2) {
                num = num / 2
            } else {
                num = (num - 1) / 2
            }
            result += 1
        }
    }
    
    return result
}