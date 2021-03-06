/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKUpNextComplicationView.h>

@class UIColor;

@interface NTKUpNextBezelComplicationView : NTKUpNextComplicationView {

	double _bezelLabelCircularRadius;
	long long _theme;
	UIColor* _bezelTextColor;

}

@property (nonatomic,readonly) double bezelLabelCircularRadius;              //@synthesize bezelLabelCircularRadius=_bezelLabelCircularRadius - In the implementation block
@property (nonatomic,readonly) long long theme;                              //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) UIColor * bezelTextColor;                     //@synthesize bezelTextColor=_bezelTextColor - In the implementation block
@property (nonatomic,readonly) double currentBezelTextWidth; 
-(long long)theme;
-(void)setTheme:(long long)arg1 ;
-(UIColor *)bezelTextColor;
-(void)setBezelTextColor:(UIColor *)arg1 ;
-(double)bezelLabelCircularRadius;
-(void)setBezelLabelCircularRadius:(double)arg1 ;
-(void)_setView:(id)arg1 forSideAtIndex:(long long)arg2 ;
-(void)_enumerateBezelViewsWithBlock:(/*^block*/id)arg1 ;
-(double)currentBezelTextWidth;
@end

