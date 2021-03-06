/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSMutableSet;

@interface SBClawGestureLogger : NSObject {

	BOOL _didTriggerSOS;
	NSDate* _clawEventTimestamp;
	NSMutableSet* _activePressTypes;
	NSMutableSet* _participatingPressTypes;

}

@property (nonatomic,copy) NSDate * clawEventTimestamp;                           //@synthesize clawEventTimestamp=_clawEventTimestamp - In the implementation block
@property (assign,nonatomic) BOOL didTriggerSOS;                                  //@synthesize didTriggerSOS=_didTriggerSOS - In the implementation block
@property (nonatomic,retain) NSMutableSet * participatingPressTypes;              //@synthesize participatingPressTypes=_participatingPressTypes - In the implementation block
@property (nonatomic,retain) NSMutableSet * activePressTypes;                     //@synthesize activePressTypes=_activePressTypes - In the implementation block
-(id)init;
-(void)setDidTriggerSOS:(BOOL)arg1 ;
-(BOOL)didTriggerSOS;
-(void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2 ;
-(NSMutableSet *)activePressTypes;
-(void)noteSOSTriggered;
-(void)setActivePressTypes:(NSMutableSet *)arg1 ;
-(NSDate *)clawEventTimestamp;
-(NSMutableSet *)participatingPressTypes;
-(void)_publishLoggedData;
-(void)setClawEventTimestamp:(NSDate *)arg1 ;
-(void)_resetLoggedData;
-(void)setParticipatingPressTypes:(NSMutableSet *)arg1 ;
@end

