import Foundation

func solution(_ dartResult:String) -> Int {
    var result: [Double] = []
    var buffer: String = ""
    
    for ch in dartResult {
        if Double(String(ch)) != nil { // 정수로 변환이 가능하다면
            buffer += String(ch)
            continue
        }
        
        if !buffer.isEmpty {
            result.append(Double(buffer)!)
            buffer = ""
        }
        
        switch ch {
        case "S":
            result[result.count - 1] = pow(result[result.count - 1], 1)
        case "D":
            result[result.count - 1] = pow(result[result.count - 1], 2)
        case "T":
            result[result.count - 1] = pow(result[result.count - 1], 3)
        case "*":
            if result.count <= 1 {
                result[result.count - 1] *= 2
            } else {
                result[result.count - 1] *= 2
                result[result.count - 2] *= 2
            }
        case "#":
            result[result.count - 1] = -result[result.count - 1]
        default:
            break
        }
    }
    
    return Int(result.reduce(0.0, +))
}