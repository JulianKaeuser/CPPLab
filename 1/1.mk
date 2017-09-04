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
Date                   :=04/09/17
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
CXXFLAGS :=  -g -Wall -std=c++11 $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
EXERCISES_ROOT:=/home/cppp/Repos/tud-cppp/exercises
Objects0=$(IntermediateDirectory)/PatternPrinter.cpp$(ObjectSuffix) $(IntermediateDirectory)/functions.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/CharGenerator.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vector3.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arrays.cpp$(ObjectSuffix) $(IntermediateDirectory)/ListItem.cpp$(ObjectSuffix) $(IntermediateDirectory)/List.cpp$(ObjectSuffix) $(IntermediateDirectory)/ListIterator.cpp$(ObjectSuffix) $(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) \
	



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

$(IntermediateDirectory)/Arrays.cpp$(ObjectSuffix): Arrays.cpp $(IntermediateDirectory)/Arrays.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/Arrays.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arrays.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arrays.cpp$(DependSuffix): Arrays.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arrays.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arrays.cpp$(DependSuffix) -MM Arrays.cpp

$(IntermediateDirectory)/Arrays.cpp$(PreprocessSuffix): Arrays.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arrays.cpp$(PreprocessSuffix) Arrays.cpp

$(IntermediateDirectory)/ListItem.cpp$(ObjectSuffix): ListItem.cpp $(IntermediateDirectory)/ListItem.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/ListItem.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ListItem.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ListItem.cpp$(DependSuffix): ListItem.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ListItem.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ListItem.cpp$(DependSuffix) -MM ListItem.cpp

$(IntermediateDirectory)/ListItem.cpp$(PreprocessSuffix): ListItem.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ListItem.cpp$(PreprocessSuffix) ListItem.cpp

$(IntermediateDirectory)/List.cpp$(ObjectSuffix): List.cpp $(IntermediateDirectory)/List.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/List.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/List.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/List.cpp$(DependSuffix): List.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/List.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/List.cpp$(DependSuffix) -MM List.cpp

$(IntermediateDirectory)/List.cpp$(PreprocessSuffix): List.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/List.cpp$(PreprocessSuffix) List.cpp

$(IntermediateDirectory)/ListIterator.cpp$(ObjectSuffix): ListIterator.cpp $(IntermediateDirectory)/ListIterator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/ListIterator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ListIterator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ListIterator.cpp$(DependSuffix): ListIterator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ListIterator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ListIterator.cpp$(DependSuffix) -MM ListIterator.cpp

$(IntermediateDirectory)/ListIterator.cpp$(PreprocessSuffix): ListIterator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ListIterator.cpp$(PreprocessSuffix) ListIterator.cpp

$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix): TreeNode.cpp $(IntermediateDirectory)/TreeNode.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/CPPLab/1/TreeNode.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TreeNode.cpp$(DependSuffix): TreeNode.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TreeNode.cpp$(DependSuffix) -MM TreeNode.cpp

$(IntermediateDirectory)/TreeNode.cpp$(PreprocessSuffix): TreeNode.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TreeNode.cpp$(PreprocessSuffix) TreeNode.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


