/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface PLAssetResourceDownloadManager : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _requestIsolationQueue;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _requestById;
	Ai _currentRequestId;

}
+(id)defaultManager;
-(id)init;
-(void)cancelRequest:(int)arg1 ;
-(int)requestCloudResourceType:(unsigned long long)arg1 assetObjectID:(id)arg2 library:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_requestWithID:(int)arg1 ;
-(void)_setRequest:(id)arg1 forRequestID:(int)arg2 ;
@end

