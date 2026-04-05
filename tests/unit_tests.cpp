#include <iostream>
#include <cassert>
#include "math_operations.h"

// Test counters
int tests_passed = 0;
int tests_failed = 0;

void assert_equal(int actual, int expected, const char* test_name) {
    if (actual == expected) {
        std::cout << "✓ PASS: " << test_name << std::endl;
        tests_passed++;
    } else {
        std::cout << "✗ FAIL: " << test_name 
                  << " (expected: " << expected << ", got: " << actual << ")" << std::endl;
        tests_failed++;
    }
}

int main() {
    std::cout << "========== UNIT TESTS FOR MATH OPERATIONS ==========" << std::endl << std::endl;

    // Test add function
    std::cout << "--- Testing add() function ---" << std::endl;
    assert_equal(add(2, 3), 5, "add(2, 3) = 5");
    assert_equal(add(0, 0), 0, "add(0, 0) = 0");
    assert_equal(add(-5, 5), 0, "add(-5, 5) = 0");
    assert_equal(add(-3, -7), -10, "add(-3, -7) = -10");
    assert_equal(add(100, 200), 300, "add(100, 200) = 300");
    std::cout << std::endl;

    // Test subtract function
    std::cout << "--- Testing subtract() function ---" << std::endl;
    assert_equal(subtract(10, 3), 7, "subtract(10, 3) = 7");
    assert_equal(subtract(5, 5), 0, "subtract(5, 5) = 0");
    assert_equal(subtract(0, 5), -5, "subtract(0, 5) = -5");
    assert_equal(subtract(-3, -7), 4, "subtract(-3, -7) = 4");
    assert_equal(subtract(50, 20), 30, "subtract(50, 20) = 30");
    std::cout << std::endl;

    // Test multiply function
    std::cout << "--- Testing multiply() function ---" << std::endl;
    assert_equal(multiply(3, 4), 12, "multiply(3, 4) = 12");
    assert_equal(multiply(0, 5), 0, "multiply(0, 5) = 0");
    assert_equal(multiply(-3, 4), -12, "multiply(-3, 4) = -12");
    assert_equal(multiply(-5, -2), 10, "multiply(-5, -2) = 10");
    assert_equal(multiply(7, 8), 56, "multiply(7, 8) = 56");
    std::cout << std::endl;

    // Test divide function
    std::cout << "--- Testing divide() function ---" << std::endl;
    assert_equal(divide(20, 4), 5, "divide(20, 4) = 5");
    assert_equal(divide(0, 5), 0, "divide(0, 5) = 0");
    assert_equal(divide(-20, 4), -5, "divide(-20, 4) = -5");
    assert_equal(divide(20, -4), -5, "divide(20, -4) = -5");
    assert_equal(divide(17, 5), 3, "divide(17, 5) = 3 (integer division)");
    assert_equal(divide(10, 0), 0, "divide(10, 0) = 0 (division by zero)");
    std::cout << std::endl;

    // Summary
    std::cout << "========== TEST SUMMARY ==========" << std::endl;
    std::cout << "Tests passed: " << tests_passed << std::endl;
    std::cout << "Tests failed: " << tests_failed << std::endl;
    std::cout << "Total tests:  " << (tests_passed + tests_failed) << std::endl;
    
    if (tests_failed == 0) {
        std::cout << std::endl << "✓ All tests passed!" << std::endl;
        return 0;
    } else {
        std::cout << std::endl << "✗ Some tests failed!" << std::endl;
        return 1;
    }
}