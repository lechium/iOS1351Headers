/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VSOptional;

@interface VSStateTransition : NSObject {

	VSOptional* _previousState;
	VSOptional* _triggeringEvent;
	VSOptional* _nextState;

}

@property (nonatomic,retain) VSOptional * previousState;                //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,retain) VSOptional * triggeringEvent;              //@synthesize triggeringEvent=_triggeringEvent - In the implementation block
@property (nonatomic,retain) VSOptional * nextState;                    //@synthesize nextState=_nextState - In the implementation block
-(id)init;
-(VSOptional *)previousState;
-(void)setPreviousState:(VSOptional *)arg1 ;
-(VSOptional *)nextState;
-(void)setNextState:(VSOptional *)arg1 ;
-(VSOptional *)triggeringEvent;
-(void)setTriggeringEvent:(VSOptional *)arg1 ;
@end
