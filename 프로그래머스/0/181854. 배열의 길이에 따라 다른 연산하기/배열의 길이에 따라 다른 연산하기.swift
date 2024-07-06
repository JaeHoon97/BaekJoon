import Foundation

func solution(_ arr:[Int], _ n:Int) -> [Int] {
    
    var result = arr
    
    if(result.count.isMultiple(of: 2)) {
        for i in 0..<result.count {
            if(!i.isMultiple(of: 2)) { result[i] += n }
        }
    } else {
        for i in 0..<arr.count {
            if(i.isMultiple(of: 2)) { result[i] += n }
        }
    }
    
    
    return result
}