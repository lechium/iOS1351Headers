//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
{
}

+ (id)attributesDescriptionsForAttributesWithKeys:(id)arg1;	// IMP=0x0000000100043594
+ (id)uniqueObjectIDLookupWithContext:(id)arg1;	// IMP=0x0000000100043428
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0000000100043348
+ (id)uniqueAttributeName;	// IMP=0x0000000100043268
+ (void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100042fa4
+ (id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100042cf0
+ (unsigned long long)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100042a78
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100042800
+ (id)allObjectsInContext:(id)arg1;	// IMP=0x00000001000427ec
+ (id)fetchSortDescriptors;	// IMP=0x00000001000427e4
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x00000001000427dc
+ (id)fetchRequestForContext:(id)arg1;	// IMP=0x0000000100042620
+ (id)entityInManagedObjectContext:(id)arg1;	// IMP=0x000000010004221c
+ (id)entityName;	// IMP=0x0000000100042144
- (void)invalidate;	// IMP=0x0000000100043264
- (_Bool)isValid;	// IMP=0x000000010004325c
- (id)initWithManagedObjectContext:(id)arg1;	// IMP=0x00000001000423fc
- (id)internalRepresentation;	// IMP=0x000000010004213c
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010004202c
- (_Bool)hasImages;	// IMP=0x0000000100044648
- (void)clearImages;	// IMP=0x00000001000443a0
- (void)deleteCachedImage:(id)arg1;	// IMP=0x000000010004407c
- (id)imageURLDictionary;	// IMP=0x0000000100043c9c
- (id)updateImagesWithImageURLs:(id)arg1;	// IMP=0x000000010004388c
- (id)imageCacheKeyPathsByKey;	// IMP=0x000000010004365c

@end
