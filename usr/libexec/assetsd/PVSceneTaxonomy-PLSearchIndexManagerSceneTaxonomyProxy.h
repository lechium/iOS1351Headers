//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVSceneTaxonomy.h>

#import "PLSearchIndexManagerSceneTaxonomyProxy-Protocol.h"

@class NSString;

@interface PVSceneTaxonomy (PLSearchIndexManagerSceneTaxonomyProxy) <PLSearchIndexManagerSceneTaxonomyProxy>
+ (id)sceneTaxonomyProxy;	// IMP=0x000000010000fd8c
- (void)enumerateKeywordAndSynonymsForSceneIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f7e4
- (void)enumerateKeywordAndSynonymsForSceneClassifications:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f70c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *sha256Hash;
@property(readonly) Class superclass;
@end
