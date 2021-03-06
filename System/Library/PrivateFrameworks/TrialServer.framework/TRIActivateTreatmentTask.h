/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRITreatmentBaseTask.h>

@class NSDate;

@interface TRIActivateTreatmentTask : TRITreatmentBaseTask {

	NSDate* _endTime;
	NSDate* _startTime;

}

@property (nonatomic,retain) NSDate * startTime;              //@synthesize startTime=_startTime - In the implementation block
+(id)taskWithExperimentId:(id)arg1 treatmentId:(id)arg2 ;
-(id)dependencies;
-(NSDate *)startTime;
-(id)endTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setup;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)runTask;
-(BOOL)hasConflictWithOtherExperiments:(id)arg1 ;
-(BOOL)writeNamespaceDescriptorsInDirectory:(id)arg1 forExperiment:(id)arg2 ;
@end

