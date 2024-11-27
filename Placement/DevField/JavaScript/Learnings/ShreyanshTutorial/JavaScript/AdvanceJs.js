// Async JavaScript Or You can say Advance javascript
// 1). Sync and Async difference:
// Sync:- ak ke baad ak kaam(thred, Process, Command what you want to say) ho jab tak pehla kaam complete nahi hota tab tak dusra kaam start na ho
// Async:- saare kaam ak sath start kr do jiska ka answer aa jae uska jawaab de dena
// if you use setTimeout, setTimeInterval,promises,fetch,axios,XMLHttpRequest then that code is asynconous if you not use then you are writing syncronous code
// 2). Async js kya hai?:
//kai baar apka final code depended hota hai kisi or ke server par ,
// is case mein humein nahi pata hota ki answer uske server se kab laut kar aayega,
// to hum kya nahi kr skte is writing sync code , isse nipatne ke liye hum log async code likh dete hai,
// taaki blocking naa ho and jab bhi answer aaye humara answer ke respect mein chalne waala code chale jaaye
// Async ka  main motive hota hai ki un cased mein jinme hume pata nahi code ka answer kitani der mein aayega to jab
// bhi answer aa jaaye to uske respect mein particular  code chala dena
// Demo Async ka :
// setTimeout(callback,timeinms) callback always a function
// console.log("hello");sync code
// setTimeout(function () { console.log("late ho gya") }, 2000);Async code
// console.log("Akash");sync code
// callback fnc humesha async code mein answer aane par chalata hai
// 3). js is not asynchronous:
// js asunchronous nahi hota let's see how it is working
// firstly there is two callstacks one is for syncronous and second one is asyncronous for doing there backgoround process and wait
// then there is a EVENTLOOP(Most Asked Question) which can interact between first callstack and second call stack and see that process done or not in second callstack
// An event loop is something that pulls stuff out of the queue and places it onto the function execution stack whenever the function stack becomes empty.
// console.log("hey");
// console.log("hey2");
//setTimeout(function () { console.log("hey3") }, 0);
// console.log("hey4");
// it will output that hey,hey2,hey4,hey3 because hey,hey2,hey4 insert in main execution call stack and execute when callstack will empty then eventloop asked to second async process if it is complete then out that process;
//4).Async ki poori kahani jo ki ho gai above
// 5). single threading and multi threading :
// single thread mean one kaam at one time and multithreaded means many kaam at one time
// 6). callbacks:
// jab bhi tum fetch, axios, promises, setTimeout,setInterval jab use krte hai;
// jab async complete ho jaaye tab callback chalata hai
// callbacks=> functions
// callback humesha ek function hota hai, ye sirf tab chalta hai jab async code ka completion ho jaata hai
// async code likhane ke liye
// fetch
// XMLHttpRequest
// axios
// promises
// setTimeout
// setInterval
// inka answer chalane ke liye hum
// callbacks
// then catch
// async await ka use krte hai
//7).Promises:
// promises me hum code likhte hai jo future mein me kabhi chalega isme do state hoti hai resolve and reject
// if it in resolve state tab then chalega and if it in reject state tab catch chalega
// var ans = new Promise((res, rej) => {
//   var val = prompt("Enter the Number between 0 to 9");
//   if (val < 5) {
//     return res();
//   } else {
//     return rej();
//   }
// });
// 8). then and catch
// ans
//   .then(function () {
//     alert("resolve ho gya tha");
//   })
//   .catch(function () {
//     alert("resolve nahi hua");
//   });
// 9). async await
// koi bhi esa function jisme aap async code likhega, kyoki async code likhege, kyoki async code hai to aap promises ka istemaal kar sakte hai,
// jab uska answer aayega aapko then lagana padega , us then ko lagaane se bachne ke liye , aap async await ke istemaal kar sakte hai
// async function abcd() {
//   let raw = await fetch("https://randomuser.me/api/");
//   let ans = await raw.json();
//   console.log(ans);
// }
// abcd();
// dekho jab bhi koi code async hai to aapko uske liye wait karna padta hai kyoki humein nahi pata uska answer kab aayega
// 5use cases ekdum real world waale
// node mein jab db
// fetch
// settimeout
// setinterval
//[concept aside]
// concurrency and parallelism
// concurrency => js mein sync code and async code ek saath process ho raha tha ye hai concurrency
// parallelism = > focud jaada karta hai different processors and uske cores par kaam ko chalaane par
// throttling => kisi code ko control karna number of executions
// let date = new Date();
// console.log(date);