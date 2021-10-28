/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSiteMetadataFetchOperation.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol WBSWebViewMetadataFetchOperationDelegate;
@class WKWebView, WKWebViewConfiguration, NSString;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate> {

	id<WBSWebViewMetadataFetchOperationDelegate> _delegate;
	WKWebView* _webView;

}

@property (assign,nonatomic,__weak) id<WBSWebViewMetadataFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                                     //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) WKWebViewConfiguration * webViewConfiguration; 
@property (nonatomic,readonly) CGSize webViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<WBSWebViewMetadataFetchOperationDelegate>)delegate;
-(void)setDelegate:(id<WBSWebViewMetadataFetchOperationDelegate>)arg1 ;
-(void)cancel;
-(void)start;
-(WKWebView *)webView;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(WKWebViewConfiguration *)webViewConfiguration;
-(void)didCreateWebView;
-(void)clearWebView;
-(void)willClearWebView;
-(void)didFailFetch;
-(CGSize)webViewSize;
-(void)startOffscreenFetching;
-(void)_setUpWebViewAndStartOffscreenFetching;
@end
