/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUPhotoEditToolControllerDelegate <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource>
@required
-(id)imageProperties;
-(id)mediaView;
-(BOOL)isLoopingVideo;
-(long long)sourceSelection;
-(void)updateProgressIndicatorAnimated:(BOOL)arg1;
-(id)toolControllerMainRenderer:(id)arg1;
-(id)toolControllerUneditedCompositionController:(id)arg1;
-(unsigned long long)toolControllerSourceAssetType:(id)arg1;
-(id)toolControllerMainContainerView:(id)arg1;
-(void)toolController:(id)arg1 switchEditSource:(long long)arg2;
-(long long)overcaptureType;
-(CGSize*)toolControllerOriginalOrientedImageSize:(id)arg1;
-(void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
-(BOOL)hasLoopingVideoAdjustment;
-(BOOL)isStandardVideo;
-(id)toolControllerOriginalCompositionController:(id)arg1;
-(void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(BOOL)arg2;
-(void)toolControllerRequestLivePhoto:(id)arg1 filters:(id)arg2 completion:(/*^block*/id)arg3;
-(SCD_Struct_PU24*)toolControllerImageModulationOptions:(id)arg1;
-(id)toolControllerPlaceholderImage:(id)arg1;
-(void)toolControllerDidUpdateToolbar:(id)arg1;
-(void)toggleLivePhotoActive;
-(void)configureEnablenessOfControlButton:(id)arg1 animated:(BOOL)arg2 canVisuallyDisable:(BOOL)arg3;
-(BOOL)isVideoOn;
-(void)updateMutedState;
-(BOOL)isHighframeRateVideo;
-(id)mainLivePhotoView;
-(void)dismissLivePhotoRevertConfirmationAlert;
-(id)fontForButtons;
-(void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
-(void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1;
-(id)toolControllerHitEventForwardView:(id)arg1;
-(void)toolControllerDidFinishLoadingThumbnails:(id)arg1;
-(void)toolController:(id)arg1 updateModelDependentControlsAnimated:(BOOL)arg2;
-(id)toolControllerPreviewView:(id)arg1;
-(id)toolControllerLivePhoto:(id)arg1;
-(CGSize*)toolControllerOriginalImageSize:(id)arg1;
-(void)toolControllerDidFinish:(id)arg1;
-(CGPoint*)toolController:(id)arg1 originalPointFromViewPoint:(CGPoint)arg2 view:(id)arg3;
-(CGPoint*)toolController:(id)arg1 viewPointFromOriginalPoint:(CGPoint)arg2 view:(id)arg3;
-(BOOL)isImageZooming;
-(BOOL)isImageFrameReady;
-(CGRect*)previewViewFrame;

@end
