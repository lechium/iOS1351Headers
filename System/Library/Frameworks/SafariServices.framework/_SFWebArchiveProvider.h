/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_SFQuickLookDocumentSource.h>

@class _SFQuickLookDocument, NSData, NSString, NSURL, WKWebView;

@interface _SFWebArchiveProvider : NSObject <_SFQuickLookDocumentSource> {

	_SFQuickLookDocument* _quickLookDocument;
	NSData* _webArchiveData;
	NSString* _cachedWebViewTitle;
	NSURL* _cachedWebViewURL;
	WKWebView* _webView;

}

@property (nonatomic,__weak,readonly) WKWebView * webView;                                //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) NSString * suggestedFilenameWithExtension; 
@property (nonatomic,readonly) NSString * suggestedFilenameWithoutExtension; 
@property (nonatomic,readonly) BOOL canGenerateWebArchive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(id)initWithWebView:(id)arg1 ;
-(BOOL)canGenerateWebArchive;
-(void)generateWebArchiveWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)suggestedFilenameWithExtension;
-(NSString *)suggestedFilenameWithoutExtension;
-(id)_suggestedFilenameWithoutExtension;
-(id)_webViewUTI;
-(id)_quickLookDocument;
-(id)dataForQuickLookDocument:(id)arg1 ;
-(id)suggestedFileNameForQuickLookDocument:(id)arg1 ;
-(id)suggestedFileExtensionForQuickLookDocument:(id)arg1 ;
@end

