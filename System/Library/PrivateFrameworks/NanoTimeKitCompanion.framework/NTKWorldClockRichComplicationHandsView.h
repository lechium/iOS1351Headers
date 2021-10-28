/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class CALayer, UIColor, NSString;

@interface NTKWorldClockRichComplicationHandsView : NTKAnalogHandsView <CLKMonochromeComplicationView> {

	CALayer* _pegDot;
	id<CLKMonochromeFilterProvider> _filterProvider;
	UIColor* _pegDotColor;

}

@property (nonatomic,retain) UIColor * pegDotColor;                                              //@synthesize pegDotColor=_pegDotColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(long long)displayedHour;
-(void)setPegDotColor:(UIColor *)arg1 ;
-(double)_timeAnimationFramesPerSecondForDevice:(id)arg1 ;
-(UIColor *)pegDotColor;
@end
