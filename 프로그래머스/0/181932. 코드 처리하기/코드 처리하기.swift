import Foundation

func solution(_ code:String) -> String {
    var result = ""
    var mode = false
    
    code.enumerated().forEach {
        if $0.element == "1" {
            mode.toggle()
        } else {
            if (mode == false && $0.offset.isMultiple(of: 2)) || (mode == true && !$0.offset.isMultiple(of: 2))  {
                result += String($0.element)
            }
        }
    }
    return result.isEmpty ? "EMPTY" : result
}