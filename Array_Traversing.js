//Traversing


//Traversing means visiting each element of an array.
//There are several ways to traverse an array.
//1. Using for loop
 let data = [9,45,2,3,1,7,8,6,4,5];
// for(let i = 0; i< data.length; i++){
//     console.log(data[i]);
//     document.write(`Array ${i} Element: ${data[i]} <br>`);
// }

// //2. Using forEach() method

// data.forEach(function(value, index){
//     console.log(value);
//     document.write(`Array ${index} Element: ${value} <br>`);
// }
// );

// //3. Using map() method
// let data1 = data.map(function(value){
//     return value;
// });
// console.log(data1);
// document.write(data1);

// //4. Using filter() method
// let data2 = data.filter(function(value){
//     return value > 5;
// });
// console.log(data2);
// document.write(data2);

// //5. Using reduce() method
// let data3 = data.reduce(function(accumulator, value){
//     return accumulator + value;
// });
// console.log(data3);
// document.write(data3);


function getElement(){
    let el = document.getElementById('input').value;
    if(el<data.length){
    alert(data[el]); 
    }else if(el.typeof !== Number){
        alert('Enter a number');
    }
    else{
        alert('Invalid Input');
    }
}