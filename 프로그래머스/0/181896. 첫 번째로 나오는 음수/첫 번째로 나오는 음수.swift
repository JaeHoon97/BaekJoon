import Foundation

func solution(_ num_list:[Int]) -> Int {
    
    if num_list.isEmpty { return -1}
    
    for (index, value) in num_list.enumerated() {
        if value < 0 { return index }
    }
        
    return -1
}