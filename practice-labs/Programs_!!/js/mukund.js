// Type Annotations
var empId = 101;
var empName = "Amrita";
var salary = 25000;
var isPermanent = true;
console.log("Employee ID:", empId);
var emp1 = {
    id: 102,
    name: "mukund",
    salary: 30000,
    department: "IT"
};
function showEmployee(emp) {
    console.log("ID:", emp.id);
    console.log("Name:", emp.name);
}
showEmployee(emp1);
