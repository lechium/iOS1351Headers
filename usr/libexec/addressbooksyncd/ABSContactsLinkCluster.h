//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ABSContactsLinkCluster : NSObject
{
    NSMutableDictionary *_cluster;	// 8 = 0x8
}

+ (id)null;	// IMP=0x000000010002eee4
- (void).cxx_destruct;	// IMP=0x000000010002f000
- (id)description;	// IMP=0x000000010002ef94
- (_Bool)isNull;	// IMP=0x000000010002ef50
@property(readonly, nonatomic) NSMutableDictionary *clusterDictionary;
- (_Bool)isEqualToABSContactsLinkCluster:(id)arg1;	// IMP=0x000000010002eeb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002ee40
- (void)enumerateContacts_LOCKED:(CDUnknownBlockType)arg1;	// IMP=0x000000010002e994
- (_Bool)haveAllContacts_LOCKED;	// IMP=0x000000010002e6b8
- (id)initWithIdentifier_LOCKED:(id)arg1;	// IMP=0x000000010002e0c0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010002df00
- (id)initWithContact_LOCKED:(id)arg1;	// IMP=0x000000010002dea4
- (id)initWithContact:(id)arg1;	// IMP=0x000000010002dccc
- (id)initWithPBStuff:(id)arg1 contact:(id)arg2;	// IMP=0x000000010002d968

@end
