/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface _PXValueAnimation : NSObject {

	double _duration;
	double _startTime;
	double _currentMediaTime;
	PXValueAnimationSpec _spec;

}

@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) PXValueAnimationSpec spec;              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) double currentValue; 
@property (nonatomic,readonly) BOOL completed; 
@property (assign,nonatomic) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double currentMediaTime;                  //@synthesize currentMediaTime=_currentMediaTime - In the implementation block
-(id)init;
-(id)description;
-(double)duration;
-(BOOL)completed;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)elapsedTime;
-(double)currentMediaTime;
-(double)currentValue;
-(PXValueAnimationSpec)spec;
-(double)remainingTime;
-(void)setCurrentMediaTime:(double)arg1 ;
-(id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(PXValueAnimationSpec)arg3 ;
@end

