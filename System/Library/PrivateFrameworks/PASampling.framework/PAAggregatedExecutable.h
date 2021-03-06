/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PASampling/PAAggregatedTask.h>

@class NSString, NSUUID, NSMutableSet, PAExecutableAggregator;

@interface PAAggregatedExecutable : PAAggregatedTask {

	unsigned long long _firstTimestampIndex;
	unsigned long long _lastTimestampIndex;
	NSString* _name;
	NSUUID* _mainBinaryUuid;
	unsigned _count;
	NSMutableSet* _rootFrames;

}

@property (__weak,readonly) PAExecutableAggregator * aggregator; 
@property (readonly) NSUUID * mainBinaryUuid;                                 //@synthesize mainBinaryUuid=_mainBinaryUuid - In the implementation block
@property (assign) unsigned count;                                            //@synthesize count=_count - In the implementation block
@property (assign) unsigned long long firstTimestampIndex;                    //@synthesize firstTimestampIndex=_firstTimestampIndex - In the implementation block
@property (assign) unsigned long long lastTimestampIndex;                     //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (retain) NSMutableSet * rootFrames;                                 //@synthesize rootFrames=_rootFrames - In the implementation block
@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(unsigned)count;
-(long long)compare:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(PAExecutableAggregator *)aggregator;
-(NSMutableSet *)rootFrames;
-(void)setRootFrames:(NSMutableSet *)arg1 ;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(void)printHeaderToOutputStream:(id)arg1 ;
-(void)printToOutputStream:(id)arg1 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(void)printBinaryImagesToOutputStream:(id)arg1 ;
-(NSUUID *)mainBinaryUuid;
-(unsigned long long)firstTimestampIndex;
-(void)printStacksToOutputStream:(id)arg1 ;
-(id)initForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(void)setFirstTimestampIndex:(unsigned long long)arg1 ;
-(id)copyDescriptionForFrame:(id)arg1 ;
@end

