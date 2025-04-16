module utest

import std/core/list

pub effect test
  fun test-fail(expected : string, actual : string) : ()

pub effect test-case
  fun test-case-fail(expected : string, actual : string) : ()

pub effect test-suite
  fun test-suite-fail(suite-name : string, expected : string, actual : string) : ()

pub type test-failure<e, a>
  TestFailure { expected : e; actual : a; msg : string }

pub fun assert-eq(expected : a, actual : a, ?(==) : (a, a) -> bool, ?show : a -> string) : <test> ()
  if expected != actual then
    test-fail(expected.show(), actual.show())
  else
    ()

pub fun test(test-name : string, tests : () -> <test> ()) : <test-case> ()
  handle tests
    fun test-fail(expected, actual)
      test-case-fail(expected, actual)

pub fun suite(suite-name : string, test-cases : () -> <test-case> ()) : <test-suite> ()
  handle test-cases
    fun test-case-fail(expected, actual)
      test-suite-fail(suite-name, expected, actual)

pub fun run-utest(test-suites : () -> <test-suite> ()) 
  var failures := []
  handle test-suites
    fun test-suite-fail(suite-name, expected, actual)
      failures := failures.append([(suite-name, expected, actual)])
  
  println("Running test...\n")

  if !failures.is-empty() then
    failures.map(fn((suite-name, expected, actual))
      println("failed at " ++ suite-name.show())
      println("expected " ++ expected ++ ", but got " ++ actual)
    )
    ()
  else
    println("All Test Has Passed!")