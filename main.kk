import utest

fun main()
  val test-test = fn()
    suite("a suite") fn()
      test("a1 test") fn()
        assert-eq(1, 1)
    suite("b suite") fn()
      test("b1 test") fn()
        assert-eq(1, 2)

  run-utest(test-test)