/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol WFWebViewControllerDelegate;
@class WKWebView;

@interface WFWebViewController : UIViewController {

	id<WFWebViewControllerDelegate> _delegate;
	WKWebView* _webView;

}

@property (nonatomic,retain) WKWebView * webView;                                          //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<WFWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<WFWebViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWebViewControllerDelegate>)arg1 ;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)done;
-(void)loadView;
-(WKWebView *)webView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)updateNavigationItems;
@end
