function add() {
    var a = Number(document.getElementById("num1").value);
    var b = Number(document.getElementById("num2").value);
    document.getElementById("result").innerHTML = "Result: " + (a + b);
}
function subtract() {
    var a = Number(document.getElementById("num1").value);
    var b = Number(document.getElementById("num2").value);
    document.getElementById("result").innerHTML = "Result: " + (a - b);
}
function multiply() {
    var a = Number(document.getElementById("num1").value);
    var b = Number(document.getElementById("num2").value);
    document.getElementById("result").innerHTML = "Result: " + (a * b);
}
function divide() {
    var a = Number(document.getElementById("num1").value);
    var b = Number(document.getElementById("num2").value);
    if (b === 0) {
        document.getElementById("result").innerHTML = "Cannot divide by zero";
    }
    else {
        document.getElementById("result").innerHTML = "Result: " + (a / b);
    }
}
