package gotest

import "fmt"

type testOutOfBounds struct {
	a [2]int32
	d float64
}

func OutOfBounds(i int) float64{
	t := testOutOfBounds{}
	t.d = 3.14159546746
	t.a[i] = 6073743
	return t.d
}

func TestOutOfBounds() {
	fmt.Printf("test0 %v \n", OutOfBounds(0))
	fmt.Printf("test1 %v \n", OutOfBounds(1))
	fmt.Printf("test2 %v \n", OutOfBounds(2))
	fmt.Printf("test3 %v \n", OutOfBounds(3))
	fmt.Printf("test4 %v \n", OutOfBounds(4))
}