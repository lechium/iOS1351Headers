//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLFileStorageItem.h>

@class NSURL;

@interface CPLBucketFileStorageItem : CPLFileStorageItem
{
    NSURL *_url;	// 8 = 0x8
    _Bool _attributesAreCached;	// 16 = 0x10
    _Bool _cachedOriginal;	// 17 = 0x11
    _Bool _cachedMarkedForDelete;	// 18 = 0x12
}

- (void).cxx_destruct;	// IMP=0x000000010005d80c
- (_Bool)isMarkedForDelete;	// IMP=0x000000010005d7c4
- (_Bool)isOriginal;	// IMP=0x000000010005d77c
- (void)_cacheAttributes;	// IMP=0x000000010005d5b4
- (id)initWithIdentity:(id)arg1 url:(id)arg2;	// IMP=0x000000010005d4fc

@end

