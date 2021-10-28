/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {

	NSMutableDictionary* _functionsByName;
	double _percentComplete;

}

@property (assign,nonatomic) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
-(id)init;
-(double)percentComplete;
-(void)setPercentComplete:(double)arg1 ;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4 ;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 ;
-(void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2 ;
-(id)timingFunctionNames;
-(double)valueForFunctionWithName:(id)arg1 ;
@end
