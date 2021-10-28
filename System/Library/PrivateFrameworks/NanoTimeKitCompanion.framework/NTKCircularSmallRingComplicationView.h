/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringImageView, UIColor;

@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView {

	NTKColoringImageView* _fillFractionRing;
	double _fillFraction;
	BOOL _didDrawOnce;
	UIColor* _ringOverrideColor;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg1 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setUsesMediumLayout:(BOOL)arg1 ;
-(void)updateRingWithRingDescription:(id)arg1 ;
-(void)updateRingWithOverrideColor:(id)arg1 ;
@end
