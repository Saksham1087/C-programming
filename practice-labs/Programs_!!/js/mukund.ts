// Type Annotations
let empId: number = 101;
let empName: string = "Amrita";
let salary: number = 25000;
let isPermanent: boolean = true;

console.log("Employee ID:", empId);

// Interface
interface Employee {
    id: number;
    name: string;
    salary: number;
    department: string;
}

let emp1: Employee = {
    id: 102,
    name: "mukund",
    salary: 30000,
    department: "IT"
};

function showEmployee(emp: Employee): void {
    console.log("ID:", emp.id);
    console.log("Name:", emp.name);
}

showEmployee(emp1);