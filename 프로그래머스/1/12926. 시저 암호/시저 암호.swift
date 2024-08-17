import Foundation

func solution(_ s:String, _ n:Int) -> String {
    
    let result = s.map { ch in
        let ascii = Int(UnicodeScalar(String(ch))!.value)
        
        guard ascii != 32 else { return " " }
        
        return ascii <= 90
        ? String(UnicodeScalar((ascii - 65 + n) % 26 + 65)!)
        : String(UnicodeScalar((ascii - 97 + n) % 26 + 97)!)
    }.joined()
    
    return result
}