import Foundation

func solution(_ num_list:[Int]) -> Int {
    
    var result = 0
    
    
    
    (num_list.reduce(1, *) < (num_list.reduce(0, +) * num_list.reduce(0, +))) ? (result = 1) : (result = 0)
    
    return result
}