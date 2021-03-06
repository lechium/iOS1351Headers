/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>

@protocol PUPhotoViewContentHelperDelegate;
@class PUBackgroundColorView, UIColor, PXVideoPlayerView, ISWrappedAVPlayer, ISAnimatedImageView, UIView, UIImage, PUPhotoDecoration, PHLivePhoto, AVAsset, PHAnimatedImage, PUTextBannerView, PXFeatureSpec, PXCollectionTileLayoutTemplate, NSString, UIImageView, PUAvalancheStackView, PHLivePhotoView, PXRoundedCornerOverlayView, PXUIAssetBadgeView, PXTitleSubtitleUILabel, ISWrappedAVAudioSession;

@interface PUPhotoViewContentHelper : NSObject <PHLivePhotoViewDelegate> {

	PUBackgroundColorView* _photoDecorationBorderView;
	PUBackgroundColorView* _photoDecorationOverlayView;
	BOOL _hasTransform;
	BOOL _hasLayerBackgroundColor;
	SCD_Struct_PU16 _delegateFlags;
	BOOL _hasPendingPlaybackRequest;
	long long _pendingPlaybackRequestStyle;
	UIColor* _layerDefaultBackgroundColor;
	SCD_Struct_PU13 _needsUpdateFlags;
	PXVideoPlayerView* _loopingVideoView;
	ISWrappedAVPlayer* _loopingVideoPlayer;
	ISAnimatedImageView* _animatedImageView;
	BOOL _isTextBannerVisible;
	BOOL _avoidsImageViewIfPossible;
	BOOL _flattensBadgeView;
	BOOL _avoidsPhotoDecoration;
	BOOL _animatingRoundedCorners;
	BOOL _useOverlay;
	BOOL _highlighted;
	BOOL _livePhotoHidden;
	BOOL _shouldPrepareForPlayback;
	BOOL _loopingPlaybackAllowed;
	BOOL _showsLivePhoto;
	BOOL _needsAvalancheStack;
	UIView* _contentView;
	long long _fillMode;
	UIImage* _photoImage;
	UIImage* _placeHolderImage;
	UIView* _transitionSnapshotView;
	PUPhotoDecoration* _photoDecoration;
	double _cornerRadius;
	unsigned long long _cornersToRound;
	UIColor* _overlayColor;
	double _contentAlpha;
	double _darkContentOverlayAlpha;
	UIColor* _backgroundColor;
	id<PUPhotoViewContentHelperDelegate> _delegate;
	PHLivePhoto* _livePhoto;
	AVAsset* _loopingVideoAsset;
	PHAnimatedImage* _animatedImage;
	CGColorRef _avalancheStackBackgroundColor;
	long long _badgeStyle;
	PUTextBannerView* _textBannerView;
	PXFeatureSpec* _featureSpec;
	PXCollectionTileLayoutTemplate* _collectionTileLayoutTemplate;
	NSString* _titleFontName;
	NSString* _title;
	NSString* _subtitle;
	UIImageView* _photoImageView;
	UIView* _darkContentOverlay;
	UIImageView* __crossfadeImageView;
	PUAvalancheStackView* _avalancheStackView;
	PHLivePhotoView* _livePhotoView;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	UIView* __highlightOverlayView;
	PXUIAssetBadgeView* __badgeView;
	PXTitleSubtitleUILabel* __titleSubtitleLabel;
	ISWrappedAVAudioSession* __audioSession;
	CGSize _photoSize;
	CGSize _customPaddingForBadgeElements;
	PXAssetBadgeInfo _badgeInfo;
	CGAffineTransform _imageTransform;

}

@property (nonatomic,retain) UIImageView * photoImageView;                                                                 //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,retain) UIView * darkContentOverlay;                                                                  //@synthesize darkContentOverlay=_darkContentOverlay - In the implementation block
@property (nonatomic,retain) UIImageView * _crossfadeImageView;                                                            //@synthesize _crossfadeImageView=__crossfadeImageView - In the implementation block
@property (nonatomic,retain) PUAvalancheStackView * avalancheStackView;                                                    //@synthesize avalancheStackView=_avalancheStackView - In the implementation block
@property (nonatomic,retain) PHLivePhotoView * livePhotoView;                                                              //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundedCornerOverlayView;                                        //@synthesize roundedCornerOverlayView=_roundedCornerOverlayView - In the implementation block
@property (setter=_setHighlightOverlayView:,nonatomic,retain) UIView * _highlightOverlayView;                              //@synthesize _highlightOverlayView=__highlightOverlayView - In the implementation block
@property (setter=_setBadgeView:,nonatomic,retain) PXUIAssetBadgeView * _badgeView;                                        //@synthesize _badgeView=__badgeView - In the implementation block
@property (setter=_setTitleSubtitleUILabel:,nonatomic,retain) PXTitleSubtitleUILabel * _titleSubtitleLabel;                //@synthesize _titleSubtitleLabel=__titleSubtitleLabel - In the implementation block
@property (setter=_setAudioSession:,nonatomic,retain) ISWrappedAVAudioSession * _audioSession;                             //@synthesize _audioSession=__audioSession - In the implementation block
@property (nonatomic,__weak,readonly) UIView * contentView;                                                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long fillMode;                                                                           //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform;                                                             //@synthesize imageTransform=_imageTransform - In the implementation block
@property (assign,nonatomic) CGSize photoSize;                                                                             //@synthesize photoSize=_photoSize - In the implementation block
@property (nonatomic,readonly) CGRect imageContentFrame; 
@property (nonatomic,retain) UIImage * photoImage;                                                                         //@synthesize photoImage=_photoImage - In the implementation block
@property (nonatomic,retain) UIImage * placeHolderImage;                                                                   //@synthesize placeHolderImage=_placeHolderImage - In the implementation block
@property (nonatomic,retain) UIView * transitionSnapshotView;                                                              //@synthesize transitionSnapshotView=_transitionSnapshotView - In the implementation block
@property (nonatomic,copy) PUPhotoDecoration * photoDecoration;                                                            //@synthesize photoDecoration=_photoDecoration - In the implementation block
@property (assign,getter=isImageViewEdgeAntialiasingEnabled,nonatomic) BOOL imageViewEdgeAntialiasingEnabled; 
@property (assign,nonatomic) BOOL avoidsImageViewIfPossible;                                                               //@synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible - In the implementation block
@property (assign,nonatomic) BOOL flattensBadgeView;                                                                       //@synthesize flattensBadgeView=_flattensBadgeView - In the implementation block
@property (assign,nonatomic) BOOL avoidsPhotoDecoration;                                                                   //@synthesize avoidsPhotoDecoration=_avoidsPhotoDecoration - In the implementation block
@property (nonatomic,readonly) UIView * badgeContainerView; 
@property (nonatomic,readonly) BOOL providesVisualFeedbackOnPress; 
@property (assign,getter=isAnimatingRoundedCorners,nonatomic) BOOL animatingRoundedCorners;                                //@synthesize animatingRoundedCorners=_animatingRoundedCorners - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long cornersToRound;                                                          //@synthesize cornersToRound=_cornersToRound - In the implementation block
@property (assign,nonatomic) BOOL useOverlay;                                                                              //@synthesize useOverlay=_useOverlay - In the implementation block
@property (nonatomic,retain) UIColor * overlayColor;                                                                       //@synthesize overlayColor=_overlayColor - In the implementation block
@property (assign,nonatomic) double contentAlpha;                                                                          //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (assign,nonatomic) double darkContentOverlayAlpha;                                                               //@synthesize darkContentOverlayAlpha=_darkContentOverlayAlpha - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                        //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,getter=isLivePhotoHidden,nonatomic) BOOL livePhotoHidden;                                                //@synthesize livePhotoHidden=_livePhotoHidden - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoViewContentHelperDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                                                                      //@synthesize livePhoto=_livePhoto - In the implementation block
@property (assign,nonatomic) BOOL shouldPrepareForPlayback;                                                                //@synthesize shouldPrepareForPlayback=_shouldPrepareForPlayback - In the implementation block
@property (nonatomic,copy) AVAsset * loopingVideoAsset;                                                                    //@synthesize loopingVideoAsset=_loopingVideoAsset - In the implementation block
@property (nonatomic,retain) PHAnimatedImage * animatedImage;                                                              //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,nonatomic) BOOL loopingPlaybackAllowed;                                                                  //@synthesize loopingPlaybackAllowed=_loopingPlaybackAllowed - In the implementation block
@property (assign,nonatomic) BOOL showsLivePhoto;                                                                          //@synthesize showsLivePhoto=_showsLivePhoto - In the implementation block
@property (assign,nonatomic) BOOL needsAvalancheStack;                                                                     //@synthesize needsAvalancheStack=_needsAvalancheStack - In the implementation block
@property (assign,nonatomic) CGColorRef avalancheStackBackgroundColor;                                                     //@synthesize avalancheStackBackgroundColor=_avalancheStackBackgroundColor - In the implementation block
@property (assign,nonatomic) PXAssetBadgeInfo badgeInfo;                                                                   //@synthesize badgeInfo=_badgeInfo - In the implementation block
@property (assign,nonatomic) long long badgeStyle;                                                                         //@synthesize badgeStyle=_badgeStyle - In the implementation block
@property (assign,nonatomic) CGSize customPaddingForBadgeElements;                                                         //@synthesize customPaddingForBadgeElements=_customPaddingForBadgeElements - In the implementation block
@property (assign,getter=isTextBannerVisible,nonatomic) BOOL textBannerVisible;                                            //@synthesize isTextBannerVisible=_isTextBannerVisible - In the implementation block
@property (nonatomic,readonly) PUTextBannerView * textBannerView;                                                          //@synthesize textBannerView=_textBannerView - In the implementation block
@property (nonatomic,retain) PXFeatureSpec * featureSpec;                                                                  //@synthesize featureSpec=_featureSpec - In the implementation block
@property (nonatomic,retain) PXCollectionTileLayoutTemplate * collectionTileLayoutTemplate;                                //@synthesize collectionTileLayoutTemplate=_collectionTileLayoutTemplate - In the implementation block
@property (nonatomic,retain) NSString * titleFontName;                                                                     //@synthesize titleFontName=_titleFontName - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 imageSize:(CGSize)arg2 fillMode:(long long)arg3 ;
+(CGRect)_imageContentFrameForBounds:(CGRect)arg1 imageSize:(CGSize)arg2 fillMode:(long long)arg3 ;
-(id)init;
-(id<PUPhotoViewContentHelperDelegate>)delegate;
-(void)setDelegate:(id<PUPhotoViewContentHelperDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateImageView;
-(void)setFillMode:(long long)arg1 ;
-(double)cornerRadius;
-(void)setContentAlpha:(double)arg1 ;
-(void)_updateHighlight;
-(PXUIAssetBadgeView *)_badgeView;
-(BOOL)_needsUpdate;
-(ISWrappedAVAudioSession *)_audioSession;
-(long long)fillMode;
-(PHAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(PHAnimatedImage *)arg1 ;
-(NSString *)titleFontName;
-(PHLivePhoto *)livePhoto;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(double)contentAlpha;
-(UIColor *)overlayColor;
-(PHLivePhotoView *)livePhotoView;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(void)stopPlayback;
-(void)setLivePhotoView:(PHLivePhotoView *)arg1 ;
-(UIImage *)placeHolderImage;
-(void)startPlaybackWithStyle:(long long)arg1 ;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)setPlaceHolderImage:(UIImage *)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(void)_updateIfNeeded;
-(void)setTitleFontName:(NSString *)arg1 ;
-(void)_updateSubviewOrdering;
-(UIView *)_highlightOverlayView;
-(void)_setAudioSession:(id)arg1 ;
-(void)setCornersToRound:(unsigned long long)arg1 ;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(unsigned long long)cornersToRound;
-(void)setLoopingVideoAsset:(AVAsset *)arg1 ;
-(AVAsset *)loopingVideoAsset;
-(void)_updateLivePhotoView;
-(void)_invalidateBadgeView;
-(PXRoundedCornerOverlayView *)roundedCornerOverlayView;
-(void)setRoundedCornerOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(PXAssetBadgeInfo)badgeInfo;
-(PUPhotoDecoration *)photoDecoration;
-(void)setPhotoDecoration:(PUPhotoDecoration *)arg1 ;
-(PXFeatureSpec *)featureSpec;
-(void)setFeatureSpec:(PXFeatureSpec *)arg1 ;
-(PXCollectionTileLayoutTemplate *)collectionTileLayoutTemplate;
-(void)setCollectionTileLayoutTemplate:(PXCollectionTileLayoutTemplate *)arg1 ;
-(UIImage *)photoImage;
-(void)setPhotoSize:(CGSize)arg1 ;
-(void)setPhotoImage:(UIImage *)arg1 ;
-(UIView *)badgeContainerView;
-(void)setBadgeStyle:(long long)arg1 ;
-(CGRect)imageContentFrame;
-(void)_updateRoundedCornersOverlayView;
-(void)setImageViewEdgeAntialiasingEnabled:(BOOL)arg1 ;
-(CGRect)imageContentFrameForBounds:(CGRect)arg1 ;
-(void)setTextBannerVisible:(BOOL)arg1 ;
-(BOOL)isTextBannerVisible;
-(CGAffineTransform)imageTransform;
-(CGSize)photoSize;
-(void)setCustomPaddingForBadgeElements:(CGSize)arg1 ;
-(CGSize)customPaddingForBadgeElements;
-(long long)badgeStyle;
-(void)setTransitionSnapshotView:(UIView *)arg1 ;
-(void)setLivePhotoHidden:(BOOL)arg1 ;
-(CGRect)photoDecorationBorderViewFrameForImageContentFrame:(CGRect)arg1 ;
-(void)updatePhotoImageWithoutReconfiguring:(id)arg1 ;
-(BOOL)isImageViewEdgeAntialiasingEnabled;
-(void)setFlattensBadgeView:(BOOL)arg1 ;
-(void)setAvoidsPhotoDecoration:(BOOL)arg1 ;
-(BOOL)providesVisualFeedbackOnPress;
-(void)setAnimatingRoundedCorners:(BOOL)arg1 ;
-(void)setUseOverlay:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 cornersToRound:(unsigned long long)arg2 useOverlay:(BOOL)arg3 overlayColor:(id)arg4 ;
-(void)setDarkContentOverlayAlpha:(double)arg1 ;
-(void)setShouldPrepareForPlayback:(BOOL)arg1 ;
-(void)setShowsLivePhoto:(BOOL)arg1 ;
-(void)_updateLivePhotoViewVisibility;
-(void)_updateLivePhotoViewPreparing;
-(void)_startPlaybackWhenLivePhotoAvailableWithStyle:(long long)arg1 ;
-(void)setLoopingPlaybackAllowed:(BOOL)arg1 ;
-(void)_removePhotoImageViewIfNecessary;
-(void)_addAvalancheStackViewIfNecessary;
-(void)_removeAvalancheStackViewIfNecessary;
-(void)_updateLayerBackgroundColorIfNeeded;
-(void)_updateContentViewClipsToBounds;
-(void)_updateTextBannerView;
-(void)_updateBadgeView;
-(void)_updatePhotoDecoration;
-(void)_updateLayerCornerRadius;
-(void)_invalidateLoopingVideoView;
-(void)_updateLoopingVideoViewIfNeeded;
-(void)_invalidateAnimatedImageView;
-(void)_updateAnimatedImageViewIfNeeded;
-(void)_invalidateTitleSubtitleUILabel;
-(void)_updateTitleSubtitleUILabelIfNeeded;
-(void)layoutSubviewsOfContentView;
-(void)contentViewDynamicUserInterfaceTraitDidChange;
-(void)animateCrossfadeToImage:(id)arg1 ;
-(UIView *)transitionSnapshotView;
-(BOOL)avoidsImageViewIfPossible;
-(void)setAvoidsImageViewIfPossible:(BOOL)arg1 ;
-(BOOL)flattensBadgeView;
-(BOOL)avoidsPhotoDecoration;
-(BOOL)isAnimatingRoundedCorners;
-(BOOL)useOverlay;
-(double)darkContentOverlayAlpha;
-(BOOL)isLivePhotoHidden;
-(BOOL)shouldPrepareForPlayback;
-(BOOL)loopingPlaybackAllowed;
-(BOOL)showsLivePhoto;
-(BOOL)needsAvalancheStack;
-(void)setNeedsAvalancheStack:(BOOL)arg1 ;
-(CGColorRef)avalancheStackBackgroundColor;
-(void)setAvalancheStackBackgroundColor:(CGColorRef)arg1 ;
-(PUTextBannerView *)textBannerView;
-(UIImageView *)photoImageView;
-(void)setPhotoImageView:(UIImageView *)arg1 ;
-(UIView *)darkContentOverlay;
-(void)setDarkContentOverlay:(UIView *)arg1 ;
-(UIImageView *)_crossfadeImageView;
-(void)set_crossfadeImageView:(UIImageView *)arg1 ;
-(PUAvalancheStackView *)avalancheStackView;
-(void)setAvalancheStackView:(PUAvalancheStackView *)arg1 ;
-(void)_setHighlightOverlayView:(id)arg1 ;
-(void)_setBadgeView:(id)arg1 ;
-(PXTitleSubtitleUILabel *)_titleSubtitleLabel;
-(void)_setTitleSubtitleUILabel:(id)arg1 ;
@end

