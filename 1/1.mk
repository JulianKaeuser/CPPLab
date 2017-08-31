##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=1
ConfigurationName      :=Debug
WorkspacePath          :=/home/cppp/CPPP-Workspace/CPPLab/1
ProjectPath            :=/home/cppp/CPPP-Workspace/CPPLab/1
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=
Date                   :=31/08/17
CodeLitePath           :=/home/cppp/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
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
ObjectsFileList        :="1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
EXERCISES_ROOT:=/home/cppp/Repos/tud-cppp/exercises
Objects0=$(IntermediateDirectory)/PatternPrinter.cpp$(ObjectSuffix) $(IntermediateDirectory)/functions.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/CharGenerator.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vector3.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/PatternPrinter.cpp$(ObjectSuffix): PatternPrinter.cpp $(IntermediateDirectory)/PatternPrinter.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/PatternPrinter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PatternPrinter.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PatternPrinter.cpp$(DependSuffix): PatternPrinter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PatternPrinter.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PatternPrinter.cpp$(DependSuffix) -MM PatternPrinter.cpp

$(IntermediateDirectory)/PatternPrinter.cpp$(PreprocessSuffix): PatternPrinter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PatternPrinter.cpp$(PreprocessSuffix) PatternPrinter.cpp

$(IntermediateDirectory)/functions.cpp$(ObjectSuffix): functions.cpp $(IntermediateDirectory)/functions.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/functions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/functions.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/functions.cpp$(DependSuffix): functions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/functions.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/functions.cpp$(DependSuffix) -MM functions.cpp

$(IntermediateDirectory)/functions.cpp$(PreprocessSuffix): functions.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/functions.cpp$(PreprocessSuffix) functions.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/CharGenerator.cpp$(ObjectSuffix): CharGenerator.cpp $(IntermediateDirectory)/CharGenerator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/CharGenerator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CharGenerator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CharGenerator.cpp$(DependSuffix): CharGenerator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CharGenerator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CharGenerator.cpp$(DependSuffix) -MM CharGenerator.cpp

$(IntermediateDirectory)/CharGenerator.cpp$(PreprocessSuffix): CharGenerator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CharGenerator.cpp$(PreprocessSuffix) CharGenerator.cpp

$(IntermediateDirectory)/Vector3.cpp$(ObjectSuffix): Vector3.cpp $(IntermediateDirectory)/Vector3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/Vector3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vector3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vector3.cpp$(DependSuffix): Vector3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Vector3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Vector3.cpp$(DependSuffix) -MM Vector3.cpp

$(IntermediateDirectory)/Vector3.cpp$(PreprocessSuffix): Vector3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vector3.cpp$(PreprocessSuffix) Vector3.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/

