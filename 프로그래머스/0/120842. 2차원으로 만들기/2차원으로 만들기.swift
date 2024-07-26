import Foundation

func solution(_ num_list:[Int], _ n:Int) -> [[Int]] {
    
    var result: [[Int]] = []
    var temp: [Int] = []
    
    for num in num_list {
        if temp.count != n {
            temp.append(num)
        } else {
            result.append(temp)
            temp = []
            temp.append(num)
        }
    }
    
    result.append(temp)
    
    return result
}

