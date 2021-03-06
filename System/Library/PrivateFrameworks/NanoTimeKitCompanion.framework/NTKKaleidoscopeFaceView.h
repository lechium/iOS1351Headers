/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>
#import <libobjc.A.dylib/NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate.h>
#import <libobjc.A.dylib/CLKUIQuadViewDelegate.h>
#import <libobjc.A.dylib/CLKUIResourceProviderDelegate.h>

@class CLKUIQuadView, NTKRoundedCornerOverlayView, NTKColorCircularUtilitarianFaceViewComplicationFactory, UIColor, CLKUITexture, UIImage, NTKPhoto, NSString, NTKKaleidoscopePathfinder, CLKUIResourceProviderKey, NSMapTable, NSMutableSet;

@interface NTKKaleidoscopeFaceView : NTKAnalogFaceView <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate> {

	CLKUIQuadView* _quadView;
	NTKRoundedCornerOverlayView* _cornerView;
	NTKColorCircularUtilitarianFaceViewComplicationFactory* _faceViewComplicationFactory;
	double _crownOffset;
	unsigned _frameCounter;
	double _contentScale;
	UIColor* _complicationColor;
	UIColor* _complicationPlatterColor;
	double _lastComplicationUpdateTime;
	CGColorSpaceRef _extendedSRGBcolorSpace;
	CLKUITexture* _userTextureLuma;
	CLKUITexture* _userTextureChroma;
	UIImage* _userSwatch;
	UIImage* _userImage;
	NTKPhoto* _userPhoto;
	NSString* _userUuidLuma;
	NSString* _userUuidChroma;
	NTKKaleidoscopePathfinder* _userPathfinder;
	CLKUIResourceProviderKey* _resourceProviderKey;
	float _crownTurnsPerRotation;
	double _dayDuration;
	NSMapTable* _quadPathfinderMapTable;
	NSMutableSet* _loadedAssets;
	unsigned long long _currentAsset;
	unsigned long long _currentStyle;

}

@property (assign,nonatomic) unsigned long long currentAsset;              //@synthesize currentAsset=_currentAsset - In the implementation block
@property (assign,nonatomic) unsigned long long currentStyle;              //@synthesize currentStyle=_currentStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
-(void)dealloc;
-(void)setCurrentStyle:(unsigned long long)arg1 ;
-(unsigned long long)currentStyle;
-(void)setCurrentAsset:(unsigned long long)arg1 ;
-(unsigned long long)currentAsset;
-(id)resourceProviderKey;
-(void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2 ;
-(id)provideAtlasBacking:(id)arg1 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(void)_applyDataMode;
-(void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_applyFrozen;
-(void)_updateForResourceDirectoryChange:(id)arg1 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)_configureTimeView:(id)arg1 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(double)_handAlphaForEditMode:(long long)arg1 ;
-(double)_contentAlphaForEditMode:(long long)arg1 ;
-(double)_complicationAlphaForEditMode:(long long)arg1 ;
-(BOOL)_slotSupportsCurvedText:(id)arg1 ;
-(id)_pickerMaskForSlot:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(void)_curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(BOOL)_wantsConstantSpeedZoom;
-(BOOL)slotUsesCurvedText:(id)arg1 ;
-(CGPoint)_contentCenterOffset;
-(BOOL)_supportsUnadornedSnapshot;
-(double)_contentScaleForEditMode:(long long)arg1 ;
-(void)_disableCrown;
-(void)_enableCrown;
-(void)_updateDayDuration;
-(void)_updateWithAsset:(unsigned long long)arg1 ;
-(float)_crownTurnsForStyle:(unsigned long long)arg1 ;
-(void)_loadCurrentQuad;
-(id)_quadWithStyle:(unsigned long long)arg1 asset:(unsigned long long)arg2 ;
-(double)_kaleidoscopeTimeForAsset:(unsigned long long)arg1 ;
-(void)_updatePathForTime:(double)arg1 ;
-(void)_updateComplications;
-(void)_updateUserContent;
-(void)_updateRotationForQuadView:(id)arg1 time:(double)arg2 crownOffset:(double)arg3 ;
-(BOOL)_isEditOptionFullscreen:(id)arg1 ;
-(id)_swatchFromUserImage;
-(id)_updatePathForQuadView:(id)arg1 time:(double)arg2 crownOffset:(double)arg3 ;
-(id)_imageForAsset:(unsigned long long)arg1 ;
-(id)_textureLumaForAsset:(unsigned long long)arg1 ;
-(id)_textureChromaForAsset:(unsigned long long)arg1 ;
-(id)_pathfinderForAsset:(unsigned long long)arg1 ;
-(id)_swatchForAsset:(unsigned long long)arg1 ;
-(id)_snapshotWithAsset:(unsigned long long)arg1 style:(unsigned long long)arg2 size:(CGSize)arg3 ;
@end

