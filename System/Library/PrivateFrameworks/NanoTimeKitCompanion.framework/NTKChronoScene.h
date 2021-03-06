/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class SKNode, NTKVariantNode, NSMutableDictionary, SKLabelNode, NSMutableArray, NTKChronoUpperSubDial, NTKChronoLowerSubDial, NTKChronoPalette, SKEffectNode;

@interface NTKChronoScene : NTKAnalogScene {

	SKNode* _currentMode;
	NTKVariantNode* _timeVariantNode;
	NSMutableDictionary* _chronoVariantNodes;
	SKNode* _subdials;
	SKLabelNode* _timeScaleLabel;
	NSMutableArray* _informationTransitions;
	BOOL _rasterizeForEditing;
	NTKChronoUpperSubDial* _upperSubdial;
	NTKChronoLowerSubDial* _lowerSubdial;
	NTKChronoPalette* _palette;
	unsigned long long _timeScale;
	SKEffectNode* _chronoMode;
	SKEffectNode* _timeMode;

}

@property (assign,nonatomic) BOOL rasterizeForEditing;                          //@synthesize rasterizeForEditing=_rasterizeForEditing - In the implementation block
@property (nonatomic,retain) NTKChronoUpperSubDial * upperSubdial;              //@synthesize upperSubdial=_upperSubdial - In the implementation block
@property (nonatomic,retain) NTKChronoLowerSubDial * lowerSubdial;              //@synthesize lowerSubdial=_lowerSubdial - In the implementation block
@property (nonatomic,readonly) NTKChronoPalette * palette;                      //@synthesize palette=_palette - In the implementation block
@property (nonatomic,readonly) unsigned long long timeScale;                    //@synthesize timeScale=_timeScale - In the implementation block
@property (nonatomic,readonly) SKEffectNode * chronoMode;                       //@synthesize chronoMode=_chronoMode - In the implementation block
@property (nonatomic,readonly) SKEffectNode * timeMode;                         //@synthesize timeMode=_timeMode - In the implementation block
-(unsigned long long)timeScale;
-(NTKChronoPalette *)palette;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(double)_backgroundAlphaForEditMode:(long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 forDevice:(id)arg2 ;
-(id)scrubbingObscuredCollectionNodes;
-(void)applyPalette:(id)arg1 fully:(BOOL)arg2 ;
-(void)applyTimeScale:(unsigned long long)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3 ;
-(void)fadeInLowerSubdialAnimated:(BOOL)arg1 ;
-(void)showTimeModeAnimated:(BOOL)arg1 ;
-(void)fadeOutLowerSubdialAnimated:(BOOL)arg1 ;
-(void)showChronoModeAnimated:(BOOL)arg1 ;
-(id)auxiliaryScrubbingObscuredNodes;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 ;
-(id)activeVariantNodes;
-(id)_createDensityVariantWitElements:(id)arg1 parent:(id)arg2 hidden:(BOOL)arg3 ;
-(id)_chronoVariantForTimeScale:(unsigned long long)arg1 ;
-(void)updateUpperDial;
-(void)setRegularDeviceLowerDialLabelPositions;
-(id)_nameFromTimeScale:(unsigned long long)arg1 ;
-(double)timeScaleLabelPositionFromTimeScale:(unsigned long long)arg1 ;
-(void)updateTimeScaleLabelWithTimeScale:(unsigned long long)arg1 ;
-(BOOL)_getTicks:(id*)arg1 labels:(id*)arg2 otherNodes:(id*)arg3 fromParentNode:(id)arg4 ;
-(void)hideMode:(id)arg1 animate:(BOOL)arg2 ;
-(void)showMode:(id)arg1 animate:(BOOL)arg2 ;
-(void)fadeTimeScaleLabelWithMode:(id)arg1 ;
-(void)setCurrentMode:(id)arg1 animate:(BOOL)arg2 ;
-(NTKChronoUpperSubDial *)upperSubdial;
-(void)ensureTimeScaleTransitionHasCompleted;
-(void)updateTimeScaleLabel;
-(void)transitionTimeScaleLabelWithFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3 ;
-(void)transitionWith:(double)arg1 fromMode60:(id)arg2 toMode30:(id)arg3 ;
-(void)transitionWith:(double)arg1 fromMode30:(id)arg2 toMode6:(id)arg3 ;
-(void)transitionWith:(double)arg1 fromMode6:(id)arg2 toMode3:(id)arg3 ;
-(NTKChronoLowerSubDial *)lowerSubdial;
-(void)_applyPalette:(id)arg1 toVariantNode:(id)arg2 ;
-(id)_localizedStringForTimeScaleSeconds:(unsigned long long)arg1 ;
-(BOOL)isTimeMode;
-(double)_subdialAlphaForEditMode:(long long)arg1 ;
-(BOOL)_showTimeForEditMode:(long long)arg1 ;
-(void)setRasterizeForEditing:(BOOL)arg1 ;
-(id)_addChronoVariantWithElements:(id)arg1 forTimeScale:(unsigned long long)arg2 ;
-(id)timeScaleName;
-(double)timeScaleLabelPosition;
-(void)setUpperSubdial:(NTKChronoUpperSubDial *)arg1 ;
-(void)setLowerSubdial:(NTKChronoLowerSubDial *)arg1 ;
-(SKEffectNode *)chronoMode;
-(SKEffectNode *)timeMode;
-(BOOL)rasterizeForEditing;
@end

