/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXVideoViewDelegate.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@protocol PXVideoSessionUIViewDelegate;
@class UIView, PXVideoView, UIImageView, PXVideoSession, UIImage, NSString;

@interface PXVideoSessionUIView : UIView <PXVideoViewDelegate, ISChangeObserver> {

	UIView* _videoContainerView;
	PXVideoView* _videoView;
	PXVideoView* _adoptedVideoView;
	PXVideoView* _activeVideoView;
	UIImageView* _placeholderImageView;
	BOOL _placeholderVisible;
	BOOL _allowsEdgeAntialiasing;
	PXVideoSession* _videoSession;
	UIImage* _placeholderImage;
	id<PXVideoSessionUIViewDelegate> _delegate;
	NSString* _videoGravity;
	CGRect _contentsRect;

}

@property (assign,nonatomic) BOOL placeholderVisible;                                       //@synthesize placeholderVisible=_placeholderVisible - In the implementation block
@property (nonatomic,retain) PXVideoSession * videoSession;                                 //@synthesize videoSession=_videoSession - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                    //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) BOOL isVideoLayerReadyForDisplay; 
@property (assign,nonatomic,__weak) id<PXVideoSessionUIViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                                           //@synthesize contentsRect=_contentsRect - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;                                   //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
@property (nonatomic,copy) NSString * videoGravity;                                         //@synthesize videoGravity=_videoGravity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PXVideoSessionUIViewDelegate>)delegate;
-(void)setDelegate:(id<PXVideoSessionUIViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(BOOL)allowsEdgeAntialiasing;
-(void)setContentsRect:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(void)_updatePlaceholderVisibility;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setVideoSession:(PXVideoSession *)arg1 ;
-(PXVideoSession *)videoSession;
-(void)_updateEdgeAntialiasing;
-(id)generateSnapshotImage;
-(void)videoViewReadinessDidChange:(id)arg1 ;
-(void)_updateVideoViewFrame;
-(BOOL)isVideoLayerReadyForDisplay;
-(void)setPlaceholderVisible:(BOOL)arg1 ;
-(BOOL)placeholderVisible;
@end
