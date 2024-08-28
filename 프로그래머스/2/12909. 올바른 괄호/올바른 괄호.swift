import Foundation

func solution(_ s:String) -> Bool {
    var stack: [Character] = []
    
    for i in s.indices {
        if s[i] == ")" {
            guard !stack.isEmpty else { return false }
            stack.removeLast()
        } else {
            stack.append(s[i])
        }
    }
    
    if !stack.isEmpty { return false }
    
    return true
}