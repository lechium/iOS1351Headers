/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/ICDocCamZoomablePageContentViewDelegate.h>

@protocol ICDocCamZoomablePageContentDelegate;
@class UIImage, UIImageView, UIScrollView, NSString;

@interface ICDocCamZoomablePageContentViewController : UIViewController <UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate> {

	BOOL _shouldSetupScalesInViewDidLayoutSubviews;
	id<ICDocCamZoomablePageContentDelegate> _pageContentDelegate;
	UIImage* _image;
	UIImageView* _imageView;
	unsigned long long _pageIndex;
	UIScrollView* _scrollView;
	CGSize _prevScrollViewSize;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                       //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                         //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL shouldSetupScalesInViewDidLayoutSubviews;                                   //@synthesize shouldSetupScalesInViewDidLayoutSubviews=_shouldSetupScalesInViewDidLayoutSubviews - In the implementation block
@property (assign,nonatomic) CGSize prevScrollViewSize;                                                       //@synthesize prevScrollViewSize=_prevScrollViewSize - In the implementation block
@property (assign,nonatomic,__weak) id<ICDocCamZoomablePageContentDelegate> pageContentDelegate;              //@synthesize pageContentDelegate=_pageContentDelegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                                                    //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,readonly) double zoomScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(UIImageView *)imageView;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(double)zoomScale;
-(CGRect)zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2 ;
-(void)resetZoom;
-(void)setupAccessibility;
-(void)setPageContentDelegate:(id<ICDocCamZoomablePageContentDelegate>)arg1 ;
-(void)resetImageCentering;
-(void)setPrevScrollViewSize:(CGSize)arg1 ;
-(void)setShouldSetupScalesInViewDidLayoutSubviews:(BOOL)arg1 ;
-(void)singleTap;
-(void)doubleTap:(id)arg1 ;
-(void)view:(id)arg1 setCenter:(CGPoint)arg2 ;
-(BOOL)shouldSetupScalesInViewDidLayoutSubviews;
-(id<ICDocCamZoomablePageContentDelegate>)pageContentDelegate;
-(void)setupScales;
-(CGSize)prevScrollViewSize;
-(void)pageContentViewDidPencilDown;
@end

