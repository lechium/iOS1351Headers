/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBFFileCacheFaultHandler.h>

@class NSArray, NSURLSession, NSString;

@interface SBFFileCacheURLFaultHandler : NSObject <SBFFileCacheFaultHandler> {

	NSArray* _retryIntervals;
	NSURLSession* _urlSession;

}

@property (retain) NSURLSession * urlSession;                       //@synthesize urlSession=_urlSession - In the implementation block
@property (copy) NSArray * retryIntervals;                          //@synthesize retryIntervals=_retryIntervals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(void)fileCache:(id)arg1 loadFileForIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)retryIntervals;
-(void)attemptLoadFromURL:(id)arg1 session:(id)arg2 retryIntervalEnumerator:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performLoadFromURL:(id)arg1 session:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRetryIntervals:(NSArray *)arg1 ;
@end

