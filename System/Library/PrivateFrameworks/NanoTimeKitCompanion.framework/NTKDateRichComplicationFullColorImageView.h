/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, NTKColoringLabel, NSDate, NSString;

@interface NTKDateRichComplicationFullColorImageView : UIView <CLKFullColorImageView> {

	CLKDevice* _device;
	NTKColoringLabel* _weekdayLabel;
	NTKColoringLabel* _dayLabel;
	id<CLKMonochromeFilterProvider> _filterProvider;
	NSDate* _overrideDate;

}

@property (nonatomic,retain) NSDate * overrideDate;                                              //@synthesize overrideDate=_overrideDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)dealloc;
-(void)_commonInit;
-(void)layoutSubviews;
-(void)_updateDate;
-(NSDate *)overrideDate;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(id)_newLabelSubviewWithFont:(id)arg1 ;
-(void)_timeChanged:(id)arg1 ;
@end

