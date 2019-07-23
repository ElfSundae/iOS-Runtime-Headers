/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SASamplePrinter : NSObject {
    NSMutableDictionary * _binaryImagesHit;
    unsigned long long  _endSampleIndex;
    SATimestamp * _endTime;
    NSString * _headerNote;
    NSUUID * _incidentUUID;
    NSMutableDictionary * _indexForImageUUID;
    double  _minimumSamplingInterval;
    unsigned long long  _numSamples;
    SASamplePrintOptions * _options;
    SASampleStore * _sampleStore;
    unsigned long long  _startSampleIndex;
    SATimestamp * _startTime;
    SAOutputStream * _stream;
    NSMutableArray * _timeJumps;
}

@property (retain) SATimestamp *endTime;
@property (copy) NSString *headerNote;
@property (copy) NSUUID *incidentUUID;
@property (copy) SASamplePrintOptions *options;
@property (retain) SASampleStore *sampleStore;
@property (retain) SATimestamp *startTime;

- (void).cxx_destruct;
- (void)addHeaderForDispatchQueue:(id)arg1 toStackString:(id)arg2 taskSampleCount:(unsigned long long)arg3 nameChanges:(bool*)arg4 threadChanges:(bool*)arg5 priorityChanges:(bool*)arg6;
- (void)addHeaderForThread:(id)arg1 andThreadStateIndexes:(id)arg2 toStackString:(id)arg3 taskSampleCount:(unsigned long long)arg4 nameChanges:(bool*)arg5 dispatchQueueChanges:(bool*)arg6 priorityChanges:(bool*)arg7;
- (void)addStack:(id)arg1 toStream:(id)arg2 sampleCount:(unsigned long long)arg3 binariesToDisplay:(id)arg4;
- (void)addStack:(id)arg1 toStream:(id)arg2 sampleCount:(unsigned long long)arg3 binariesToDisplay:(id)arg4 primaryMicrostackshotState:(unsigned int)arg5;
- (void)addStack:(id)arg1 toStream:(id)arg2 sampleCount:(unsigned long long)arg3 binariesToDisplay:(id)arg4 primaryMicrostackshotState:(unsigned int)arg5 onlyHeaviestStack:(bool)arg6;
- (void)addStackForDispatchQueue:(id)arg1 orThread:(id)arg2 andThreadStateIndexes:(id)arg3 task:(id)arg4 toRootFrames:(id)arg5 nameChanges:(bool)arg6 dispatchQueueChanges:(bool)arg7 threadChanges:(bool)arg8 priorityChanges:(bool)arg9;
- (void)addStackForDispatchQueue:(id)arg1 orThread:(id)arg2 andThreadStateIndexes:(id)arg3 task:(id)arg4 toRootFrames:(id)arg5 nameChanges:(bool)arg6 dispatchQueueChanges:(bool)arg7 threadChanges:(bool)arg8 priorityChanges:(bool)arg9 microstackshotSummary:(id)arg10;
- (void)addStackForDispatchQueue:(id)arg1 orThread:(id)arg2 andThreadStateIndexes:(id)arg3 task:(id)arg4 toRootFrames:(id)arg5 nameChanges:(bool)arg6 dispatchQueueChanges:(bool)arg7 threadChanges:(bool)arg8 priorityChanges:(bool)arg9 microstackshotSummary:(id)arg10 onlyHeaviestStack:(bool)arg11;
- (void)addStackHeaderToStream:(id)arg1 threadId:(unsigned long long)arg2 dispatchQueueId:(unsigned long long)arg3 isIdleWorkQueue:(bool)arg4 threadName:(id)arg5 threadNameChanges:(bool)arg6 count:(unsigned long long)arg7 firstSampleIndex:(unsigned long long)arg8 lastSampleIndex:(unsigned long long)arg9 timeWhenFirstAttemptedToSample:(id)arg10 minPriority:(int)arg11 maxPriority:(int)arg12 minBasePriority:(int)arg13 maxBasePriority:(int)arg14 cpuTimeNs:(unsigned long long)arg15 cpuInstructions:(unsigned long long)arg16 cpuCycles:(unsigned long long)arg17 isProcessorIdleThread:(bool)arg18 isGlobalForcedIdleThread:(bool)arg19;
- (void)addTaskHeaderToStream:(id)arg1 displayName:(id)arg2 mainBinaryUUID:(id)arg3 mainBinaryPath:(id)arg4 uid:(unsigned int)arg5 architectureString:(id)arg6 version:(id)arg7 parentName:(id)arg8 responsibleName:(id)arg9 taskExecedFromName:(id)arg10 taskExecedToName:(id)arg11 startTimestamp:(id)arg12 endTimestamp:(id)arg13 startSampleIndex:(unsigned long long)arg14 endSampleIndex:(unsigned long long)arg15 numSamples:(unsigned long long)arg16 totalNumSamples:(unsigned long long)arg17 numSamplesSuspended:(unsigned long long)arg18 numSamplesTerminated:(unsigned long long)arg19 startingTaskSize:(unsigned long long)arg20 endingTaskSize:(unsigned long long)arg21 maxTaskSize:(unsigned long long)arg22 startSampleIndexOfMaxTaskSize:(unsigned long long)arg23 endSampleIndexOfMaxTaskSize:(unsigned long long)arg24 numPageins:(unsigned int)arg25 cpuNanoseconds:(unsigned long long)arg26 cpuInstructions:(unsigned long long)arg27 cpuCycles:(unsigned long long)arg28 usesSuddenTermination:(bool)arg29 allowsIdleExit:(bool)arg30 isTranslocated:(bool)arg31 isUnresponsive:(bool)arg32 timeOfLastResponse:(double)arg33 numIdleWorkQueueThreads:(unsigned long long)arg34 wqExceededConstrainedThreadLimit:(bool)arg35 wqExceededTotalThreadLimit:(bool)arg36;
- (id)binaryImagesHitByTask:(id)arg1;
- (void)calculateTimeJumps;
- (bool)checkForBadOptions;
- (bool)complainAboutSamplingGapBetweenStartTimestamp:(id)arg1 endTimestamp:(id)arg2;
- (id)copyDescriptionForFrame:(id)arg1 binariesToDisplay:(id)arg2 extraBinariesToDisplay:(id)arg3;
- (id)copySymbolStringForInstruction:(id)arg1 symbolicationOffByOne:(bool)arg2;
- (id)copySystemstatsDescriptionForFrame:(id)arg1;
- (id)displayNameForPid:(int)arg1 threadId:(unsigned long long)arg2 timestamp:(id)arg3;
- (id)displayNameForTask:(id)arg1;
- (id)displayNameForTask:(id)arg1 includePid:(bool)arg2;
- (unsigned long long)displayTimeIndexForSampleIndex:(unsigned long long)arg1;
- (unsigned long long)displayedLoadAddressForBinary:(id)arg1 desiredLoadAddress:(unsigned long long)arg2 isInKernelAddressSpace:(bool)arg3 binariesToDisplay:(id)arg4 extraBinariesToDisplay:(id)arg5;
- (unsigned long long)displayedLoadAddressForBinaryLoadInfo:(id)arg1 binariesToDisplay:(id)arg2 extraBinariesToDisplay:(id)arg3;
- (id)endTime;
- (void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)filterToMachAbsTimeRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)filterToMachContTimeRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)filterToTimestampRangeStart:(id)arg1 end:(id)arg2;
- (void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2;
- (bool)frame:(id)arg1 matchesFrame:(id)arg2;
- (bool)hasTargetProcess;
- (bool)hasTimeIndexes;
- (id)headerNote;
- (id)incidentUUID;
- (id)initWithSampleStore:(id)arg1;
- (void)iterateDispatchQueue:(id)arg1 orThread:(id)arg2 threadStateIndexes:(id)arg3 startingAtIndex:(unsigned long long)arg4 endingAfterTimestamp:(id)arg5 task:(id)arg6 stopAtTimeJumps:(bool)arg7 callback:(id /* block */)arg8;
- (id)keyForTask:(id)arg1 isTargetTask:(bool)arg2;
- (id)options;
- (void)preprocess;
- (void)preprocessTask:(id)arg1;
- (void)printBinaryImages:(id)arg1;
- (void)printBinaryImagesForTask:(id)arg1;
- (bool)printByThreadForDispatchQueue:(id)arg1;
- (void)printFooter;
- (void)printHIDEvent:(id)arg1;
- (void)printHIDEvents;
- (void)printHeader;
- (void)printMultipleTasks:(id)arg1;
- (void)printReport;
- (void)printSingleStackForTask:(id)arg1 taskSampleCount:(unsigned long long)arg2;
- (void)printSingleStackForTasks:(id)arg1 limitToThreadIds:(id)arg2 sampleCount:(unsigned long long)arg3;
- (void)printStacksForTask:(id)arg1 taskSampleCount:(unsigned long long)arg2;
- (void)printSystemStatsStyleBinaryImages;
- (void)printTask:(id)arg1;
- (void)printTask:(id)arg1 specialThreadId:(unsigned long long)arg2 omitSpecialThreadId:(bool)arg3;
- (long long)printTaskHeaderForMultipleTasks:(id)arg1;
- (long long)printTaskHeaderForTask:(id)arg1;
- (long long)printTaskHeaderForTask:(id)arg1 specialThreadId:(unsigned long long)arg2 omitSpecialThreadId:(bool)arg3;
- (void)printToMutableData:(id)arg1;
- (void)printToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (unsigned long long)sampleIndexForDisplayTimeIndex:(unsigned long long)arg1;
- (double)sampleInterval;
- (id)sampleStore;
- (void)setEndTime:(id)arg1;
- (void)setHeaderNote:(id)arg1;
- (void)setIncidentUUID:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSampleStore:(id)arg1;
- (void)setStartTime:(id)arg1;
- (bool)shouldPrintTimeOutsideSamplingRange:(double)arg1;
- (id)stackStringForDispatchQueue:(id)arg1 task:(id)arg2 taskSampleCount:(unsigned long long)arg3;
- (id)stackStringForThread:(id)arg1 threadStateIndexes:(id)arg2 task:(id)arg3 taskSampleCount:(unsigned long long)arg4;
- (id)stackStringsForThread:(id)arg1 task:(id)arg2 taskSampleCount:(unsigned long long)arg3;
- (id)startTime;
- (id)stateChangeStringForThreadState:(id)arg1 serialDispatchQueue:(id)arg2 thread:(id)arg3 threadStateIndexes:(id)arg4 taskState:(id)arg5 task:(id)arg6 iteratorIndex:(unsigned long long)arg7 missingStateIsInAnotherStack:(bool)arg8 sampleTimestamp:(id)arg9 previousSampleTimestamp:(id)arg10 previousTaskState:(id)arg11 previousThread:(id)arg12 previousThreadState:(id)arg13 dispatchQueueChanges:(bool)arg14 priorityChanges:(bool)arg15 nameChanges:(bool)arg16 threadChanges:(bool)arg17 isTimeJump:(bool)arg18;
- (id)timeIndexDescriptionForStartSampleIndex:(unsigned long long)arg1 endSampleIndex:(unsigned long long)arg2 formattedToLength:(int)arg3;
- (id)timeIndexDescriptionForStartTime:(id)arg1 endTime:(id)arg2 formattedToLength:(int)arg3;
- (id)timeIndexDescriptionForTimestamp:(id)arg1;
- (double)timeSpentAsleepBetweenStartTimestamp:(id)arg1 endTimestamp:(id)arg2;
- (id)timeWhenFirstAttemptedToSampleThread:(id)arg1;
- (void)updateIndexes;

@end
