/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSURL, NSString, GEODataSessionTask;

@interface GEOResourceManifestDownloadTask : NSObject <GEODataSessionTaskDelegate> {

	GEOOnce_s _started;
	GEOOnce_s _finished;
	NSObject*<OS_dispatch_queue> _queue;
	id<NSObject> _transaction;
	NSURL* _url;
	NSString* _existingETag;
	GEODataSessionTask* _task;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 ;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishWithUpdatedManifest:(id)arg1 newETag:(id)arg2 isExistingManifestCurrent:(BOOL)arg3 error:(id)arg4 ;
-(void)_captureNetworkEventForTask:(id)arg1 ;
@end

