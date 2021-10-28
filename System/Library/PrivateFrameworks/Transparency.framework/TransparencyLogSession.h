/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_workloop;
@class NSObject, NSURLSession, NSString;

@interface TransparencyLogSession : NSObject <NSURLSessionDelegate> {

	NSObject*<OS_dispatch_workloop> _workloop;
	unsigned long long _fetchCount;
	unsigned long long _downloadCount;
	NSURLSession* _backgroundSession;
	NSURLSession* _foregroundSession;

}

@property (retain) NSURLSession * backgroundSession;                      //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (retain) NSURLSession * foregroundSession;                      //@synthesize foregroundSession=_foregroundSession - In the implementation block
@property (retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (assign) unsigned long long fetchCount;                         //@synthesize fetchCount=_fetchCount - In the implementation block
@property (assign) unsigned long long downloadCount;                      //@synthesize downloadCount=_downloadCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createErrorFromURLResonse:(id)arg1 data:(id)arg2 allowEmptyData:(BOOL)arg3 error:(id)arg4 ;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(NSURLSession *)backgroundSession;
-(BOOL)fetch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)download:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(id)createAuthenticatedBackgroundSession:(id)arg1 delegateQueue:(id)arg2 ;
-(NSURLSession *)foregroundSession;
-(id)createAuthenticatedForegroundSession;
-(void)setForegroundSession:(NSURLSession *)arg1 ;
-(unsigned long long)fetchCount;
-(void)setFetchCount:(unsigned long long)arg1 ;
-(unsigned long long)downloadCount;
-(void)setDownloadCount:(unsigned long long)arg1 ;
-(id)initWithWorkloop:(id)arg1 sessionDelegate:(id)arg2 ;
@end
