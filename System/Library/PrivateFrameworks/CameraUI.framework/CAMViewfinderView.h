/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CEKBadgeViewDelegate.h>
#import <libobjc.A.dylib/CAMInstructionLabelDelegate.h>
#import <libobjc.A.dylib/CAMViewfinderTransitionable.h>

@protocol CAMControlVisibilityDelegate;
@class CAMPreviewView, CAMTopBar, CAMBottomBar, CUShutterButton, CAMFlipButton, NSArray, CAMFlashBadge, CAMHDRBadge, CAMFocusLockBadge, CAMLivePhotoBadge, CAMShallowDepthOfFieldBadge, CAMPortraitModeInstructionLabel, CAMPortraitModeDescriptionOverlayView, CAMQRCodeInstructionLabel, CAMFilterNameBadge, CAMShutterIndicatorView, CAMElapsedTimeView, CAMFramerateIndicatorView, CAMBurstIndicatorView, CAMTimerIndicatorView, CAMPanoramaView, CAMZoomSlider, CAMZoomControl, CEKLightingControl, CEKLightingNameBadge, CAMDisabledModeOverlayView, CAMPreviewContainerMaskingView, UIView, CAMViewfinderOpenAndCloseTransition, CAMViewfinderFlipTransition, NSString;

@interface CAMViewfinderView : UIView <CEKBadgeViewDelegate, CAMInstructionLabelDelegate, CAMViewfinderTransitionable> {

	BOOL _useCreativeControls;
	BOOL _automaticallyAdjustsTopBarOrientation;
	long long _layoutStyle;
	id<CAMControlVisibilityDelegate> _visibilityDelegate;
	CAMPreviewView* _previewView;
	CAMTopBar* _topBar;
	CAMBottomBar* _bottomBar;
	CUShutterButton* _shutterButton;
	CAMFlipButton* _flipButton;
	NSArray* _visibleTopBadges;
	CAMFlashBadge* _flashBadge;
	CAMHDRBadge* _HDRBadge;
	CAMFocusLockBadge* _focusAndExposureLockBadge;
	CAMLivePhotoBadge* _livePhotoBadge;
	CAMShallowDepthOfFieldBadge* _shallowDepthOfFieldBadge;
	CAMPortraitModeInstructionLabel* _portraitModeInstructionLabel;
	CAMPortraitModeDescriptionOverlayView* _portraitModeDescriptionOverlayView;
	CAMQRCodeInstructionLabel* _qrCodeInstructionLabel;
	CAMFilterNameBadge* _filterNameBadge;
	CAMShutterIndicatorView* _shutterIndicatorView;
	CAMElapsedTimeView* _elapsedTimeView;
	CAMFramerateIndicatorView* _framerateIndicatorView;
	CAMBurstIndicatorView* _burstIndicatorView;
	CAMTimerIndicatorView* _timerIndicatorView;
	CAMPanoramaView* _panoramaView;
	long long _previewViewOrientation;
	CAMZoomSlider* _zoomSlider;
	CAMZoomControl* _zoomControl;
	CEKLightingControl* _lightingControl;
	CEKLightingNameBadge* _lightingNameBadge;
	CAMDisabledModeOverlayView* _disabledModeOverlayView;
	long long _desiredAspectRatio;
	long long _maskingAspectRatio;
	long long _orientation;
	CAMPreviewContainerMaskingView* __previewContainerMaskingView;
	UIView* __previewContainerView;
	CAMViewfinderOpenAndCloseTransition* __openAndCloseTransition;
	CAMViewfinderFlipTransition* __flipTransition;
	UIView* __topBarExtensionView;
	UIView* __bottomBarExtensionView;

}

@property (nonatomic,readonly) CAMPreviewContainerMaskingView * _previewContainerMaskingView;                                               //@synthesize _previewContainerMaskingView=__previewContainerMaskingView - In the implementation block
@property (nonatomic,readonly) UIView * _previewContainerView;                                                                              //@synthesize _previewContainerView=__previewContainerView - In the implementation block
@property (setter=_setOpenAndCloseTransition:,nonatomic,retain) CAMViewfinderOpenAndCloseTransition * _openAndCloseTransition;              //@synthesize _openAndCloseTransition=__openAndCloseTransition - In the implementation block
@property (setter=_setFlipTransition:,nonatomic,retain) CAMViewfinderFlipTransition * _flipTransition;                                      //@synthesize _flipTransition=__flipTransition - In the implementation block
@property (setter=_setTopBarExtensionView:,nonatomic,retain) UIView * _topBarExtensionView;                                                 //@synthesize _topBarExtensionView=__topBarExtensionView - In the implementation block
@property (setter=_setBottomBarExtensionView:,nonatomic,retain) UIView * _bottomBarExtensionView;                                           //@synthesize _bottomBarExtensionView=__bottomBarExtensionView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                                                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL useCreativeControls;                                                                                      //@synthesize useCreativeControls=_useCreativeControls - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlVisibilityDelegate> visibilityDelegate;                                                    //@synthesize visibilityDelegate=_visibilityDelegate - In the implementation block
@property (nonatomic,retain) CAMPreviewView * previewView;                                                                                  //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) CAMTopBar * topBar;                                                                                            //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,retain) CAMBottomBar * bottomBar;                                                                                      //@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,retain) CUShutterButton * shutterButton;                                                                               //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                                    //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) NSArray * visibleTopBadges;                                                                                    //@synthesize visibleTopBadges=_visibleTopBadges - In the implementation block
@property (nonatomic,retain) CAMFlashBadge * flashBadge;                                                                                    //@synthesize flashBadge=_flashBadge - In the implementation block
@property (nonatomic,retain) CAMHDRBadge * HDRBadge;                                                                                        //@synthesize HDRBadge=_HDRBadge - In the implementation block
@property (nonatomic,retain) CAMFocusLockBadge * focusAndExposureLockBadge;                                                                 //@synthesize focusAndExposureLockBadge=_focusAndExposureLockBadge - In the implementation block
@property (nonatomic,retain) CAMLivePhotoBadge * livePhotoBadge;                                                                            //@synthesize livePhotoBadge=_livePhotoBadge - In the implementation block
@property (nonatomic,retain) CAMShallowDepthOfFieldBadge * shallowDepthOfFieldBadge;                                                        //@synthesize shallowDepthOfFieldBadge=_shallowDepthOfFieldBadge - In the implementation block
@property (nonatomic,retain) CAMPortraitModeInstructionLabel * portraitModeInstructionLabel;                                                //@synthesize portraitModeInstructionLabel=_portraitModeInstructionLabel - In the implementation block
@property (nonatomic,retain) CAMPortraitModeDescriptionOverlayView * portraitModeDescriptionOverlayView;                                    //@synthesize portraitModeDescriptionOverlayView=_portraitModeDescriptionOverlayView - In the implementation block
@property (nonatomic,retain) CAMQRCodeInstructionLabel * qrCodeInstructionLabel;                                                            //@synthesize qrCodeInstructionLabel=_qrCodeInstructionLabel - In the implementation block
@property (nonatomic,retain) CAMFilterNameBadge * filterNameBadge;                                                                          //@synthesize filterNameBadge=_filterNameBadge - In the implementation block
@property (nonatomic,retain) CAMShutterIndicatorView * shutterIndicatorView;                                                                //@synthesize shutterIndicatorView=_shutterIndicatorView - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                                                                          //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CAMFramerateIndicatorView * framerateIndicatorView;                                                            //@synthesize framerateIndicatorView=_framerateIndicatorView - In the implementation block
@property (nonatomic,retain) CAMBurstIndicatorView * burstIndicatorView;                                                                    //@synthesize burstIndicatorView=_burstIndicatorView - In the implementation block
@property (nonatomic,retain) CAMTimerIndicatorView * timerIndicatorView;                                                                    //@synthesize timerIndicatorView=_timerIndicatorView - In the implementation block
@property (nonatomic,retain) CAMPanoramaView * panoramaView;                                                                                //@synthesize panoramaView=_panoramaView - In the implementation block
@property (assign,nonatomic) long long previewViewOrientation;                                                                              //@synthesize previewViewOrientation=_previewViewOrientation - In the implementation block
@property (nonatomic,retain) CAMZoomSlider * zoomSlider;                                                                                    //@synthesize zoomSlider=_zoomSlider - In the implementation block
@property (nonatomic,retain) CAMZoomControl * zoomControl;                                                                                  //@synthesize zoomControl=_zoomControl - In the implementation block
@property (nonatomic,retain) CEKLightingControl * lightingControl;                                                                          //@synthesize lightingControl=_lightingControl - In the implementation block
@property (nonatomic,retain) CEKLightingNameBadge * lightingNameBadge;                                                                      //@synthesize lightingNameBadge=_lightingNameBadge - In the implementation block
@property (nonatomic,retain) CAMDisabledModeOverlayView * disabledModeOverlayView;                                                          //@synthesize disabledModeOverlayView=_disabledModeOverlayView - In the implementation block
@property (assign,nonatomic) long long desiredAspectRatio;                                                                                  //@synthesize desiredAspectRatio=_desiredAspectRatio - In the implementation block
@property (assign,nonatomic) long long maskingAspectRatio;                                                                                  //@synthesize maskingAspectRatio=_maskingAspectRatio - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustsTopBarOrientation;                                                                    //@synthesize automaticallyAdjustsTopBarOrientation=_automaticallyAdjustsTopBarOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id)initWithCoder:(id)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(CAMPreviewView *)previewView;
-(void)setPreviewView:(CAMPreviewView *)arg1 ;
-(CUShutterButton *)shutterButton;
-(UIView *)_previewContainerView;
-(void)setShutterButton:(CUShutterButton *)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(CAMViewfinderFlipTransition *)_flipTransition;
-(void)setTopBar:(CAMTopBar *)arg1 ;
-(CAMTopBar *)topBar;
-(void)setBottomBar:(CAMBottomBar *)arg1 ;
-(CAMBottomBar *)bottomBar;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg1 ;
-(CEKLightingControl *)lightingControl;
-(CAMFlipButton *)flipButton;
-(CAMElapsedTimeView *)elapsedTimeView;
-(CEKLightingNameBadge *)lightingNameBadge;
-(CAMFilterNameBadge *)filterNameBadge;
-(CAMQRCodeInstructionLabel *)qrCodeInstructionLabel;
-(CAMPanoramaView *)panoramaView;
-(CAMZoomControl *)zoomControl;
-(CAMZoomSlider *)zoomSlider;
-(long long)previewViewOrientation;
-(void)removeInflightBlurAnimations;
-(void)prepareForResumingUsingCrossfade;
-(void)instructionLabelDidChangeIntrinsicContentSize:(id)arg1 ;
-(long long)desiredAspectRatio;
-(void)setPanoramaView:(CAMPanoramaView *)arg1 ;
-(void)setPreviewViewOrientation:(long long)arg1 ;
-(void)_layoutShutterButtonForLayoutStyle:(long long)arg1 ;
-(void)_layoutFlipButtonForLayoutStyle:(long long)arg1 ;
-(void)setFlipButton:(CAMFlipButton *)arg1 ;
-(CAMViewfinderOpenAndCloseTransition *)_openAndCloseTransition;
-(void)_setOpenAndCloseTransition:(id)arg1 ;
-(void)_setFlipTransition:(id)arg1 ;
-(void)setDesiredAspectRatio:(long long)arg1 ;
-(void)setMaskingAspectRatio:(long long)arg1 ;
-(void)setVisibilityDelegate:(id<CAMControlVisibilityDelegate>)arg1 ;
-(void)setUseCreativeControls:(BOOL)arg1 ;
-(void)setMaskingAspectRatio:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setAutomaticallyAdjustsTopBarOrientation:(BOOL)arg1 ;
-(void)setHDRBadge:(CAMHDRBadge *)arg1 ;
-(void)setElapsedTimeView:(CAMElapsedTimeView *)arg1 ;
-(void)setFramerateIndicatorView:(CAMFramerateIndicatorView *)arg1 ;
-(void)setFlashBadge:(CAMFlashBadge *)arg1 ;
-(void)setFocusAndExposureLockBadge:(CAMFocusLockBadge *)arg1 ;
-(void)setLivePhotoBadge:(CAMLivePhotoBadge *)arg1 ;
-(void)setShallowDepthOfFieldBadge:(CAMShallowDepthOfFieldBadge *)arg1 ;
-(void)setPortraitModeInstructionLabel:(CAMPortraitModeInstructionLabel *)arg1 ;
-(void)setQrCodeInstructionLabel:(CAMQRCodeInstructionLabel *)arg1 ;
-(void)setPortraitModeDescriptionOverlayView:(CAMPortraitModeDescriptionOverlayView *)arg1 ;
-(void)setBurstIndicatorView:(CAMBurstIndicatorView *)arg1 ;
-(void)setTimerIndicatorView:(CAMTimerIndicatorView *)arg1 ;
-(void)setZoomSlider:(CAMZoomSlider *)arg1 ;
-(void)setZoomControl:(CAMZoomControl *)arg1 ;
-(void)setFilterNameBadge:(CAMFilterNameBadge *)arg1 ;
-(void)setLightingControl:(CEKLightingControl *)arg1 ;
-(void)setLightingNameBadge:(CEKLightingNameBadge *)arg1 ;
-(NSArray *)visibleTopBadges;
-(void)setVisibleTopBadges:(id)arg1 animated:(BOOL)arg2 ;
-(CAMLivePhotoBadge *)livePhotoBadge;
-(void)prepareForAutorotation;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 forAspectRatio:(long long)arg2 ;
-(void)setDisabledModeOverlayView:(CAMDisabledModeOverlayView *)arg1 ;
-(CAMDisabledModeOverlayView *)disabledModeOverlayView;
-(void)_commonCAMViewfinderViewInitializationWithLayoutStyle:(long long)arg1 ;
-(double)_multiplierForAspectRatio:(long long)arg1 ;
-(UIEdgeInsets)_layoutMarginInsetsForLayoutStyle:(long long)arg1 ;
-(void)_updateBarExtensionViewsIfNecessary;
-(double)_interpolatedTopBarHeight;
-(BOOL)_isAdjustingTopBarOrientationForLayoutStyle:(long long)arg1 ;
-(void)_topBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(BOOL)arg2 bounds:(CGRect*)arg3 center:(CGPoint*)arg4 transform:(CGAffineTransform*)arg5 ;
-(BOOL)useCreativeControls;
-(void)_cameraTopBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(BOOL)arg2 bounds:(CGRect*)arg3 center:(CGPoint*)arg4 transform:(CGAffineTransform*)arg5 ;
-(CGSize)_topBarSizeForLayoutStyle:(long long)arg1 ;
-(BOOL)automaticallyAdjustsTopBarOrientation;
-(double)_interpolatedBottomBarWidthWithProposedWidth:(double)arg1 ;
-(double)_interpolatedBottomBarHeightWithProposedHeight:(double)arg1 ;
-(BOOL)_wantsFullScreenPreviewRegardlessOfLayoutForLayoutStyle:(long long)arg1 ;
-(BOOL)_wantsInterfaceOrientedPreviewForLayoutStyle:(long long)arg1 ;
-(CGSize)_previewSizeForAspectRatio:(long long)arg1 ;
-(CGRect)_cameraPreviewFrameForAspectRatio:(long long)arg1 topBarFrame:(CGRect)arg2 bottomBarFrame:(CGRect)arg3 shouldShiftPreviewForUtilityBar:(BOOL)arg4 ;
-(double)_badgeTrayHeightForLayoutStyle:(long long)arg1 ;
-(CAMPreviewContainerMaskingView *)_previewContainerMaskingView;
-(CAMShutterIndicatorView *)shutterIndicatorView;
-(double)_interpolatedVerticalOffsetForShutterIndicator;
-(CAMBurstIndicatorView *)burstIndicatorView;
-(id<CAMControlVisibilityDelegate>)visibilityDelegate;
-(CAMTimerIndicatorView *)timerIndicatorView;
-(CAMFramerateIndicatorView *)framerateIndicatorView;
-(void)_layoutTopBadgesForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(BOOL)arg4 ;
-(void)_layoutBadgeTrayForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(BOOL)arg4 ;
-(void)_layoutBadgeForTinyLayoutStyle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_layoutBottomCenteredView:(id)arg1 aboveView:(id)arg2 aboveViewSpacing:(double)arg3 forLayoutStyle:(long long)arg4 ;
-(BOOL)_shouldLayoutPortraitInstructionsAtTop;
-(CAMPortraitModeInstructionLabel *)portraitModeInstructionLabel;
-(void)_layoutInstructionLabelOnTop:(id)arg1 forLayoutStyle:(long long)arg2 ;
-(void)_layoutBadgeTrayWithBadges:(id)arg1 layoutStyle:(long long)arg2 ;
-(id)_viewToLayoutBadgesBelowForLayoutStyle:(long long)arg1 orientation:(long long)arg2 ;
-(void)_previewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(BOOL)arg2 outPreviewBounds:(CGRect*)arg3 outPreviewCenter:(CGPoint*)arg4 outFourThreeTopBarFrame:(CGRect*)arg5 outBottomBarFrame:(CGRect*)arg6 ;
-(long long)maskingAspectRatio;
-(CGRect)_previewFrameForAspectRatio:(long long)arg1 topBarFrame:(CGRect)arg2 bottomBarFrame:(CGRect)arg3 shouldShiftPreviewForUtilityBar:(BOOL)arg4 ;
-(CGRect)_frameForBadgeTrayForLayoutStyle:(long long)arg1 orientation:(long long)arg2 ;
-(double)_utilityBarExtensionDistanceForLayoutStyle:(long long)arg1 ;
-(void)_layoutTopBarForLayoutStyle:(long long)arg1 ;
-(void)_layoutBarExtensionViews;
-(void)_layoutElapsedTimeViewForLayoutStyle:(long long)arg1 ;
-(void)_layoutShutterIndicatorForLayoutStyle:(long long)arg1 ;
-(void)_layoutBurstIndicatorForLayoutStyle:(long long)arg1 ;
-(void)_layoutTimerIndicatorViewForLayoutStyle:(long long)arg1 ;
-(void)_layoutFramerateIndicatorViewForLayoutStyle:(long long)arg1 ;
-(void)_layoutPanoramaViewForLayoutStyle:(long long)arg1 ;
-(void)_layoutSnapshotsOfPreviewView;
-(void)_layoutLightingControlForLayoutStyle:(long long)arg1 ;
-(CAMPortraitModeDescriptionOverlayView *)portraitModeDescriptionOverlayView;
-(void)_layoutDescriptionOverlayView:(id)arg1 ;
-(void)_layoutPortraitModeInstructionLabelForLayoutStyle:(long long)arg1 ;
-(void)_layoutQRCodeInstructionLabelForLayoutStyle:(long long)arg1 ;
-(void)_layoutTopBadgesForLayoutStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_layoutBottomBadgesForLayoutStyle:(long long)arg1 ;
-(void)_layoutZoomSliderForLayoutStyle:(long long)arg1 ;
-(void)_layoutZoomControlForLayoutStyle:(long long)arg1 ;
-(UIOffset)_previewOffset;
-(void)_cameraAppPreviewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(BOOL)arg2 outPreviewBounds:(CGRect*)arg3 outPreviewCenter:(CGPoint*)arg4 outFourThreeTopBarFrame:(CGRect*)arg5 outBottomBarFrame:(CGRect*)arg6 ;
-(CGSize)_bottomBarSizeForLayoutStyle:(long long)arg1 withProposedSize:(CGSize)arg2 ;
-(void)_enforceBadgeSubviewOrderingWithAppearingBadges:(id)arg1 ;
-(void)_createPlaceholderSnapshotAndPerformDoubleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 fadeInDuration:(double)arg4 fadeInDelay:(double)arg5 ;
-(void)_createPlaceholderSnapshotAndPerformSingleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 ;
-(void)setShutterIndicatorView:(CAMShutterIndicatorView *)arg1 ;
-(void)setVisibleTopBadges:(NSArray *)arg1 ;
-(CAMFlashBadge *)flashBadge;
-(CAMHDRBadge *)HDRBadge;
-(CAMFocusLockBadge *)focusAndExposureLockBadge;
-(CAMShallowDepthOfFieldBadge *)shallowDepthOfFieldBadge;
-(UIView *)_topBarExtensionView;
-(void)_setTopBarExtensionView:(id)arg1 ;
-(UIView *)_bottomBarExtensionView;
-(void)_setBottomBarExtensionView:(id)arg1 ;
@end

