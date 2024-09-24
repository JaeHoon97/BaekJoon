import Foundation

func solution(_ s:String) -> Bool {
    var pCount = 0
    var yCount = 0
    
    s.lowercased().forEach {
        if $0 == "p" {
            pCount += 1
        } else if $0 == "y" {
            yCount += 1
        }
    }

    return pCount == yCount ? true : false
}
