//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface FBATableUpdates : NSObject
{
    NSIndexSet *_addedSections;	// 8 = 0x8
    NSIndexSet *_removedSections;	// 16 = 0x10
    NSArray *_addedIndexPaths;	// 24 = 0x18
    NSArray *_removedIndexPaths;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000c9d38
@property(copy) NSArray *removedIndexPaths; // @synthesize removedIndexPaths=_removedIndexPaths;
@property(copy) NSArray *addedIndexPaths; // @synthesize addedIndexPaths=_addedIndexPaths;
@property(copy) NSIndexSet *removedSections; // @synthesize removedSections=_removedSections;
@property(copy) NSIndexSet *addedSections; // @synthesize addedSections=_addedSections;
- (id)description;	// IMP=0x00000001000c9bb8
- (_Bool)containsAnyUpdates;	// IMP=0x00000001000c9aa8

@end
