/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDAnalyticSubmissionEvent.h>

@class NSDate, NSString;

@interface HDCloudSyncRestoreEvent : NSObject <HDAnalyticSubmissionEvent> {

	long long _restorePhase;
	NSDate* _startDate;
	NSDate* _endDate;
	double _duration;
	long long _dbSize;
	long long _hfdSize;
	long long _journalCount;

}

@property (nonatomic,readonly) long long restorePhase;              //@synthesize restorePhase=_restorePhase - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                    //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long dbSize;                    //@synthesize dbSize=_dbSize - In the implementation block
@property (nonatomic,readonly) long long hfdSize;                   //@synthesize hfdSize=_hfdSize - In the implementation block
@property (nonatomic,readonly) long long journalCount;              //@synthesize journalCount=_journalCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)restoreEventForPhase:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 dbSize:(long long)arg5 hfdSize:(long long)arg6 journalCount:(long long)arg7 ;
-(NSString *)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(long long)dbSize;
-(long long)hfdSize;
-(long long)journalCount;
-(unsigned)AWDMetricID;
-(id)codableRepresentationForAWDSubmission;
-(id)initWithRestorePhase:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 dbSize:(long long)arg5 hfdSize:(long long)arg6 journalCount:(long long)arg7 ;
-(long long)restorePhase;
@end
