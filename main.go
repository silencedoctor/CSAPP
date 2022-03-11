package main

import (
	"fmt"
	"time"
)

func main() {
	defer func() {
		err := recover()
		if err != nil {
			fmt.Sprintf("dd post panic -> , err=%v", err)
		}
	}()

	go func() {
		defer func() {
			err := recover()
			if err != nil {
				fmt.Sprintf("dd post panic -> , err=%v", err)
			}
		}()

		panic("")
	}()

	time.Sleep(time.Second)

	fmt.Printf("ok")
}