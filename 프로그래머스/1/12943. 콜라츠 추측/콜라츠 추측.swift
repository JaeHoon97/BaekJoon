func solution(_ num:Int) -> Int {
    var count = 0
    var input = num
    
    while input != 1 {
        if count == 500 { return -1 }
        input.isMultiple(of: 2) ? (input /= 2) : (input = (input * 3) + 1)
        count += 1
    }
    
    return count
}