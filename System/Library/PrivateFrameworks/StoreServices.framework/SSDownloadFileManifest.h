/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {

	SSXPCConnection* _connection;
	long long _manifestType;

}

@property (readonly) long long manifestType; 
-(id)init;
-(void)dealloc;
-(id)initWithManifestType:(long long)arg1 ;
-(void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)manifestType;
-(void)rebuildManifestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeItemWithAssetPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

