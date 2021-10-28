/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CALayer.h>

@class AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerViewLayer : CALayer {

	BOOL _wantsAppearanceConfigValues;
	AVPresentationContainerViewAppearanceProxy* _appearanceProxy;

}

@property (nonatomic,readonly) AVPresentationContainerViewAppearanceProxy * appearanceProxy;              //@synthesize appearanceProxy=_appearanceProxy - In the implementation block
@property (assign,nonatomic) BOOL wantsAppearanceConfigValues;                                            //@synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(void)setMasksToBounds:(BOOL)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(void)setCornerCurve:(id)arg1 ;
-(double)cornerRadius;
-(id)cornerCurve;
-(BOOL)masksToBounds;
-(unsigned long long)maskedCorners;
-(void)setContinuousCorners:(BOOL)arg1 ;
-(BOOL)continuousCorners;
-(AVPresentationContainerViewAppearanceProxy *)appearanceProxy;
-(void)setWantsAppearanceConfigValues:(BOOL)arg1 ;
-(BOOL)wantsAppearanceConfigValues;
@end
