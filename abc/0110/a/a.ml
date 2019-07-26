let f a b c = max (max (a * 10 + b + c) (b * 10 + a + c)) (c * 10 + a + b)
let () = Scanf.scanf "%d %d %d" f |> Printf.printf "%d\n"
