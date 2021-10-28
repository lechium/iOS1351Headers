/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSAnimationSettings.h>

@class CAMediaTimingFunction;

@interface BSMutableAnimationSettings : BSAnimationSettings

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) float speed; 
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
-(void)setSpeed:(float)arg1 ;
@end
