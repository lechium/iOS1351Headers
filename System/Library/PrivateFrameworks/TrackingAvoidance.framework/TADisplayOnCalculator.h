/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface TADisplayOnCalculator : NSObject {

	BOOL _useBudget;
	double _budgetRemaining;
	NSDate* _startTime;
	NSDate* _evaluatedUntil;

}

@property (nonatomic,readonly) NSDate * evaluatedUntil;              //@synthesize evaluatedUntil=_evaluatedUntil - In the implementation block
-(NSDate *)evaluatedUntil;
-(void)completeDisplayOnWithEndDate:(id)arg1 ;
-(id)initWithStartTime:(id)arg1 ;
-(double)calculateDisplayOnWithEvents:(id)arg1 advertisements:(id)arg2 endDate:(id)arg3 ;
-(id)initWithStartTime:(id)arg1 budget:(double)arg2 ;
@end
