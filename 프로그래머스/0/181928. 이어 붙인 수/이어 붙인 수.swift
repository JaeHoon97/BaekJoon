import Foundation

func solution(_ num_list:[Int]) -> Int {
    var odd = ""
    var even = ""
    
    num_list.forEach { num in
        if(num.isMultiple(of: 2)) {
            even.append(String(num))
        } else {
            odd.append(String(num))
        }
    }

    
    return (Int(even) ?? 0) + (Int(odd) ?? 0)
}

