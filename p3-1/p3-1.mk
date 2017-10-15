##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=p3-1
ConfigurationName      :=Debug
WorkspacePath          :=/home/dushan/Workspace/cs-homework/oop-i/p3-1
ProjectPath            :=/home/dushan/Workspace/cs-homework/oop-i/p3-1
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Dushan Terzikj
Date                   :=12/10/17
CodeLitePath           :=/home/dushan/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="p3-1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/City.cpp$(ObjectSuffix) $(IntermediateDirectory)/testcity.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/City.cpp$(ObjectSuffix): City.cpp $(IntermediateDirectory)/City.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/dushan/Workspace/cs-homework/oop-i/p3-1/City.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/City.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/City.cpp$(DependSuffix): City.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/City.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/City.cpp$(DependSuffix) -MM City.cpp

$(IntermediateDirectory)/City.cpp$(PreprocessSuffix): City.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/City.cpp$(PreprocessSuffix) City.cpp

$(IntermediateDirectory)/testcity.cpp$(ObjectSuffix): testcity.cpp $(IntermediateDirectory)/testcity.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/dushan/Workspace/cs-homework/oop-i/p3-1/testcity.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/testcity.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/testcity.cpp$(DependSuffix): testcity.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/testcity.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/testcity.cpp$(DependSuffix) -MM testcity.cpp

$(IntermediateDirectory)/testcity.cpp$(PreprocessSuffix): testcity.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/testcity.cpp$(PreprocessSuffix) testcity.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


