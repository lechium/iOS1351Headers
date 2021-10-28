/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CCUIAnimationParameters;
@interface CCUIAnimation : NSObject <NSCopying> {

	id<CCUIAnimationParameters> _parameters;
	double _delay;
	double _speed;
	/*^block*/id _animations;

}

@property (nonatomic,copy,readonly) id<CCUIAnimationParameters> parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double speed;                                             //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy,readonly) id animations;                                       //@synthesize animations=_animations - In the implementation block
+(id)animationWithParameters:(id)arg1 animations:(/*^block*/id)arg2 ;
+(id)animationWithParameters:(id)arg1 delay:(double)arg2 animations:(/*^block*/id)arg3 ;
+(id)animationWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(/*^block*/id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)delay;
-(id)animations;
-(id<CCUIAnimationParameters>)parameters;
-(double)speed;
-(id)_initWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(/*^block*/id)arg4 ;
@end
