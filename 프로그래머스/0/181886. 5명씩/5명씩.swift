import Foundation

func solution(_ names:[String]) -> [String] {
    
    
    
    return names.enumerated().filter { $0.offset.isMultiple(of: 5) }.map { $0.element }
}