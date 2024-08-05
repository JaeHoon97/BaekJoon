import Foundation

func solution(_ id_pw:[String], _ db:[[String]]) -> String {
    
    var dic:[String: String] = [:]
    
    db.forEach {
        dic.updateValue($0[1], forKey: $0[0])
    }
    
    if !dic.keys.contains(id_pw[0]) {
        return "fail"
    } else {
        return dic[id_pw[0]] == id_pw[1] ? "login" : "wrong pw"
    }
}