export BUILD_DIR=build/
export BINRARY_DIR=bin/
export EXECUTEABLE_NAME=game

if [ -d $BUILD_DIR ]; then rm -rf $BUILD_DIR; fi

mkdir $BUILD_DIR
cd $BUILD_DIR

cmake -G "Unix Makefiles" ..

if [ "$?" != "0" ]; then exit; fi

make

if [ "$?" != "0" ]; then exit; fi

./$BINRARY_DIR/$EXECUTEABLE_NAME