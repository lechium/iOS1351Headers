/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRIExperimentBaseTask.h>

@class NSMutableArray, NSString;

@interface TRITargetingTask : TRIExperimentBaseTask {

	NSMutableArray* _targetingMetrics;
	int _experimentType;
	NSString* _treatmentId;

}

@property (retain) NSString * treatmentId;              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (assign) int experimentType;                  //@synthesize experimentType=_experimentType - In the implementation block
+(id)taskWithExperimentId:(id)arg1 ;
-(id)dependencies;
-(id)metrics;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(int)experimentType;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(void)targetingError:(id*)arg1 experimentId:(id)arg2 errorType:(id)arg3 details:(id)arg4 ;
-(id)systemCovariates;
-(void)targetingError:(id*)arg1 experimentId:(id)arg2 errorType:(id)arg3 ;
-(BOOL)getTreatment:(id*)arg1 forExperiment:(id)arg2 error:(id*)arg3 ;
-(void)setExperimentType:(int)arg1 ;
-(int)runTask;
@end
