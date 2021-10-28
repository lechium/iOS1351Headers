/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAOutputStream, SASamplePrintOptions, SASampleStore, SATimestamp, NSMutableDictionary, NSMutableArray, NSString, NSUUID;

@interface SASamplePrinter : NSObject {

	SAOutputStream* _stream;
	SASamplePrintOptions* _options;
	SASampleStore* _sampleStore;
	BOOL _hasFilterApplied;
	SATimestamp* _reportStartTime;
	SATimestamp* _reportEndTime;
	unsigned long long _reportStartSampleIndex;
	unsigned long long _reportEndSampleIndex;
	unsigned long long _numSamples;
	NSMutableDictionary* _binaryImagesHit;
	NSMutableDictionary* _indexForImageUUID;
	double _minimumSamplingInterval;
	NSMutableArray* _timeJumps;
	NSString* _headerNote;
	NSUUID* _incidentUUID;

}

@property (copy) SASamplePrintOptions * options; 
@property (copy) NSString * headerNote;                       //@synthesize headerNote=_headerNote - In the implementation block
@property (copy) NSUUID * incidentUUID;                       //@synthesize incidentUUID=_incidentUUID - In the implementation block
-(SASamplePrintOptions *)options;
-(void)setOptions:(SASamplePrintOptions *)arg1 ;
-(void)printFooter;
-(double)sampleInterval;
-(BOOL)hasTimeIndexes;
-(double)timeSpentAsleepBetweenStartTimestamp:(id)arg1 endTimestamp:(id)arg2 ;
-(BOOL)complainAboutSamplingGapBetweenStartTimestamp:(id)arg1 endTimestamp:(id)arg2 ;
-(void)updateIndexes;
-(unsigned long long)sampleIndexForDisplayTimeIndex:(unsigned long long)arg1 ;
-(void)printReport;
-(id)displayNameForTask:(id)arg1 ;
-(BOOL)checkForBadOptions;
-(void)preprocess;
-(void)printHeader;
-(void)printSystemStatsStyleBinaryImages;
-(void)printTasksByExecutable;
-(void)printTasksByProcess;
-(BOOL)hasTargetProcess;
-(id)displayNameForPid:(int)arg1 threadId:(unsigned long long)arg2 timestamp:(id)arg3 ;
-(BOOL)shouldPrintTimeOutsideSamplingRange:(double)arg1 ;
-(void)addStackForDispatchQueue:(id)arg1 orThread:(id)arg2 andThreadStateIndexes:(id)arg3 task:(id)arg4 toRootFrames:(id)arg5 nameChanges:(BOOL)arg6 dispatchQueueChanges:(BOOL)arg7 threadChanges:(BOOL)arg8 priorityChanges:(BOOL)arg9 microstackshotSummary:(id)arg10 onlyHeaviestStack:(BOOL)arg11 ;
-(id)binaryImagesHitByTask:(id)arg1 ;
-(void)addStack:(id)arg1 toStream:(id)arg2 sampleCount:(unsigned long long)arg3 binariesToDisplay:(id)arg4 primaryMicrostackshotState:(unsigned)arg5 onlyHeaviestStack:(BOOL)arg6 ;
-(void)printBinaryImagesForTask:(id)arg1 ;
-(void)printHIDEvent:(id)arg1 ;
-(void)printHIDEvents;
-(unsigned long long)displayTimeIndexForSampleIndex:(unsigned long long)arg1 ;
-(void)preprocessTask:(id)arg1 ;
-(void)calculateTimeJumps;
-(unsigned long long)displayedLoadAddressForBinaryLoadInfo:(id)arg1 binariesToDisplay:(id)arg2 extraBinariesToDisplay:(id)arg3 ;
-(void)printTask:(id)arg1 specialThreadId:(unsigned long long)arg2 omitSpecialThreadId:(BOOL)arg3 omitOtherThreads:(BOOL)arg4 ;
-(void)printTask:(id)arg1 ;
-(id)displayNameForTask:(id)arg1 includePid:(BOOL)arg2 ;
-(void)printMultipleTasks:(id)arg1 ;
-(long long)printTaskHeaderForMultipleTasks:(id)arg1 ;
-(void)printSingleStackForTasks:(id)arg1 limitToThreadIds:(id)arg2 sampleCount:(unsigned long long)arg3 ;
-(void)addTaskHeaderToStream:(id)arg1 displayName:(id)arg2 mainBinaryUUID:(id)arg3 mainBinaryPath:(id)arg4 uid:(unsigned)arg5 architectureString:(id)arg6 version:(id)arg7 parentName:(id)arg8 responsibleName:(id)arg9 taskExecedFromName:(id)arg10 taskExecedToName:(id)arg11 startTimestamp:(id)arg12 endTimestamp:(id)arg13 startSampleIndex:(unsigned long long)arg14 endSampleIndex:(unsigned long long)arg15 numSamples:(unsigned long long)arg16 totalNumSamples:(unsigned long long)arg17 numSamplesSuspended:(unsigned long long)arg18 numSamplesTerminated:(unsigned long long)arg19 startingTaskSize:(unsigned long long)arg20 endingTaskSize:(unsigned long long)arg21 maxTaskSize:(unsigned long long)arg22 startSampleIndexOfMaxTaskSize:(unsigned long long)arg23 endSampleIndexOfMaxTaskSize:(unsigned long long)arg24 numPageins:(unsigned)arg25 cpuNanoseconds:(unsigned long long)arg26 cpuInstructions:(unsigned long long)arg27 cpuCycles:(unsigned long long)arg28 usesSuddenTermination:(BOOL)arg29 allowsIdleExit:(BOOL)arg30 isTranslocated:(BOOL)arg31 isUnresponsive:(BOOL)arg32 timeOfLastResponse:(double)arg33 numIdleWorkQueueThreads:(unsigned long long)arg34 numOtherHiddenThreads:(unsigned long long)arg35 wqExceededConstrainedThreadLimit:(BOOL)arg36 wqExceededTotalThreadLimit:(BOOL)arg37 ;
-(long long)printTaskHeaderForTask:(id)arg1 specialThreadId:(unsigned long long)arg2 omitSpecialThreadId:(BOOL)arg3 omitOtherThreads:(BOOL)arg4 ;
-(void)printSingleStackForTask:(id)arg1 taskSampleCount:(unsigned long long)arg2 ;
-(void)printStacksForTask:(id)arg1 taskSampleCount:(unsigned long long)arg2 ;
-(id)timeIndexDescriptionForStartSampleIndex:(unsigned long long)arg1 endSampleIndex:(unsigned long long)arg2 formattedToLength:(int)arg3 ;
-(id)timeIndexDescriptionForTimestamp:(id)arg1 ;
-(id)keyForTask:(id)arg1 isTargetTask:(BOOL)arg2 ;
-(void)printBinaryImages:(id)arg1 ;
-(void)addStackForDispatchQueue:(id)arg1 orThread:(id)arg2 andThreadStateIndexes:(id)arg3 task:(id)arg4 toRootFrames:(id)arg5 nameChanges:(BOOL)arg6 dispatchQueueChanges:(BOOL)arg7 threadChanges:(BOOL)arg8 priorityChanges:(BOOL)arg9 microstackshotSummary:(id)arg10 ;
-(void)addStack:(id)arg1 toStream:(id)arg2 sampleCount:(unsigned long long)arg3 binariesToDisplay:(id)arg4 primaryMicrostackshotState:(unsigned)arg5 ;
-(id)stackStringForThread:(id)arg1 threadStateIndexes:(id)arg2 task:(id)arg3 taskSampleCount:(unsigned long long)arg4 ;
-(BOOL)printByThreadForDispatchQueue:(id)arg1 ;
-(id)stackStringForDispatchQueue:(id)arg1 task:(id)arg2 taskSampleCount:(unsigned long long)arg3 ;
-(id)stackStringsForThread:(id)arg1 task:(id)arg2 taskSampleCount:(unsigned long long)arg3 ;
-(void)addHeaderForThread:(id)arg1 andThreadStateIndexes:(id)arg2 toStackString:(id)arg3 taskSampleCount:(unsigned long long)arg4 nameChanges:(BOOL*)arg5 dispatchQueueChanges:(BOOL*)arg6 priorityChanges:(BOOL*)arg7 ;
-(void)addStackForDispatchQueue:(id)arg1 orThread:(id)arg2 andThreadStateIndexes:(id)arg3 task:(id)arg4 toRootFrames:(id)arg5 nameChanges:(BOOL)arg6 dispatchQueueChanges:(BOOL)arg7 threadChanges:(BOOL)arg8 priorityChanges:(BOOL)arg9 ;
-(void)addStack:(id)arg1 toStream:(id)arg2 sampleCount:(unsigned long long)arg3 binariesToDisplay:(id)arg4 ;
-(id)timeWhenFirstAttemptedToSampleThread:(id)arg1 ;
-(void)addStackHeaderToStream:(id)arg1 threadIds:(id)arg2 dispatchQueues:(id)arg3 isIdleWorkQueue:(BOOL)arg4 threadName:(id)arg5 threadNameChanges:(BOOL)arg6 count:(unsigned long long)arg7 firstSampleIndex:(unsigned long long)arg8 lastSampleIndex:(unsigned long long)arg9 timeWhenFirstAttemptedToSample:(id)arg10 minPriority:(int)arg11 maxPriority:(int)arg12 minBasePriority:(int)arg13 maxBasePriority:(int)arg14 cpuTimeNs:(unsigned long long)arg15 cpuInstructions:(unsigned long long)arg16 cpuCycles:(unsigned long long)arg17 isProcessorIdleThread:(BOOL)arg18 isGlobalForcedIdleThread:(BOOL)arg19 ;
-(void)iterateDispatchQueue:(id)arg1 orThread:(id)arg2 threadStateIndexes:(id)arg3 startingAtIndex:(unsigned long long)arg4 endingAfterTimestamp:(id)arg5 task:(id)arg6 stopAtTimeJumps:(BOOL)arg7 callback:(/*^block*/id)arg8 ;
-(id)stateChangeStringForThreadState:(id)arg1 serialDispatchQueue:(id)arg2 thread:(id)arg3 threadStateIndexes:(id)arg4 taskState:(id)arg5 task:(id)arg6 iteratorIndex:(unsigned long long)arg7 missingStateIsInAnotherStack:(BOOL)arg8 sampleTimestamp:(id)arg9 previousSampleTimestamp:(id)arg10 previousTaskState:(id)arg11 previousThread:(id)arg12 previousThreadState:(id)arg13 dispatchQueueChanges:(BOOL)arg14 priorityChanges:(BOOL)arg15 nameChanges:(BOOL)arg16 threadChanges:(BOOL)arg17 isTimeJump:(BOOL)arg18 ;
-(BOOL)frame:(id)arg1 matchesFrame:(id)arg2 ;
-(id)copySystemstatsDescriptionForFrame:(id)arg1 ;
-(id)copyDescriptionForFrame:(id)arg1 binariesToDisplay:(id)arg2 extraBinariesToDisplay:(id)arg3 ;
-(void)addHeaderForDispatchQueue:(id)arg1 toStackString:(id)arg2 taskSampleCount:(unsigned long long)arg3 nameChanges:(BOOL*)arg4 threadChanges:(BOOL*)arg5 priorityChanges:(BOOL*)arg6 ;
-(unsigned long long)displayedLoadAddressForBinary:(id)arg1 desiredLoadAddress:(unsigned long long)arg2 isInKernelAddressSpace:(BOOL)arg3 binariesToDisplay:(id)arg4 extraBinariesToDisplay:(id)arg5 ;
-(id)copySymbolStringForInstruction:(id)arg1 symbolicationOffByOne:(BOOL)arg2 ;
-(id)timeIndexDescriptionForStartTime:(id)arg1 endTime:(id)arg2 formattedToLength:(int)arg3 ;
-(id)initWithSampleStore:(id)arg1 ;
-(void)filterToTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(void)filterToMachAbsTimeRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(void)filterToMachContTimeRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)printToMutableData:(id)arg1 ;
-(long long)printTaskHeaderForTask:(id)arg1 ;
-(NSString *)headerNote;
-(void)setHeaderNote:(NSString *)arg1 ;
-(NSUUID *)incidentUUID;
-(void)setIncidentUUID:(NSUUID *)arg1 ;
@end
