/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol FIUIChartSeriesDataSource;
@class NSDate, NSNumber, FIUIChartDataSet;

@interface FIUIChartSeries : UIView {

	NSDate* _minXValue;
	NSDate* _maxXValue;
	BOOL _displayAboveAxisLabels;
	NSNumber* _minYValue;
	NSNumber* _maxYValue;
	id<FIUIChartSeriesDataSource> _dataSource;
	FIUIChartDataSet* _dataSet;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) NSNumber * minYValue;                                         //@synthesize minYValue=_minYValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxYValue;                                         //@synthesize maxYValue=_maxYValue - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                      //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) CGRect insetBounds; 
@property (assign,nonatomic,__weak) id<FIUIChartSeriesDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FIUIChartDataSet * dataSet;                                   //@synthesize dataSet=_dataSet - In the implementation block
@property (assign,nonatomic) BOOL displayAboveAxisLabels;                                  //@synthesize displayAboveAxisLabels=_displayAboveAxisLabels - In the implementation block
-(id)init;
-(id<FIUIChartSeriesDataSource>)dataSource;
-(void)setDataSource:(id<FIUIChartSeriesDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(FIUIChartDataSet *)dataSet;
-(void)setDataSet:(FIUIChartDataSet *)arg1 ;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(BOOL)displayAboveAxisLabels;
-(float)_relativePositionForXPlaneValue:(id)arg1 ;
-(void)setMinYValue:(NSNumber *)arg1 ;
-(void)setMaxYValue:(NSNumber *)arg1 ;
-(CGRect)insetBounds;
-(double)xValueForPointFromChartPoint:(id)arg1 ;
-(double)yValueForPointFromChartPointValue:(id)arg1 ;
-(id)labelsFromDataSet;
-(void)_reloadMinMaxValues;
-(float)_relativePositionForYPlaneValue:(id)arg1 ;
-(void)setDisplayAboveAxisLabels:(BOOL)arg1 ;
@end

