let () = Scanf.scanf "%d" (fun a -> a / 100 + a / 10 mod 10 + a mod 10) |> Printf.printf "%d\n"
