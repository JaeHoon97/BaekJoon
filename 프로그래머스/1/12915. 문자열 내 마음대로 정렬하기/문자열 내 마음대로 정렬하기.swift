import Foundation

func solution(_ strings:[String], _ n:Int) -> [String] {
    return strings.sorted { str1, str2 in
        let index1 = str1.index(str1.startIndex, offsetBy: n)
        let index2 = str2.index(str2.startIndex, offsetBy: n)
        return str1[index1] != str2[index2] ? str1[index1] < str2[index2] : str1 < str2
    }
}