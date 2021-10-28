/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SuddenChangeParameters : NSObject {

	int margin;
	int minSamplesCount;
	int minMarginRequired;
	double percentage;
	double durationThresholdUpward;
	double durationThresholdDownward;

}

@property (assign,nonatomic) int margin; 
@property (assign,nonatomic) int minSamplesCount; 
@property (assign,nonatomic) int minMarginRequired; 
@property (assign,nonatomic) double percentage; 
@property (assign,nonatomic) double durationThresholdUpward; 
@property (assign,nonatomic) double durationThresholdDownward; 
-(double)percentage;
-(void)setMargin:(int)arg1 ;
-(int)margin;
-(int)minSamplesCount;
-(void)setMinSamplesCount:(int)arg1 ;
-(int)minMarginRequired;
-(void)setMinMarginRequired:(int)arg1 ;
-(void)setPercentage:(double)arg1 ;
-(double)durationThresholdUpward;
-(void)setDurationThresholdUpward:(double)arg1 ;
-(double)durationThresholdDownward;
-(void)setDurationThresholdDownward:(double)arg1 ;
@end
