/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings, SBEntityRemovalDosidoDefaultAnimationSettings;

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings {

	double _fromViewSlideOutAnimationDelay;
	double _fromViewSlideOutHeightOffsetMultiplier;
	SBFFluidBehaviorSettings* _fromViewSlideOutAnimationSettings;
	SBEntityRemovalDosidoDefaultAnimationSettings* _defaultAnimationSettings;

}

@property (assign,nonatomic) double fromViewSlideOutAnimationDelay;                                                 //@synthesize fromViewSlideOutAnimationDelay=_fromViewSlideOutAnimationDelay - In the implementation block
@property (assign,nonatomic) double fromViewSlideOutHeightOffsetMultiplier;                                         //@synthesize fromViewSlideOutHeightOffsetMultiplier=_fromViewSlideOutHeightOffsetMultiplier - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * fromViewSlideOutAnimationSettings;                          //@synthesize fromViewSlideOutAnimationSettings=_fromViewSlideOutAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalDosidoDefaultAnimationSettings * defaultAnimationSettings;              //@synthesize defaultAnimationSettings=_defaultAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)fromViewSlideOutAnimationDelay;
-(SBEntityRemovalDosidoDefaultAnimationSettings *)defaultAnimationSettings;
-(double)fromViewSlideOutHeightOffsetMultiplier;
-(SBFFluidBehaviorSettings *)fromViewSlideOutAnimationSettings;
-(void)setDefaultAnimationSettings:(SBEntityRemovalDosidoDefaultAnimationSettings *)arg1 ;
-(void)setFromViewSlideOutHeightOffsetMultiplier:(double)arg1 ;
-(void)setFromViewSlideOutAnimationDelay:(double)arg1 ;
-(void)setFromViewSlideOutAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

