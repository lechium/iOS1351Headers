/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLRequest, WKWebView, NSArray, NSData, WKFrameInfo, NSString;

@interface _WKDownload : NSObject <WKObject, NSCopying> {

	ObjectStorage<WebKit::DownloadProxy> _download;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,__weak,readonly) WKWebView * originatingWebView; 
@property (nonatomic,copy,readonly) NSArray * redirectChain; 
@property (nonatomic,readonly) BOOL wasUserInitiated; 
@property (nonatomic,readonly) NSData * resumeData; 
@property (nonatomic,readonly) WKFrameInfo * originatingFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(NSURLRequest *)request;
-(NSData *)resumeData;
-(Object*)_apiObject;
-(void)publishProgressAtURL:(id)arg1 ;
-(WKWebView *)originatingWebView;
-(NSArray *)redirectChain;
-(BOOL)wasUserInitiated;
-(WKFrameInfo *)originatingFrame;
@end
