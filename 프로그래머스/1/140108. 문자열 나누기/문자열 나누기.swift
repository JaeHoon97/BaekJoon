import Foundation

func solution(_ s:String) -> Int {
    
    if s.count <= 2 { return 1 }
    
    var result = 0, same = 0, diff = 0
    var arr = Array(s)
    var first = arr[0]
    
    for element in arr {
        if same == diff { first = element }
        (first == element) ? (same += 1) : (diff += 1)
        if same == diff { result += 1 }
    }
    
    if same != diff { result += 1 }
    
    return result
}



