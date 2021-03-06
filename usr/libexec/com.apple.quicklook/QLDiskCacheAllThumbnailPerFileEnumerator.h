//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "QLDiskCacheEnumerator.h"

@class NSData, QLCacheBlobInfo, QLCacheFileIdentifier, QLCacheIndexDatabaseQueryEnumerator, QLCacheThumbnailData;

@interface QLDiskCacheAllThumbnailPerFileEnumerator : QLDiskCacheEnumerator
{
    QLCacheFileIdentifier *_fileIdentifier;	// 16 = 0x10
    QLCacheIndexDatabaseQueryEnumerator *_cacheIndexDatabaseEnumerator;	// 24 = 0x18
    QLCacheThumbnailData *_thumbnailData;	// 32 = 0x20
    NSData *_bitmapData;	// 40 = 0x28
    QLCacheBlobInfo *_bitmapDataBlobInfo;	// 48 = 0x30
    NSData *_metadata;	// 56 = 0x38
    QLCacheBlobInfo *_metadataBlobInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100026dd4
- (id)nextThumbnailData;	// IMP=0x0000000100026834
- (void)_createNewCacheIndexDatabaseEnumeratorWithFileIdentifier:(id)arg1;	// IMP=0x0000000100026750
- (id)initWithDiskCache:(id)arg1 fileIdentifier:(id)arg2;	// IMP=0x0000000100026688

@end

