function getValue(a) {
    switch (a) {
        case ")": return "(";
        case "}": return "{";
        case "]": return "[";
        default: return 0;
    }
}

var isValid = function(s) {
    let opening = "({[";
    let stack = [];
    let size = s.length;

    for (let i = 0; i < size; i++) {
        if (opening.indexOf(s[i]) !== -1) {
            stack.push(s[i]);
        } else {
            if (stack.length === 0) return false;
            let temp = stack.pop();
            if (getValue(s[i]) !== temp) {
                return false;
            }
        }
    }
    return stack.length === 0;
};