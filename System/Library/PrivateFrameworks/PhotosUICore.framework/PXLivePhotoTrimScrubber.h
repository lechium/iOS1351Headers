/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXLivePhotoTrimScrubberFilmStripView, PXLivePhotoTrimScrubberDelegate;
@class PXLivePhotoTrimScrubberLoupeView, UIView, NSArray, PXLivePhotoTrimScrubberHiddenAnimationHelper, PXLivePhotoTrimScrubberSpec, AVAsset, AVVideoComposition, UIImage, PXTrimScrubberLayoutHelper, UIImageView;

@interface PXLivePhotoTrimScrubber : UIView {

	PXLivePhotoTrimScrubberLoupeView* _photoLoupe;
	UIView* _filmstripContainerView;
	UIView*<PXLivePhotoTrimScrubberFilmStripView> _filmstripView;
	UIView* _disabledOverlayView;
	struct {
		BOOL respondsToDidTapElement;
		BOOL respondsToDidBeginInteractivelyEditingElement;
		BOOL respondsToCanBeginInteractivelyEditingElement;
		BOOL respondsToDidEndInteractivelyEditingElement;
		BOOL respondsToDidChangeTimeForElement;
		BOOL respondsToAssetDurationDidChange;
		BOOL respondsToDidChangeLoupeRect;
		BOOL respondsToDidZoomToMinimumValueMaximumValue;
		BOOL respondsToDidUnzoom;
		BOOL respondsToDidLayoutSubviews;
		BOOL respondsToDebugStartRect;
		BOOL respondsToDebugEndRect;
		BOOL respondsToDebugStartOffset;
		BOOL respondsToDebugEndOffset;
	}  _delegateFlags;
	NSArray* _keyTimeSnappingControllers;
	NSArray* _startTimeSnappingControllers;
	NSArray* _endTimeSnappingControllers;
	BOOL _hasPresentedControls;
	SCD_Struct_PX26 _photoTrimBuffer;
	long long _changeDepth;
	PXLivePhotoTrimScrubberHiddenAnimationHelper* _loupeHiddenHelper;
	PXLivePhotoTrimScrubberHiddenAnimationHelper* _trimControlHiddenHelper;
	PXLivePhotoTrimScrubberHiddenAnimationHelper* _playheadHiddenHelper;
	UIView* _debugStartTimeView;
	UIView* _debugLoupeTimeView;
	UIView* _debugEndTimeView;
	BOOL _canEditKeyTime;
	BOOL _playheadEnabled;
	BOOL _disabled;
	BOOL _useMiniScrubber;
	BOOL _allowZoom;
	BOOL _showVideoScrubberDebugOverlay;
	UIView* _preTrimOverlayView;
	UIView* _postTrimOverlayView;
	PXLivePhotoTrimScrubberSpec* _spec;
	Class _filmStripViewClass;
	AVAsset* _asset;
	AVVideoComposition* _videoComposition;
	UIImage* _placeholderImage;
	double _horizontalInset;
	NSArray* _snapKeyTimes;
	NSArray* _snapTrimStartTimes;
	NSArray* _snapTrimEndTimes;
	id<PXLivePhotoTrimScrubberDelegate> _delegate;
	double __contentAspectRatio;
	long long __trackingElement;
	long long _state;
	PXTrimScrubberLayoutHelper* _layoutHelper;
	UIImageView* _trimStartHandle;
	UIImageView* _trimEndHandle;
	UIImageView* _playhead;
	SCD_Struct_PX26 _untrimmedDuration;
	SCD_Struct_PX26 _keyTime;
	SCD_Struct_PX26 _playheadTime;
	SCD_Struct_PX26 _suggestedKeyTime;
	SCD_Struct_PX26 _trimStartTime;
	SCD_Struct_PX26 _trimEndTime;
	SCD_Struct_PX26 _originalStartTime;
	SCD_Struct_PX26 _originalEndTime;
	SCD_Struct_PX26 _minimumTrimLength;

}

@property (assign,setter=_setUntrimmedDuration:,nonatomic) SCD_Struct_PX26 untrimmedDuration;              //@synthesize untrimmedDuration=_untrimmedDuration - In the implementation block
@property (assign,setter=_setContentAspectRatio:,nonatomic) double _contentAspectRatio;                    //@synthesize _contentAspectRatio=__contentAspectRatio - In the implementation block
@property (assign,setter=_setTrackingElement:,nonatomic) long long _trackingElement;                       //@synthesize _trackingElement=__trackingElement - In the implementation block
@property (nonatomic,readonly) UIView * _preTrimOverlayView;                                               //@synthesize preTrimOverlayView=_preTrimOverlayView - In the implementation block
@property (nonatomic,readonly) UIView * _postTrimOverlayView;                                              //@synthesize postTrimOverlayView=_postTrimOverlayView - In the implementation block
@property (assign,nonatomic) long long state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PXTrimScrubberLayoutHelper * layoutHelper;                                    //@synthesize layoutHelper=_layoutHelper - In the implementation block
@property (nonatomic,readonly) UIView * photoLoupe;                                                        //@synthesize photoLoupe=_photoLoupe - In the implementation block
@property (nonatomic,readonly) UIImageView * trimStartHandle;                                              //@synthesize trimStartHandle=_trimStartHandle - In the implementation block
@property (nonatomic,readonly) UIImageView * trimEndHandle;                                                //@synthesize trimEndHandle=_trimEndHandle - In the implementation block
@property (nonatomic,readonly) UIImageView * playhead;                                                     //@synthesize playhead=_playhead - In the implementation block
@property (assign,nonatomic) BOOL showVideoScrubberDebugOverlay;                                           //@synthesize showVideoScrubberDebugOverlay=_showVideoScrubberDebugOverlay - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX26 minimumTrimLength;                                            //@synthesize minimumTrimLength=_minimumTrimLength - In the implementation block
@property (nonatomic,retain) PXLivePhotoTrimScrubberSpec * spec;                                           //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX26 viewportMinTime; 
@property (nonatomic,readonly) SCD_Struct_PX26 viewportMaxTime; 
@property (nonatomic,readonly) Class filmStripViewClass;                                                   //@synthesize filmStripViewClass=_filmStripViewClass - In the implementation block
@property (nonatomic,copy) AVAsset * asset;                                                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) AVVideoComposition * videoComposition;                                          //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                   //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (getter=isAssetDurationLoaded,nonatomic,readonly) BOOL assetDurationLoaded; 
@property (assign,nonatomic) double horizontalInset;                                                       //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX26 keyTime;                                                      //@synthesize keyTime=_keyTime - In the implementation block
@property (assign,nonatomic) BOOL canEditKeyTime;                                                          //@synthesize canEditKeyTime=_canEditKeyTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX26 playheadTime;                                                 //@synthesize playheadTime=_playheadTime - In the implementation block
@property (assign,nonatomic) BOOL playheadEnabled;                                                         //@synthesize playheadEnabled=_playheadEnabled - In the implementation block
@property (nonatomic,copy) NSArray * snapKeyTimes;                                                         //@synthesize snapKeyTimes=_snapKeyTimes - In the implementation block
@property (nonatomic,copy) NSArray * snapTrimStartTimes;                                                   //@synthesize snapTrimStartTimes=_snapTrimStartTimes - In the implementation block
@property (nonatomic,copy) NSArray * snapTrimEndTimes;                                                     //@synthesize snapTrimEndTimes=_snapTrimEndTimes - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX26 suggestedKeyTime;                                             //@synthesize suggestedKeyTime=_suggestedKeyTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX26 trimStartTime;                                                //@synthesize trimStartTime=_trimStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX26 trimEndTime;                                                  //@synthesize trimEndTime=_trimEndTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX26 originalStartTime;                                            //@synthesize originalStartTime=_originalStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX26 originalEndTime;                                              //@synthesize originalEndTime=_originalEndTime - In the implementation block
@property (nonatomic,readonly) long long trimStatus; 
@property (nonatomic,readonly) long long currentlyInteractingElement; 
@property (assign,nonatomic,__weak) id<PXLivePhotoTrimScrubberDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * loupePlayerView; 
@property (nonatomic,readonly) CGRect loupeRect; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                              //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL useMiniScrubber;                                                         //@synthesize useMiniScrubber=_useMiniScrubber - In the implementation block
@property (assign,nonatomic) BOOL allowZoom;                                                               //@synthesize allowZoom=_allowZoom - In the implementation block
+(id)createSnappingControllerWithSnappingTarget:(double)arg1 ;
+(id)trimStartImage;
+(id)trimStartHighlightedImage;
+(id)trimEndImage;
+(id)trimEndHighlightedImage;
+(id)trimStartImageMini;
+(id)trimStartHighlightedImageMini;
+(id)trimEndImageMini;
+(id)trimEndHighlightedImageMini;
+(id)playheadImage;
+(id)playheadImageMini;
+(id)_createSnappingControllersForKeytimes:(id)arg1 ;
-(id<PXLivePhotoTrimScrubberDelegate>)delegate;
-(void)setDelegate:(id<PXLivePhotoTrimScrubberDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(BOOL)isDisabled;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)layoutSubviews;
-(void)setDisabled:(BOOL)arg1 ;
-(void)unzoom;
-(SCD_Struct_PX26)minimumTrimLength;
-(void)setMinimumTrimLength:(SCD_Struct_PX26)arg1 ;
-(SCD_Struct_PX26)originalStartTime;
-(void)setSpec:(PXLivePhotoTrimScrubberSpec *)arg1 ;
-(PXLivePhotoTrimScrubberSpec *)spec;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(double)_contentAspectRatio;
-(SCD_Struct_PX26)trimStartTime;
-(SCD_Struct_PX26)trimEndTime;
-(void)setTrimStartTime:(SCD_Struct_PX26)arg1 ;
-(void)setTrimEndTime:(SCD_Struct_PX26)arg1 ;
-(double)horizontalInset;
-(void)setHorizontalInset:(double)arg1 ;
-(id)initWithFilmStripViewClass:(Class)arg1 spec:(id)arg2 ;
-(void)prepareForImpact;
-(void)impactOccured;
-(UIView *)_preTrimOverlayView;
-(UIView *)_postTrimOverlayView;
-(void)_newScrubberLayoutSubviews;
-(void)setLoupePlayerView:(UIView *)arg1 ;
-(UIView *)loupePlayerView;
-(void)setKeyTime:(SCD_Struct_PX26)arg1 ;
-(void)_setKeyTime:(SCD_Struct_PX26)arg1 canHaveImpact:(BOOL)arg2 ;
-(void)setCanEditKeyTime:(BOOL)arg1 ;
-(void)setSnapKeyTimes:(NSArray *)arg1 ;
-(void)setSuggestedKeyTime:(SCD_Struct_PX26)arg1 ;
-(void)setSnapTrimStartTimes:(NSArray *)arg1 ;
-(void)setSnapTrimEndTimes:(NSArray *)arg1 ;
-(void)setPlayheadTime:(SCD_Struct_PX26)arg1 ;
-(void)_setPlayheadTime:(SCD_Struct_PX26)arg1 canHaveImpact:(BOOL)arg2 ;
-(void)setPlayheadEnabled:(BOOL)arg1 ;
-(void)setUseMiniScrubber:(BOOL)arg1 ;
-(void)_updateTrimHandles;
-(void)_updatePlayhead;
-(void)_animateChanges:(/*^block*/id)arg1 ;
-(void)performAnimatedChanges:(/*^block*/id)arg1 ;
-(long long)trimStatus;
-(SCD_Struct_PX26)timeForElement:(long long)arg1 ;
-(double)horizontalOffsetForTime:(SCD_Struct_PX26)arg1 ;
-(BOOL)isAssetDurationLoaded;
-(long long)currentlyInteractingElement;
-(CGRect)loupeRect;
-(BOOL)tryZoomAtTime:(SCD_Struct_PX26)arg1 ;
-(void)_zoomAtTrackedElement;
-(void)_zoomAtTime:(SCD_Struct_PX26)arg1 ;
-(void)_handleFirstPanEvent;
-(void)_handlePanningEvent;
-(void)_handleLiftEvent;
-(void)_handleTimerFireEvent;
-(void)_PXLivePhotoTrimScrubber_commonInit;
-(void)_updateSpecDependentUI;
-(void)setShowVideoScrubberDebugOverlay:(BOOL)arg1 ;
-(double)_offsetForTime:(SCD_Struct_PX26)arg1 ;
-(SCD_Struct_PX26)timeAtPoint:(CGPoint)arg1 ;
-(SCD_Struct_PX26)_timeAtLocation:(CGPoint)arg1 forElement:(long long)arg2 ;
-(void)handleSetKeyTime:(SCD_Struct_PX26)arg1 ;
-(void)handleTapWithElement:(long long)arg1 ;
-(void)_setTrackingElement:(long long)arg1 ;
-(void)handleBeginTrackingAtLocation:(CGPoint)arg1 ;
-(SCD_Struct_PX26)viewportMinTime;
-(SCD_Struct_PX26)viewportMaxTime;
-(SCD_Struct_PX26)_clampTimeToViewportIfZoomed:(SCD_Struct_PX26)arg1 ;
-(void)handleChangeTrackingAtLocation:(CGPoint)arg1 withVelocity:(CGPoint)arg2 ;
-(void)handleEndTracking:(BOOL)arg1 ;
-(void)_assetDidLoadValues;
-(void)_setUntrimmedDuration:(SCD_Struct_PX26)arg1 ;
-(void)_updateContentAspectRatio;
-(void)_setContentAspectRatio:(double)arg1 ;
-(void)_updateKeyTimeSnappingControllers;
-(void)_updateStartTimeSnappingControllers;
-(void)_updateEndTimeSnappingControllers;
-(id)_snappingControllersForElement:(long long)arg1 ;
-(id)_snapTimesForElement:(long long)arg1 ;
-(void)_setPhotoLoupeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setTrimControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setPlayheadHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_presentControlsIfNeeded;
-(void)_trimHandleDidReachBounds;
-(CGRect)_disabledOverlayFrame;
-(void)_releaseAVObjects;
-(CGRect)backingAlignedRectForRect:(CGRect)arg1 ;
-(UIView *)photoLoupe;
-(Class)filmStripViewClass;
-(SCD_Struct_PX26)untrimmedDuration;
-(SCD_Struct_PX26)keyTime;
-(BOOL)canEditKeyTime;
-(SCD_Struct_PX26)playheadTime;
-(BOOL)playheadEnabled;
-(NSArray *)snapKeyTimes;
-(NSArray *)snapTrimStartTimes;
-(NSArray *)snapTrimEndTimes;
-(SCD_Struct_PX26)suggestedKeyTime;
-(void)setOriginalStartTime:(SCD_Struct_PX26)arg1 ;
-(SCD_Struct_PX26)originalEndTime;
-(void)setOriginalEndTime:(SCD_Struct_PX26)arg1 ;
-(BOOL)useMiniScrubber;
-(BOOL)allowZoom;
-(void)setAllowZoom:(BOOL)arg1 ;
-(long long)_trackingElement;
-(PXTrimScrubberLayoutHelper *)layoutHelper;
-(void)setLayoutHelper:(PXTrimScrubberLayoutHelper *)arg1 ;
-(UIImageView *)trimStartHandle;
-(UIImageView *)trimEndHandle;
-(UIImageView *)playhead;
-(BOOL)showVideoScrubberDebugOverlay;
@end
