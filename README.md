# MonOff
Turn off your display from Windows.

## Build Instructions

1. Install the [w64devkit](https://github.com/skeeto/w64devkit) anywhere on your computer
2. `cd` into wherever you cloned this project
3. Run `make`

## Why

I am always a fan of small executables, and I needed something to turn off the monitor on a laptop while it was performing a lengthy task. 

Some existing solutions I found require the .NET Framework 2.0 to be installed. While this would be acceptable in the Windows XP/7 era, .NET Framework 2.0 is no longer installed by default -- and I am not installing it just to turn off my monitor. Performing a disassembly with [dnSpy](https://github.com/dnSpy/dnSpy) showed me the API calls that were necessary to turn off the monitor. I cleaned up the code so it was less sloppy and the end result is this repository.

Since turning the monitor off is merely a couple of Win32 API calls, I thought it would be a good exercise in generating these small executables, as well as an excuse to try out the [w64devkit](https://github.com/skeeto/w64devkit).
