/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUICASpringAnimationParameters.h>

@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (nonatomic,copy) id<CCUIAnimationTimingFunctionDescription> timingFunction; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setTimingFunction:(id<CCUIAnimationTimingFunctionDescription>)arg1 ;
@end
