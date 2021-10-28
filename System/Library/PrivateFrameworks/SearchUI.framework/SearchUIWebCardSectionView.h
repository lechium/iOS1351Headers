/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@class WKWebView, NUIContainerBoxView, NSString;

@interface SearchUIWebCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, WKNavigationDelegate, WKScriptMessageHandler> {

	double _contentHeight;
	WKWebView* _webView;

}

@property (nonatomic,retain) NUIContainerBoxView * contentView; 
@property (assign,nonatomic) double contentHeight;                           //@synthesize contentHeight=_contentHeight - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(double)contentHeight;
-(void)setContentHeight:(double)arg1 ;
-(id)setupContentView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(id)replaceSemanticColor:(id)arg1 withColor:(id)arg2 inString:(id)arg3 ;
@end
