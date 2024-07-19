import Foundation

func solution(_ num_list:[Int], _ n:Int) -> [Int] {
    
    var result: [Int] = []
    
    result.append(contentsOf: num_list[n...])
    result.append(contentsOf: num_list[..<n])
    
    return result
}