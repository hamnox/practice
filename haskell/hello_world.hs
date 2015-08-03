module Main
    where

import System.IO

main = do
    hSetBuffering stdin LineBuffering
    putStrLn ('H':'e':'l':'l':'o':[] ++ " World\n")
    putStrLn "Please enter your name: "
    name <- getLine
    putStrLn ("\nOh, it's you.\nFuck you " ++ name ++ ".")

-- In order for a program to be an executable, it must have the module name
-- "Main" and must contain a function called main.
