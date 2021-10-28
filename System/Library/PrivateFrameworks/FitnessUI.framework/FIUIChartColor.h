/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FitnessUI/FitnessUI-Structs.h>
@interface FIUIChartColor : NSObject {

	CGGradientRef _gradient;
	CGColorRef _color;
	double _threshold;

}

@property (assign,nonatomic) double threshold;              //@synthesize threshold=_threshold - In the implementation block
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3 ;
-(id)initWithThreshold:(double)arg1 color:(id)arg2 ;
@end
