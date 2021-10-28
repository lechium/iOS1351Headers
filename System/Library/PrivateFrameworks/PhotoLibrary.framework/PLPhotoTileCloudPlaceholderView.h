/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLTilePlaceholderView.h>

@protocol PLPhotoTileCloudPlaceholderViewDelegate;
@class PLRoundProgressView, UIView, UIButton, NSString;

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView> {

	PLRoundProgressView* _loadingIndicatorView;
	UIView* _loadingContainerView;
	UIButton* _loadingErrorButton;
	BOOL _indicatorIsVisible;
	BOOL _showingError;
	BOOL _showingLoading;
	CGRect _imageRect;
	BOOL _toolbarVisible;
	double _lastViewPhaseChangeDate;
	id<PLPhotoTileCloudPlaceholderViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setImageRect:(CGRect)arg1 ;
-(void)showLoadingIndicator;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1 ;
-(void)showLoadingIndicatorWhenReady;
-(void)showErrorIndicator;
-(void)updateCloudDownloadProgress:(double)arg1 ;
-(void)setToolbarVisible:(BOOL)arg1 ;
-(void)setRetryDelegate:(id)arg1 ;
-(void)_retryDownload;
@end
