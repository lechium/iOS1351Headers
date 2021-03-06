/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NTKFaceEditViewDelegate.h>
#import <libobjc.A.dylib/NTKComplicationPickerViewDataSource.h>
#import <libobjc.A.dylib/CLKSensitiveUIStateObserver.h>
#import <libobjc.A.dylib/NTKClockIconZoomAnimator.h>
#import <libobjc.A.dylib/NTKClockHardwareInput.h>
#import <libobjc.A.dylib/NTKFaceViewDelegate.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>

@protocol OS_dispatch_source, NTKFaceViewControllerDelegate, NTKClockStatusBarViewController;
@class NTKFaceView, NSMutableDictionary, NTKFaceEditView, NSCache, NTKDelayedBlock, UIView, NSDate, NSObject, NTKComplicationDisplayWrapperView, NTKComplicationController, NSString, UIViewController, NTKFace;

@interface NTKFaceViewController : UIViewController <NTKFaceEditViewDelegate, NTKComplicationPickerViewDataSource, CLKSensitiveUIStateObserver, NTKClockIconZoomAnimator, NTKClockHardwareInput, NTKFaceViewDelegate, NTKFaceObserver> {

	NTKFaceView* _faceView;
	os_unfair_lock_s _normalComplicationControllersLock;
	NSMutableDictionary* _normalComplicationControllers;
	os_unfair_lock_s _detachedComplicationControllersLock;
	NSMutableDictionary* _detachedComplicationControllers;
	NTKFaceEditView* _editView;
	BOOL _editingComplications;
	NSCache* _appearanceVariantsCache;
	NSCache* _informationVariantsCache;
	BOOL _frozen;
	BOOL _becomeLiveOnUnfreeze;
	NTKDelayedBlock* _delayedFreezeBlock;
	BOOL _readyToApplyConfiguration;
	BOOL _animatingVariant;
	BOOL _newValueWhileAnimating;
	unsigned long long _delayedAnimationValue;
	BOOL _deviceLocked;
	BOOL _sensitiveUIHidden;
	UIView* _zoomingIconCircleView;
	UIView* _zoomingIconTimeView;
	UIView* _zoomingContainerView;
	NSDate* _scrubDate;
	NSObject*<OS_dispatch_source> _time_travel_update_timer;
	NTKComplicationDisplayWrapperView* _pptComplicationDisplay;
	NTKComplicationController* _pptComplicationController;
	BOOL _wantsRemoveUnadorned;
	BOOL _hasGoneLive;
	BOOL _hasUsedUnadornedSnapshot;
	BOOL _hasRemovedUnadornedSnapshot;
	NSString* _lastTappedSlotIdentifier;
	CGRect _faceLaunchRect;
	BOOL _shouldShowSnapshot;
	BOOL _supressesNonSnapshotUI;
	BOOL _showsCanonicalContent;
	BOOL _showContentForUnadornedSnapshot;
	BOOL _ignoreSnapshotImages;
	BOOL _showsLockedUI;
	id<NTKFaceViewControllerDelegate> _delegate;
	long long _dataMode;
	NSDate* _pauseDate;
	UIViewController*<NTKClockStatusBarViewController> _statusBarViewController;
	NTKFace* _face;

}

@property (assign,nonatomic,__weak) id<NTKFaceViewControllerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSnapshot;                                                                 //@synthesize shouldShowSnapshot=_shouldShowSnapshot - In the implementation block
@property (assign,nonatomic) BOOL supressesNonSnapshotUI;                                                             //@synthesize supressesNonSnapshotUI=_supressesNonSnapshotUI - In the implementation block
@property (assign,nonatomic) long long dataMode;                                                                      //@synthesize dataMode=_dataMode - In the implementation block
@property (nonatomic,retain) NSDate * pauseDate;                                                                      //@synthesize pauseDate=_pauseDate - In the implementation block
@property (assign,nonatomic) BOOL showsCanonicalContent;                                                              //@synthesize showsCanonicalContent=_showsCanonicalContent - In the implementation block
@property (assign,nonatomic) BOOL showContentForUnadornedSnapshot;                                                    //@synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot - In the implementation block
@property (assign,nonatomic) BOOL ignoreSnapshotImages;                                                               //@synthesize ignoreSnapshotImages=_ignoreSnapshotImages - In the implementation block
@property (assign,nonatomic) BOOL showsLockedUI;                                                                      //@synthesize showsLockedUI=_showsLockedUI - In the implementation block
@property (nonatomic,retain) UIViewController*<NTKClockStatusBarViewController> statusBarViewController;              //@synthesize statusBarViewController=_statusBarViewController - In the implementation block
@property (nonatomic,readonly) NTKFace * face;                                                                        //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) NTKFaceView * faceView;                                                                //@synthesize faceView=_faceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)_complicationPickerAlphaForTransitionFraction:(double)arg1 ;
+(id)_createNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2 face:(id)arg3 faceView:(id)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(id<NTKFaceViewControllerDelegate>)delegate;
-(void)setDelegate:(id<NTKFaceViewControllerDelegate>)arg1 ;
-(void)freeze;
-(NTKFace *)face;
-(void)loadView;
-(BOOL)becomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)unfreeze;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(void)prepareForSnapshotting;
-(long long)dataMode;
-(void)setDataMode:(long long)arg1 ;
-(void)sensitiveUIStateChanged;
-(NTKFaceView *)faceView;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)faceViewWantsToPresentViewController:(id)arg1 ;
-(id)faceViewComplicationAppIdentifierForSlot:(id)arg1 ;
-(id)faceViewComplicationForSlot:(id)arg1 ;
-(BOOL)showsCanonicalContent;
-(BOOL)showsLockedUI;
-(void)faceViewWantsComplicationKeylineFramesReloaded;
-(void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(BOOL)arg2 ;
-(void)cleanupAfterZoom;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(BOOL)faceViewComplicationIsEmptyForSlot:(id)arg1 ;
-(BOOL)showContentForUnadornedSnapshot;
-(void)faceViewDidChangeWantsStatusBarIconShadow;
-(void)faceViewDidChangePaddingForStatusBar;
-(void)faceViewRequestedLaunchFromRect:(CGRect)arg1 ;
-(void)setShowsCanonicalContent:(BOOL)arg1 ;
-(void)_handleDeviceLockChange;
-(void)_faceSnapshotDidChange:(id)arg1 ;
-(void)configureWithDuration:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateComplicationControllersAndDisplaysWithBlock:(/*^block*/id)arg1 ;
-(void)_setFaceViewResourceDirectoryFromFace;
-(void)_loadInitialComplicationVisibilityFromFace;
-(BOOL)_shouldHideFaceUI;
-(void)_handleStatusBarChange;
-(void)_ensureNotLive;
-(void)prepareForOrb;
-(void)cleanupAfterOrb:(BOOL)arg1 ;
-(void)_applyConfigurationWithDuration:(double)arg1 ;
-(id)blurSourceImage;
-(void)_setDataMode:(long long)arg1 becomeLiveOnUnfreeze:(BOOL)arg2 ;
-(void)_ensurePauseDate;
-(id)_dailySnapshot;
-(id)_unadornedSnapshot;
-(void)setShowContentForUnadornedSnapshot:(BOOL)arg1 ;
-(void)setShowsLockedUI:(BOOL)arg1 ;
-(BOOL)dailySnapshotShowsComplication:(id)arg1 forSlot:(id)arg2 ;
-(void)_ensureComplication:(id)arg1 forSlot:(id)arg2 ;
-(void)_removeComplicationForSlot:(id)arg1 ;
-(void)_removeDetachedComplicationForSlot:(id)arg1 andDisconnectDisplay:(BOOL)arg2 ;
-(void)_ensureDetachedComplication:(id)arg1 ;
-(void)setPauseDate:(NSDate *)arg1 ;
-(void)_updateInteractivityOfComplicationDisplays;
-(void)hideFaceEditingUIAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setupEditViewForComplications;
-(void)_setupEditViewForCustomEditMode:(long long)arg1 ;
-(void)_updateFaceAndViewWithOption:(id)arg1 forMode:(long long)arg2 resourcePath:(id)arg3 slot:(id)arg4 ;
-(id)_selectedVisibleSlotForEditMode:(long long)arg1 ;
-(id)_keylineLabelTextForOption:(id)arg1 customEditMode:(long long)arg2 ;
-(void)_configureLisaForSelectedSlot:(id)arg1 editMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_transitionFraction:(double)arg1 fromValue:(long long)arg2 toValue:(long long)arg3 forEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_endTransitionToValue:(long long)arg1 forEditMode:(long long)arg2 ;
-(void)_setupEditViewForHiddenComplications;
-(void)_ensureNormalComplication:(id)arg1 forSlot:(id)arg2 ;
-(id)_ensurePickerViewForSlot:(id)arg1 ;
-(void)_configureViewsForSelectedSlot:(id)arg1 editMode:(long long)arg2 ;
-(void)_insertNormalComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3 ;
-(id)_deactivatePickerViewForSlot:(id)arg1 ;
-(BOOL)_shouldShowComplicationPickerForSlot:(id)arg1 ;
-(void)_updateComplicationLisaGesture;
-(void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)ignoreSnapshotImages;
-(id)_controllerForComplication:(id)arg1 slot:(id)arg2 ;
-(id)_newNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2 ;
-(void)_clearFaceLaunchRect;
-(void)_clearLastTappedComplication;
-(void)prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_defaultPrepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_defaultSetZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_defaultCleanupAfterZoom;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(void)_showStatusBarAfterWake;
-(void)handleWristRaiseScreenWake;
-(void)handleOrdinaryScreenWake;
-(void)handleScreenBlanked;
-(UIViewController*<NTKClockStatusBarViewController>)statusBarViewController;
-(void)_removeNormalComplicationForSlot:(id)arg1 andDisconnectDisplay:(BOOL)arg2 ;
-(void)_insertDetachedComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3 ;
-(void)_wrapperViewTapped:(id)arg1 ;
-(void)_configureBackgroundFillAlpha:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)editViewWillBeginScrolling:(id)arg1 ;
-(void)editView:(id)arg1 didStopAtEditMode:(long long)arg2 ;
-(void)editView:(id)arg1 didScrollToFraction:(double)arg2 fromEditMode:(long long)arg3 toEditMode:(long long)arg4 ;
-(void)editView:(id)arg1 keylineDidBreathe:(double)arg2 forKey:(id)arg3 editMode:(long long)arg4 ;
-(void)editView:(id)arg1 keylineDidRubberBand:(double)arg2 forKey:(id)arg3 editMode:(long long)arg4 ;
-(void)editView:(id)arg1 didTapKeylineForKey:(id)arg2 editMode:(long long)arg3 ;
-(BOOL)editViewShouldShowPageDotsOnBottom:(id)arg1 ;
-(void)complicationPickerView:(id)arg1 getDisplay:(id*)arg2 controller:(id*)arg3 forComplication:(id)arg4 ;
-(id)complicationPickerView:(id)arg1 layoutRuleForComplicationDisplay:(id)arg2 ;
-(id)customEditOptionContainerViewForComplicationPickerView:(id)arg1 ;
-(void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1 ;
-(void)faceViewWillEnterTimeTravel;
-(void)faceViewDidScrubToDate:(id)arg1 forced:(BOOL)arg2 ;
-(void)faceViewWillExitTimeTravel;
-(void)faceViewWillUnloadSnapshotContentViews;
-(void)faceViewDidReloadSnapshotContentViews;
-(void)faceViewWantsUnadornedSnapshotViewRemoved;
-(void)faceViewDidHideOrShowComplicationSlot;
-(BOOL)faceView:(id)arg1 wantsToDismissPresentedViewControllerAnimated:(BOOL)arg2 ;
-(BOOL)faceViewShouldIgnoreSnapshotImages;
-(id)faceViewComplicationSlots;
-(id)faceViewEditOptionThatHidesAllComplications;
-(id)faceViewComplicationSlotsHiddenByEditOption:(id)arg1 ;
-(id)faceViewAllVisibleComplicationsForCurrentConfiguration;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2 ;
-(id)initWithFace:(id)arg1 configuration:(/*^block*/id)arg2 ;
-(void)setStatusBarViewController:(UIViewController*<NTKClockStatusBarViewController>)arg1 ;
-(void)freezeAfterDelay:(double)arg1 ;
-(void)enableSlowMode;
-(void)disableSlowMode;
-(void)finalizeForSnapshotting:(/*^block*/id)arg1 ;
-(void)getComplicationController:(id*)arg1 andDisplay:(id*)arg2 forSlot:(id)arg3 ;
-(void)setShouldShowSnapshot:(BOOL)arg1 ;
-(void)setSupressesNonSnapshotUI:(BOOL)arg1 ;
-(void)setIgnoreSnapshotImages:(BOOL)arg1 ;
-(void)showEditingUIAnimated:(BOOL)arg1 ;
-(void)hideFaceEditingUIAnimated:(BOOL)arg1 ;
-(BOOL)canStopEditing;
-(void)_setupEditing;
-(void)_tearDownEditing;
-(id)PPTUniqueComplicationsToSlotForCurrentFace;
-(void)PPTPrepareComplicationTest;
-(void)PPTCreateComplication:(id)arg1 forSlot:(id)arg2 synchronously:(BOOL)arg3 ;
-(void)PPTCleanupLastComplication;
-(id)PPTDescriptionForComplication:(id)arg1 ;
-(void)performComplicationBackgroundDataRefresh;
-(id)currentOrderedComplicationApplicationIdentifiers;
-(CGRect)launchRectForComplicationApplicationIdentifier:(id)arg1 ;
-(BOOL)shouldLoadLiveFaceAtNextScreenOff;
-(BOOL)shouldShowSnapshot;
-(BOOL)supressesNonSnapshotUI;
-(NSDate *)pauseDate;
@end

