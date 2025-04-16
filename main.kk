import std/os/env

import utest
import parser

fun main()
  val args: list<string> = get-args()
  val tests = [parser-test]

  args.map fn(arg)
    match arg
      "-test" -> tests.map(run-utest)
  ()