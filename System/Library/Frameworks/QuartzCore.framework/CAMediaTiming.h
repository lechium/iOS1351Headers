/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol CAMediaTiming
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
@required
-(double)duration;
-(void)setDuration:(double)arg1;
-(float)speed;
-(void)setSpeed:(float)arg1;
-(double)beginTime;
-(void)setBeginTime:(double)arg1;
-(void)setFillMode:(id)arg1;
-(void)setTimeOffset:(double)arg1;
-(void)setAutoreverses:(BOOL)arg1;
-(void)setRepeatCount:(float)arg1;
-(double)timeOffset;
-(BOOL)autoreverses;
-(float)repeatCount;
-(double)repeatDuration;
-(NSString *)fillMode;
-(void)setRepeatDuration:(double)arg1;

@end

