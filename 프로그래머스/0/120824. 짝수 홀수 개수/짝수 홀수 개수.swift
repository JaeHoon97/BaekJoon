import Foundation

func solution(_ num_list:[Int]) -> [Int] {
    
    var result: [Int] = [0, 0]
    
    num_list.forEach { i in
        if(i % 2 == 0) {
            result[0] += 1
        } else {
            result[1] += 1
        }
    }
    
    
    return result
}