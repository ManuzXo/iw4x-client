
# IW4x: Client

## How to compile

- Run `premake5 vs2015` or use the delivered `generate.bat`.
- Build via solution file in `build\iw4x.sln`. (You can use the `build.bat` script to do it quick and easy.)

## Premake arguments

| Argument | Description |
| ------------- | ------------- |
| `--copy-to=PATH` | Optional, copy the DLL to a custom folder after build, define the path here if wanted. |
| `--copy-pdb` | Copy debug information for binaries as well to the path given via --copy-to. |
| `--ac-debug-detections` | Log anticheat detections. |
| `--ac-debug-load-library` | Log libraries that get loaded. |
| `--force-unit-tests` | Always compile unit tests. |
| `--force-exception-handler` | Install custom unhandled exception handler even for Debug builds. |
| `--force-minidump-upload` | Upload minidumps even for Debug builds. |
| `--disable-bitmessage` | Disable use of BitMessage completely. |
| `--disable-node-log` | Disable debugging messages for Nodes in Debug builds. |
| `--disable-base128` | Disable debugging messages for Nodes in Debug builds. |
| `--no-new-structure` | Do not use new virtual path structure (separating headers and source files). |
