import Foundation

func solution(_ num_list:[Int]) -> [Int] {
    
    var result = num_list
    
    if(result.suffix(2).first! < result.suffix(2).last!) {
        result.append(result.suffix(2).last! - result.suffix(2).first!)
    } else {
        result.append(result.suffix(2).last! * 2)
    }
    
    return result
}