#include "build/temp/_test_Triangle.c"
#include "src/Triangle.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_getTriangleType_given_4_4_3_expect_ISOCELES() {

 TriangleType type = getTriangleType(4, 4, 3);

 UnityAssertEqualNumber((UNITY_INT)((ISOCELES)), (UNITY_INT)((type)), (

((void *)0)

), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

}



void test_getTriangleType_given_3_4_4_expect_ISOCELES() {

 TriangleType type = getTriangleType(3, 4, 4);

 UnityAssertEqualNumber((UNITY_INT)((ISOCELES)), (UNITY_INT)((type)), (

((void *)0)

), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

}



void test_getTriangleType_given_5_3_5_expect_ISOCELES() {

 TriangleType type = getTriangleType(5, 3, 5);

 UnityAssertEqualNumber((UNITY_INT)((ISOCELES)), (UNITY_INT)((type)), (

((void *)0)

), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

}



void test_getTriangleType_given_2_2_2_expect_EQUILATERAL() {

 TriangleType type = getTriangleType(2, 2, 2);

 UnityAssertEqualNumber((UNITY_INT)((EQUILATERAL)), (UNITY_INT)((type)), (

((void *)0)

), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

}



void test_getTriangleType_given_1_2_3_expect_SCALENE() {

 TriangleType type = getTriangleType(1 ,2 ,3);

 UnityAssertEqualNumber((UNITY_INT)((SCALENE)), (UNITY_INT)((type)), (

((void *)0)

), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT);

}



void test_Side_given_3_3_3_expect_GOTRESULT() {

 TypeCheck side = checkZeroOrNegativeTriangle(3, 3, 3);

 UnityAssertEqualNumber((UNITY_INT)((GOTRESULT)), (UNITY_INT)((side)), (

((void *)0)

), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT);

}



void test_Side_given_0_2_2_expect_NORESULT() {

 TypeCheck side = checkZeroOrNegativeTriangle(0, 2, 2);

 UnityAssertEqualNumber((UNITY_INT)((NORESULT)), (UNITY_INT)((side)), (

((void *)0)

), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);

}



void test_Side_given_2_0_2_expect_NORESULT() {

 TriangleType side = checkZeroOrNegativeTriangle(2, 0, 2);

 UnityAssertEqualNumber((UNITY_INT)((NORESULT)), (UNITY_INT)((side)), (

((void *)0)

), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

}



void test_Side_given_2_2_0_expect_NORESULT() {

 TypeCheck side = checkZeroOrNegativeTriangle(2, 2, 0);

 UnityAssertEqualNumber((UNITY_INT)((NORESULT)), (UNITY_INT)((side)), (

((void *)0)

), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT);

}



void test_Side_given_minus2_2_0_expect_NORESULT() {

 TypeCheck side = checkZeroOrNegativeTriangle(-2, 2, 0);

 UnityAssertEqualNumber((UNITY_INT)((NORESULT)), (UNITY_INT)((side)), (

((void *)0)

), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_INT);

}



void test_getTriangleType_given_0_0_0_expect_UNKNOWN() {

 TriangleType type = getTriangleType(0 ,0 ,0);

 UnityAssertEqualNumber((UNITY_INT)((UNKNOWN)), (UNITY_INT)((type)), (

((void *)0)

), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_INT);

}
