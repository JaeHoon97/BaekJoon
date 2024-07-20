import Foundation

func solution(_ my_string:String, _ num1:Int, _ num2:Int) -> String {
    
    var result = ""
    let index1 = my_string.index(my_string.startIndex, offsetBy: num1)
    let index2 = my_string.index(my_string.startIndex, offsetBy: num2)
    var str1 = my_string[index1]
    var str2 = my_string[index2]

    
    for (index, offset) in my_string.enumerated() {
        if index == num1 { result.append(str2)  }
        else if index == num2 { result.append(str1)   }
        else { result.append(offset)  }
    }
    
    return result
}