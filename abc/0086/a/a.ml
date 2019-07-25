let x = Scanf.scanf "%d %d" (fun a b -> a * b)
let ans = if x mod 2 = 0 then "Even" else "Odd"
let () = print_endline ans
