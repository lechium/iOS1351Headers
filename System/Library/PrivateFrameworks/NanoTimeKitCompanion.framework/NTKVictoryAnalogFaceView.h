/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>
#import <libobjc.A.dylib/NTKVictoryAnalogBackgroundViewDelegate.h>
#import <libobjc.A.dylib/NTKUtilityComplicationFactoryDelegate.h>

@class NTKUtilityComplicationFactory, NTKVictoryAnalogBackgroundView, NTKRoundedCornerOverlayView, NTKVictoryColorEditOption, NSString;

@interface NTKVictoryAnalogFaceView : NTKAnalogFaceView <NTKVictoryAnalogBackgroundViewDelegate, NTKUtilityComplicationFactoryDelegate> {

	NTKUtilityComplicationFactory* _utilityComplicationFactory;
	NTKVictoryAnalogBackgroundView* _backgroundView;
	NTKRoundedCornerOverlayView* _cornerView;
	BOOL _isFullBleed;
	NTKVictoryColorEditOption* _pride2020SensitiveShroudColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(BOOL)_shouldHideSensitiveUI;
-(unsigned long long)_filterColorForUISensitivityFromColor:(unsigned long long)arg1 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareForEditing;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(void)_loadLayoutRules;
-(void)_applyDataMode;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_configureTimeView:(id)arg1 ;
-(double)_complicationAlphaForEditMode:(long long)arg1 ;
-(BOOL)_wantsStatusBarIconShadow;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(double)_keylinePaddingForState:(long long)arg1 ;
-(BOOL)slotUsesCurvedText:(long long)arg1 ;
-(id)_slotForUtilitySlot:(long long)arg1 ;
-(id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1 ;
-(CGPoint)_timeTravelStatusModuleCenter;
-(void)_setFullBleed:(BOOL)arg1 ;
-(void)_applyComplicationViewColor:(id)arg1 ;
-(void)_applyColor:(id)arg1 toComplicationView:(id)arg2 ;
-(double)_backgroundAlphaForEditMode:(long long)arg1 ;
-(double)_handsAlphaForEditMode:(long long)arg1 ;
-(void)logoTappedFromRect:(CGRect)arg1 ;
-(CGPoint)_contentCenterOffset;
-(double)_timeTravelCaptionLabelMaxWidth;
-(void)_layoutTimeTravelCaptionView:(id)arg1 ;
-(double)_keylineEdgeGapForState:(long long)arg1 ;
@end

