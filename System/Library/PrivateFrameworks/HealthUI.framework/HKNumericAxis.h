/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKAxis.h>

@protocol HKAxisLabelDimension, HKZoomScale;
@interface HKNumericAxis : HKAxis {

	id<HKAxisLabelDimension> _labelDimension;
	double _topVerticalLabelPadding;
	double _bottomVerticalLabelPadding;
	id<HKZoomScale> _scalarZoomScaleEngine;

}

@property (nonatomic,readonly) id<HKZoomScale> scalarZoomScaleEngine;              //@synthesize scalarZoomScaleEngine=_scalarZoomScaleEngine - In the implementation block
@property (nonatomic,retain) id<HKAxisLabelDimension> labelDimension;              //@synthesize labelDimension=_labelDimension - In the implementation block
@property (assign,nonatomic) double topVerticalLabelPadding;                       //@synthesize topVerticalLabelPadding=_topVerticalLabelPadding - In the implementation block
@property (assign,nonatomic) double bottomVerticalLabelPadding;                    //@synthesize bottomVerticalLabelPadding=_bottomVerticalLabelPadding - In the implementation block
+(id)standardNumericYAxisWithLabelDimension:(id)arg1 ;
+(id)ticksAndLabelsForRangeInModelCoordinates:(id)arg1 maximumLabelCount:(long long)arg2 endingOptions:(long long)arg3 dimension:(id)arg4 ;
+(double)_roundUpByMultiple:(double)arg1 factor:(double)arg2 ;
+(double)_roundDownByMultiple:(double)arg1 factor:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
-(void)setLabelDimension:(id<HKAxisLabelDimension>)arg1 ;
-(id)adjustValueRangeForLabels:(id)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(id)adjustedRangeForFittedRange:(id)arg1 chartRange:(HKRange)arg2 ;
-(id)zoomScaleEngine;
-(void)setBottomVerticalLabelPadding:(double)arg1 ;
-(void)setTopVerticalLabelPadding:(double)arg1 ;
-(double)labelSpacingFactorForNumberFormatter;
-(id<HKAxisLabelDimension>)labelDimension;
-(double)topVerticalLabelPadding;
-(double)bottomVerticalLabelPadding;
-(id<HKZoomScale>)scalarZoomScaleEngine;
@end

