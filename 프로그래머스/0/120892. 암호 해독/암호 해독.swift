import Foundation

func solution(_ cipher:String, _ code:Int) -> String {
    
    var result = ""
    let index0 = cipher.startIndex
    
    for index in 0..<cipher.count {
        if((index + 1) % code == 0) {
            result.append(cipher[cipher.index(index0, offsetBy: index)])
        }
    }
    
    
    return result
}