import Foundation

func solution(_ s:String) -> String {
    var result = s
    
    let count = result.count.isMultiple(of: 2)
    
    while true {
        if (count && result.count == 2) || (!count && result.count == 1){
            break
        }
        result.removeFirst()
        result.removeLast()
    }
    return result
}