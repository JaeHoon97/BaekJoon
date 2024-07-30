import Foundation

func solution(_ array:[Int], _ n:Int) -> Int {
    
    var result = 0
    var length = 200
        
    array.sorted().forEach {
        let diff = abs($0 - n)
        if  diff < length {
            result = $0
            length = diff
        }
    }

    return result
}