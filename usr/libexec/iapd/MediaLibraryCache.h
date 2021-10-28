//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MediaLibraryCache : NSObject
{
    NSMutableDictionary *_itemCaches;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_mediaLibraryCacheQ;	// 16 = 0x10
}

- (void)performOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000010003d354
- (void)invalidateMediaItem:(id)arg1;	// IMP=0x000000010003d138
- (id)collectionsForPropertyNoQ:(id)arg1;	// IMP=0x000000010003d100
- (id)collectionsForProperty:(id)arg1;	// IMP=0x000000010003cffc
- (void)setCollectionsNoQ:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000010003cfc8
- (void)setCollections:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000010003cf40
- (id)itemNamesForRangeNoQ:(struct _NSRange)arg1 forProperty:(id)arg2;	// IMP=0x000000010003ceec
- (id)itemCountForPropertyNoQ:(id)arg1;	// IMP=0x000000010003ceb4
- (id)itemNamesForRange:(struct _NSRange)arg1 forProperty:(id)arg2;	// IMP=0x000000010003cda8
- (id)itemCountForProperty:(id)arg1;	// IMP=0x000000010003cca0
- (void)setItemNamesNoQ:(id)arg1 forRange:(struct _NSRange)arg2 forProperty:(id)arg3;	// IMP=0x000000010003cc54
- (void)setItemCountNoQ:(unsigned int)arg1 forProperty:(id)arg2;	// IMP=0x000000010003cc00
- (void)setItemNames:(id)arg1 forRange:(struct _NSRange)arg2 forProperty:(id)arg3;	// IMP=0x000000010003cae8
- (void)setItemCount:(unsigned int)arg1 forProperty:(id)arg2;	// IMP=0x000000010003ca60
- (id)globalItemCountForPropertyNoQ:(id)arg1;	// IMP=0x000000010003ca3c
- (void)setGlobalItemCountNoQ:(unsigned int)arg1 ForProperty:(id)arg2;	// IMP=0x000000010003c93c
- (id)globalItemCountForProperty:(id)arg1;	// IMP=0x000000010003c818
- (void)setGlobalItemCount:(unsigned int)arg1 ForProperty:(id)arg2;	// IMP=0x000000010003c724
- (void)reset;	// IMP=0x000000010003c550
- (id)description;	// IMP=0x000000010003c500
- (void)dealloc;	// IMP=0x000000010003c48c
- (id)init;	// IMP=0x000000010003c410

@end
