let rec calc x = if x mod 2 = 0 then 1 + calc(x / 2) else 0

let () =
	Scanf.scanf "%d" (fun n -> Array.init n (fun _ -> Scanf.scanf " %d" calc))
	|> Array.fold_left min 100 |> Printf.printf "%d\n"
