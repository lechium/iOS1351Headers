/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class UIImageView, SKUIViewElementLayoutContext, SKUIMetricsImpressionSession, SKUIPanelView, SKUILayoutCache, UIScrollView, SKUIPanelTemplateViewElement, NSString;

@interface SKUIPanelDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {

	UIImageView* _backgroundImageView;
	BOOL _didAttemptBecomeFirstResponder;
	CGRect _keyboardFrame;
	long long _lastContentWidth;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIMetricsImpressionSession* _metricsImpressionSession;
	SKUIPanelView* _panelView;
	SKUILayoutCache* _textLayoutCache;
	UIScrollView* _scrollView;
	SKUIPanelTemplateViewElement* _templateElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)_layoutBackgroundImageView;
-(id)_activeBackgroundColor;
-(id)_layoutContext;
-(void)_keyboardWillChangeNotification:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)impressionableViewElements;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)_keyboardHideNotification:(id)arg1 ;
-(id)_templateBackgroundColor;
-(void)_reloadBackgroundImageView;
-(void)_layoutScrollView;
-(void)_reloadPanelViewWithScrollViewSize:(CGSize)arg1 ;
-(void)_reloadContentSize;
-(id)_imageForBackgroundImageElement:(id)arg1 ;
-(void)_requestPanelViewLayoutWithContentWidth:(long long)arg1 forced:(BOOL)arg2 ;
-(id)initWithTemplateElement:(id)arg1 ;
@end
