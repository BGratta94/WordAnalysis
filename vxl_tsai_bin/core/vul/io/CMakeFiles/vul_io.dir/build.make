# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Sean/Desktop/cs_project/vxl-tsai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin

# Include any dependencies generated for this target.
include core/vul/io/CMakeFiles/vul_io.dir/depend.make

# Include the progress variables for this target.
include core/vul/io/CMakeFiles/vul_io.dir/progress.make

# Include the compile flags for this target's objects.
include core/vul/io/CMakeFiles/vul_io.dir/flags.make

core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o: core/vul/io/CMakeFiles/vul_io.dir/flags.make
core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o: /Users/Sean/Desktop/cs_project/vxl-tsai/core/vul/io/vul_io_user_info.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o"
	cd /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/core/vul/io && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vul_io.dir/vul_io_user_info.o -c /Users/Sean/Desktop/cs_project/vxl-tsai/core/vul/io/vul_io_user_info.cxx

core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vul_io.dir/vul_io_user_info.i"
	cd /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/core/vul/io && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Sean/Desktop/cs_project/vxl-tsai/core/vul/io/vul_io_user_info.cxx > CMakeFiles/vul_io.dir/vul_io_user_info.i

core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vul_io.dir/vul_io_user_info.s"
	cd /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/core/vul/io && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Sean/Desktop/cs_project/vxl-tsai/core/vul/io/vul_io_user_info.cxx -o CMakeFiles/vul_io.dir/vul_io_user_info.s

core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o.requires:

.PHONY : core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o.requires

core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o.provides: core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o.requires
	$(MAKE) -f core/vul/io/CMakeFiles/vul_io.dir/build.make core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o.provides.build
.PHONY : core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o.provides

core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o.provides.build: core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o


# Object files for target vul_io
vul_io_OBJECTS = \
"CMakeFiles/vul_io.dir/vul_io_user_info.o"

# External object files for target vul_io
vul_io_EXTERNAL_OBJECTS =

lib/libvul_io.a: core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o
lib/libvul_io.a: core/vul/io/CMakeFiles/vul_io.dir/build.make
lib/libvul_io.a: core/vul/io/CMakeFiles/vul_io.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libvul_io.a"
	cd /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/core/vul/io && $(CMAKE_COMMAND) -P CMakeFiles/vul_io.dir/cmake_clean_target.cmake
	cd /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/core/vul/io && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vul_io.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/vul/io/CMakeFiles/vul_io.dir/build: lib/libvul_io.a

.PHONY : core/vul/io/CMakeFiles/vul_io.dir/build

core/vul/io/CMakeFiles/vul_io.dir/requires: core/vul/io/CMakeFiles/vul_io.dir/vul_io_user_info.o.requires

.PHONY : core/vul/io/CMakeFiles/vul_io.dir/requires

core/vul/io/CMakeFiles/vul_io.dir/clean:
	cd /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/core/vul/io && $(CMAKE_COMMAND) -P CMakeFiles/vul_io.dir/cmake_clean.cmake
.PHONY : core/vul/io/CMakeFiles/vul_io.dir/clean

core/vul/io/CMakeFiles/vul_io.dir/depend:
	cd /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Sean/Desktop/cs_project/vxl-tsai /Users/Sean/Desktop/cs_project/vxl-tsai/core/vul/io /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/core/vul/io /Users/Sean/Desktop/cs_project/vxl-tsai-codeblocks-bin/core/vul/io/CMakeFiles/vul_io.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/vul/io/CMakeFiles/vul_io.dir/depend

