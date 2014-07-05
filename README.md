Ackermann Test
==============

This simple program runs a short Ackermann test. More information about Ackermann's function [here](http://en.wikipedia.org/wiki/Ackermann_function). Inspired by [this](https://www.youtube.com/watch?v=i7sm9dzFtEI&list=UU9-y-6csu5WGm29I7JiwpnA) Computerphile video.

### Tested on

- Intel i7 2600 @ 3.40Ghz -> goes to ack(4,1) in 154s
- iPad Air (armv7) -> goes to ack(4,0) in 10s

### Notes

- For iOS users:

		If you want to compile it for your iDevice, you need to:
		- Jailbreak it
		- Install "iOS Toolchain" and "bc" from Cydia
		- Download and extract the iOS 7 SDK by coolstar (for iOS 7 only) from http://c1605162.r62.cf0.rackcdn.com/iPhoneOS7.0.sdk.tbz2
		- Compile the program via ssh "clang ack.c -o ack.o -isysroot /path/to/iPhoneOS7.0.sdk"
		- Change line 6 of ack.sh from "exec ./ack" to "exec ./ack.sh"
		- Start "ack.sh" from ssh/terminal emulator
		- ???
		- Enjoy!
		
- For *nix users:

		Well, simply run "make" and start "ack.sh"!
		
Please share your results, just-for-fun :-)