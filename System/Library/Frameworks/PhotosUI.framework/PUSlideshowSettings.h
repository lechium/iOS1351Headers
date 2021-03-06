/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXSettings.h>

@class OKProducerPreset, NSString;

@interface PUSlideshowSettings : PXSettings {

	BOOL _allowUserInteractivity;
	BOOL _slideshowSettingsEnableFullscreenSupport;
	OKProducerPreset* _currentPreset;
	double _interactiveTransitionFingerTrackingBoxRadiusMinValue;
	double _interactiveTransitionFingerTrackingBoxRadiusMaxValue;
	double _interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
	double _interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
	double _interactiveTransitionProgressThresholdMinValue;
	double _interactiveTransitionProgressThresholdMaxValue;
	double _interactiveTransitionProgressThresholdDefaultValue;
	double _interactiveTransitionProgressThresholdIncrementValue;
	double _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
	double _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
	double _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
	double _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
	NSString* _currentPresetUniqueIdentifier;

}

@property (assign,nonatomic) BOOL allowUserInteractivity;                                                                //@synthesize allowUserInteractivity=_allowUserInteractivity - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMinValue;                                //@synthesize interactiveTransitionFingerTrackingBoxRadiusMinValue=_interactiveTransitionFingerTrackingBoxRadiusMinValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMaxValue;                                //@synthesize interactiveTransitionFingerTrackingBoxRadiusMaxValue=_interactiveTransitionFingerTrackingBoxRadiusMaxValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFingerTrackingBoxRadiusDefaultValue;                            //@synthesize interactiveTransitionFingerTrackingBoxRadiusDefaultValue=_interactiveTransitionFingerTrackingBoxRadiusDefaultValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFingerTrackingBoxRadiusIncrementValue;                          //@synthesize interactiveTransitionFingerTrackingBoxRadiusIncrementValue=_interactiveTransitionFingerTrackingBoxRadiusIncrementValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThresholdMinValue;                                      //@synthesize interactiveTransitionProgressThresholdMinValue=_interactiveTransitionProgressThresholdMinValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThresholdMaxValue;                                      //@synthesize interactiveTransitionProgressThresholdMaxValue=_interactiveTransitionProgressThresholdMaxValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThresholdDefaultValue;                                  //@synthesize interactiveTransitionProgressThresholdDefaultValue=_interactiveTransitionProgressThresholdDefaultValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThresholdIncrementValue;                                //@synthesize interactiveTransitionProgressThresholdIncrementValue=_interactiveTransitionProgressThresholdIncrementValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;                    //@synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;                    //@synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;                //@synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;              //@synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue - In the implementation block
@property (assign,nonatomic) BOOL slideshowSettingsEnableFullscreenSupport;                                              //@synthesize slideshowSettingsEnableFullscreenSupport=_slideshowSettingsEnableFullscreenSupport - In the implementation block
@property (nonatomic,retain) OKProducerPreset * currentPreset;                                                           //@synthesize currentPreset=_currentPreset - In the implementation block
@property (nonatomic,retain) NSString * currentPresetUniqueIdentifier;                                                   //@synthesize currentPresetUniqueIdentifier=_currentPresetUniqueIdentifier - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDefaultValues;
-(id)parentSettings;
-(void)setCurrentPreset:(OKProducerPreset *)arg1 ;
-(OKProducerPreset *)currentPreset;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)performPostSaveActions;
-(double)interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
-(double)interactiveTransitionProgressThresholdDefaultValue;
-(double)interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
-(BOOL)transitionSettingsAreDefaults;
-(BOOL)allowUserInteractivity;
-(void)removeTransitionTimingCustomizationsFromUserDefaults;
-(void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
-(void)saveInteractiveSlideshowSettingsInUserDefaults;
-(void)setDefaultPresetTransitionValues;
-(void)setAllowUserInteractivity:(BOOL)arg1 ;
-(double)interactiveTransitionFingerTrackingBoxRadiusMinValue;
-(void)setInteractiveTransitionFingerTrackingBoxRadiusMinValue:(double)arg1 ;
-(double)interactiveTransitionFingerTrackingBoxRadiusMaxValue;
-(void)setInteractiveTransitionFingerTrackingBoxRadiusMaxValue:(double)arg1 ;
-(void)setInteractiveTransitionFingerTrackingBoxRadiusDefaultValue:(double)arg1 ;
-(double)interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
-(void)setInteractiveTransitionFingerTrackingBoxRadiusIncrementValue:(double)arg1 ;
-(double)interactiveTransitionProgressThresholdMinValue;
-(void)setInteractiveTransitionProgressThresholdMinValue:(double)arg1 ;
-(double)interactiveTransitionProgressThresholdMaxValue;
-(void)setInteractiveTransitionProgressThresholdMaxValue:(double)arg1 ;
-(void)setInteractiveTransitionProgressThresholdDefaultValue:(double)arg1 ;
-(double)interactiveTransitionProgressThresholdIncrementValue;
-(void)setInteractiveTransitionProgressThresholdIncrementValue:(double)arg1 ;
-(double)interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
-(void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMinValue:(double)arg1 ;
-(double)interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
-(void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMaxValue:(double)arg1 ;
-(void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue:(double)arg1 ;
-(double)interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
-(void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue:(double)arg1 ;
-(BOOL)slideshowSettingsEnableFullscreenSupport;
-(void)setSlideshowSettingsEnableFullscreenSupport:(BOOL)arg1 ;
-(NSString *)currentPresetUniqueIdentifier;
-(void)setCurrentPresetUniqueIdentifier:(NSString *)arg1 ;
@end

