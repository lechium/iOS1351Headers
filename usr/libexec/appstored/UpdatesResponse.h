//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface UpdatesResponse : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001b5c3c
- (id)_prunedSizeWithVariantSizes:(id)arg1;	// IMP=0x00000001001b5940
- (id)_prunedSizeWithUpdateSizes:(id)arg1 forInstalledVariant:(id)arg2 versionId:(id)arg3;	// IMP=0x00000001001b5628
- (id)_prunedSizeWithDeviceSizes:(id)arg1;	// IMP=0x00000001001b54f8
- (id)_prunedSizeDictionary:(id)arg1 forVariantId:(id)arg2 versionId:(id)arg3;	// IMP=0x00000001001b52d8
- (id)_prunedUpdateDictionary:(id)arg1 forItemID:(id)arg2;	// IMP=0x00000001001b44f4
- (id)_prunedArtworkDictionary:(id)arg1;	// IMP=0x00000001001b437c
@property(readonly) NSArray *updates;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001001b415c

@end

