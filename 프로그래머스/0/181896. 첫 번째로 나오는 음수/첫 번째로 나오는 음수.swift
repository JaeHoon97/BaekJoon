func solution(_ num_list:[Int]) -> Int {
    
    for (index, value) in num_list.enumerated() {
        if value < 0 { return index }
    }
        
    return -1
}