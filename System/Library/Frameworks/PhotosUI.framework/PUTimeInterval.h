/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PUTimeInterval : NSObject {

	long long _state;
	double _startTime;
	/*^block*/id _intervalStartedHandler;
	/*^block*/id _intervalEndedHandler;
	double _endTime;

}

@property (assign,nonatomic) long long state;                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                       //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy) id intervalStartedHandler;              //@synthesize intervalStartedHandler=_intervalStartedHandler - In the implementation block
@property (nonatomic,copy) id intervalEndedHandler;                //@synthesize intervalEndedHandler=_intervalEndedHandler - In the implementation block
-(id)init;
-(long long)state;
-(double)duration;
-(void)setState:(long long)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)endInterval;
-(void)startInterval;
-(void)setIntervalEndedHandler:(id)arg1 ;
-(void)setIntervalStartedHandler:(id)arg1 ;
-(void)startIntervalWithTimeOverride:(double)arg1 ;
-(void)_handleTransitionToRunning;
-(void)_handleTransitionToComplete;
-(id)intervalStartedHandler;
-(id)intervalEndedHandler;
@end

