/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSObject, NSMutableIndexSet, NSMutableSet, NSMutableArray;

@interface PXGAssetImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableIndexSet* _activeRequestIDs;
	NSMutableSet* _activeAssets;
	NSMutableArray* _entries;
	NSMutableArray* _reusableEntries;

}
-(id)init;
-(CGImageRef)cachedImageWithOrientation:(unsigned*)arg1 forAsset:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 forRequestID:(int)arg5 ;
-(void)cacheImage:(CGImageRef)arg1 orientation:(unsigned)arg2 forRequestID:(int)arg3 ;
-(void)clearCachedImagesForRequestIDs:(id)arg1 ;
@end

