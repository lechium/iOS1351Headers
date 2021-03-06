/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class NWCDailyForecastRangeView, NSArray, UIStackView, NSString;

@interface NWCSevenDayForecastView : UIView <CLKFullColorImageView> {

	id<CLKMonochromeFilterProvider> _filterProvider;
	NWCDailyForecastRangeView* _dailyForecastRangeView;
	NSArray* _dailyForecastViews;
	UIStackView* _horizontalStackView;

}

@property (nonatomic,retain) UIStackView * horizontalStackView;                                  //@synthesize horizontalStackView=_horizontalStackView - In the implementation block
@property (nonatomic,retain) NWCDailyForecastRangeView * dailyForecastRangeView;                 //@synthesize dailyForecastRangeView=_dailyForecastRangeView - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecastViews;                                       //@synthesize dailyForecastViews=_dailyForecastViews - In the implementation block
@property (nonatomic,readonly) Class dailyForecastViewClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
+(unsigned long long)maximumDailyConditionCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_applyConstraints;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(void)_addDailyForecastViewsToStackView:(id)arg1 ;
-(void)setDailyForecastRangeView:(NWCDailyForecastRangeView *)arg1 ;
-(UIStackView *)horizontalStackView;
-(NWCDailyForecastRangeView *)dailyForecastRangeView;
-(Class)dailyForecastViewClass;
-(void)setDailyForecastViews:(NSArray *)arg1 ;
-(void)processConditions:(id)arg1 dailyForecastedConditions:(id)arg2 timeZone:(id)arg3 ;
-(NSArray *)dailyForecastViews;
-(void)setHorizontalStackView:(UIStackView *)arg1 ;
@end

