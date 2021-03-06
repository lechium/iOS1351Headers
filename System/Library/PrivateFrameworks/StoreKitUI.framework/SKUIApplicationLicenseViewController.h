/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewController.h>

@class SKUIApplicationLicensePage, SSVLoadURLOperation, NSURL, UIWebView;

@interface SKUIApplicationLicenseViewController : SKUIViewController {

	SKUIApplicationLicensePage* _licensePage;
	SSVLoadURLOperation* _loadOperation;
	NSURL* _url;
	UIWebView* _webView;

}
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadData;
-(id)initWithLicenseAgreementURL:(id)arg1 ;
-(void)_displayPage:(id)arg1 error:(id)arg2 ;
-(id)initWithLicenseAgreementPage:(id)arg1 ;
@end

