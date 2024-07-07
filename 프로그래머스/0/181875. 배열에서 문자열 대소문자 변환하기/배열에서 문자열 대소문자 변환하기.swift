import Foundation

func solution(_ strArr:[String]) -> [String] {
    var result: [String] = []
    
    for (index, element) in strArr.enumerated() {
        index.isMultiple(of: 2) ? result.append(element.lowercased()) : result.append(element.uppercased())
    }
    
    return result
}