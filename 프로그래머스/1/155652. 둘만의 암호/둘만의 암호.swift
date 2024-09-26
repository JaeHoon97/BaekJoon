import Foundation

func solution(_ s:String, _ skip:String, _ index:Int) -> String {
    var arr = Array(repeating: true, count: 26)
    var result = ""
    
    skip.forEach {
        let skipIndex: Int = Int(UnicodeScalar(String($0))!.value - 97)
        arr[skipIndex] = false
    }
    
    s.forEach {
        var count = 0
        var i: Int = Int(UnicodeScalar(String($0))!.value - 97)
        
        while count < index {
            i = (i + 1) % 26
            if arr[i] { count += 1 }
        }
        result.append(String(UnicodeScalar(i + 97)!))
    }
    
    return result
}