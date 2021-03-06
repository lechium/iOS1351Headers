/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/SXFullscreenCanvasShowable.h>
#import <libobjc.A.dylib/SXImageViewDelegate.h>
#import <libobjc.A.dylib/SXFullscreenCaptionDataSource.h>
#import <libobjc.A.dylib/SXDragManagerDataSource.h>

@protocol SXImageViewFactory, SXFullscreenCanvasControllerFactory, SXMediaSharingPolicyProvider;
@class SXDragManager, SXImageView, SXImageResource, SXFullscreenCanvasController, SXMediaViewEvent, UIView, NSString;

@interface SXScalableImageComponentView : SXMediaComponentView <SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXDragManagerDataSource> {

	id<SXImageViewFactory> _imageViewFactory;
	id<SXFullscreenCanvasControllerFactory> _canvasControllerFactory;
	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
	SXDragManager* _dragManager;
	SXImageView* _imageView;
	SXImageResource* _imageResource;
	SXFullscreenCanvasController* _fullScreenCanvasController;
	SXMediaViewEvent* _activeViewEvent;
	UIView* _gestureView;
	CGRect _previousContentFrame;

}

@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                                      //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXFullscreenCanvasControllerFactory> canvasControllerFactory;              //@synthesize canvasControllerFactory=_canvasControllerFactory - In the implementation block
@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;                  //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (nonatomic,retain) SXDragManager * dragManager;                                                    //@synthesize dragManager=_dragManager - In the implementation block
@property (nonatomic,readonly) SXImageView * imageView;                                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) SXImageResource * imageResource;                                                //@synthesize imageResource=_imageResource - In the implementation block
@property (nonatomic,retain) SXFullscreenCanvasController * fullScreenCanvasController;                      //@synthesize fullScreenCanvasController=_fullScreenCanvasController - In the implementation block
@property (nonatomic,retain) SXMediaViewEvent * activeViewEvent;                                             //@synthesize activeViewEvent=_activeViewEvent - In the implementation block
@property (assign,nonatomic) CGRect previousContentFrame;                                                    //@synthesize previousContentFrame=_previousContentFrame - In the implementation block
@property (assign,nonatomic,__weak) UIView * gestureView;                                                    //@synthesize gestureView=_gestureView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(SXImageView *)imageView;
-(SXDragManager *)dragManager;
-(void)discardContents;
-(SXImageResource *)imageResource;
-(UIView *)gestureView;
-(void)setGestureView:(UIView *)arg1 ;
-(void)setImageResource:(SXImageResource *)arg1 ;
-(id)textStyleForIdentifier:(id)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2 ;
-(BOOL)gestureShouldBegin:(id)arg1 ;
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3 ;
-(void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2 ;
-(id)viewForDragManager:(id)arg1 ;
-(id)dragManager:(id)arg1 dragableAtLocation:(CGPoint)arg2 ;
-(void)setDragManager:(SXDragManager *)arg1 ;
-(id)textResizerForCaption:(id)arg1 ;
-(id)textRulesForCaption:(id)arg1 ;
-(id)contentSizeCategoryForCaption:(id)arg1 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)renderContents;
-(id<SXImageViewFactory>)imageViewFactory;
-(SXFullscreenCanvasController *)fullScreenCanvasController;
-(void)finishMediaViewEvent;
-(void)submitEvents;
-(BOOL)allowHierarchyRemoval;
-(unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2 ;
-(void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3 ;
-(id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(CGPoint)arg2 inShowable:(id)arg3 ;
-(id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4 ;
-(CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(CGRect)arg4 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3 ;
-(BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg1 ;
-(id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(BOOL)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(BOOL)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3 ;
-(unsigned long long)analyticsMediaType;
-(void)loadComponent:(id)arg1 ;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(id)transitionContentView;
-(CGRect)transitionContentFrame;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg1 ;
-(id<SXFullscreenCanvasControllerFactory>)canvasControllerFactory;
-(CGRect)previousContentFrame;
-(void)layoutImageView;
-(void)setPreviousContentFrame:(CGRect)arg1 ;
-(void)createMediaViewEvent;
-(SXMediaViewEvent *)activeViewEvent;
-(void)setActiveViewEvent:(SXMediaViewEvent *)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8 mediaSharingPolicyProvider:(id)arg9 ;
-(void)setFullScreenCanvasController:(SXFullscreenCanvasController *)arg1 ;
@end

