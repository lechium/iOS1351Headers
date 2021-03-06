/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, CKEventMetric;

@interface BRCEventMetric : NSObject {

	BOOL _isCKMetric;
	NSString* _eventName;
	NSDate* _startTime;
	NSDate* _endTime;
	CKEventMetric* _associatedCKEventMetricIfAvailable;

}

@property (nonatomic,readonly) NSString * eventName;                                            //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                                //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                                  //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL isCKMetric;                                                   //@synthesize isCKMetric=_isCKMetric - In the implementation block
@property (nonatomic,readonly) CKEventMetric * associatedCKEventMetricIfAvailable;              //@synthesize associatedCKEventMetricIfAvailable=_associatedCKEventMetricIfAvailable - In the implementation block
-(id)description;
-(NSString *)eventName;
-(id)initWithEventName:(id)arg1 ;
-(void)associateWithCompletedOperation:(id)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)additionalPayload;
-(id)subDescription;
-(BOOL)isCKMetric;
-(void)setIsCKMetric:(BOOL)arg1 ;
-(CKEventMetric *)associatedCKEventMetricIfAvailable;
@end

