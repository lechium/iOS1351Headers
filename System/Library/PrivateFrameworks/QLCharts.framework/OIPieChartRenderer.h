/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/QLCharts.framework/QLCharts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OIPieSliceRenderer;
#import <QLCharts/QLCharts-Structs.h>
@interface OIPieChartRenderer : NSObject {

	id<OIPieSliceRenderer> _sliceRenderer;
	OIChartRef _chart;

}

@property (retain) id<OIPieSliceRenderer> sliceRenderer;              //@synthesize sliceRenderer=_sliceRenderer - In the implementation block
@property (assign) OIChartRef chart;                                  //@synthesize chart=_chart - In the implementation block
-(void)dealloc;
-(void)setChart:(OIChartRef)arg1 ;
-(OIChartRef)chart;
-(id)initWithChart:(OIChartRef)arg1 ;
-(void)renderThreeDimensional:(BOOL)arg1 pieFromSeriesArray:(CFArrayRef)arg2 ;
-(void)setSliceRenderer:(id<OIPieSliceRenderer>)arg1 ;
-(id)initWithChart:(OIChartRef)arg1 sliceRenderer:(id)arg2 ;
-(id<OIPieSliceRenderer>)sliceRenderer;
@end
