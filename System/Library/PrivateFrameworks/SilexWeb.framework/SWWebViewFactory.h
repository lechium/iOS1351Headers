/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWWebViewFactory.h>

@protocol SWWebViewFactory <NSObject>
@required
-(id)createWebViewWithUserContentController:(id)arg1;

@end


@class NSPointerArray, WKProcessPool, WKWebsiteDataStore, NSString;

@interface SWWebViewFactory : NSObject <SWWebViewFactory> {

	NSPointerArray* _webViews;
	WKProcessPool* _processPool;
	WKWebsiteDataStore* _dataStore;

}

@property (nonatomic,readonly) WKProcessPool * processPool;                 //@synthesize processPool=_processPool - In the implementation block
@property (nonatomic,readonly) WKWebsiteDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) NSPointerArray * webViews;                     //@synthesize webViews=_webViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebsiteDataStore *)dataStore;
-(WKProcessPool *)processPool;
-(id)createWebViewWithUserContentController:(id)arg1 ;
-(id)initWithProcessPool:(id)arg1 websiteDataStore:(id)arg2 ;
-(void)assignRelatedWebViewToConfiguration:(id)arg1 ;
-(NSPointerArray *)webViews;
-(void)setWebViews:(NSPointerArray *)arg1 ;
@end
