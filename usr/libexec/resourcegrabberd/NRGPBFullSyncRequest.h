//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NRGPBFullSyncRequest : PBRequest <NSCopying>
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _iconVariants;	// 8 = 0x8
    NSMutableArray *_bundleIDs;	// 32 = 0x20
}

+ (Class)bundleIDsType;	// IMP=0x000000010000f01c
- (void).cxx_destruct;	// IMP=0x000000010000fbe0
@property(retain, nonatomic) NSMutableArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000fa2c
- (unsigned long long)hash;	// IMP=0x000000010000f9e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000f928
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000f79c
- (void)copyTo:(id)arg1;	// IMP=0x000000010000f64c
- (void)writeTo:(id)arg1;	// IMP=0x000000010000f4e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000f4dc
- (id)dictionaryRepresentation;	// IMP=0x000000010000f0dc
- (id)description;	// IMP=0x000000010000f028
- (id)bundleIDsAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000f004
- (unsigned long long)bundleIDsCount;	// IMP=0x000000010000efec
- (void)addBundleIDs:(id)arg1;	// IMP=0x000000010000ef78
- (void)clearBundleIDs;	// IMP=0x000000010000ef60
- (void)setIconVariants:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010000ef48
- (int)iconVariantsAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000ee70
- (void)addIconVariants:(int)arg1;	// IMP=0x000000010000ee5c
- (void)clearIconVariants;	// IMP=0x000000010000ee4c
@property(readonly, nonatomic) int *iconVariants;
@property(readonly, nonatomic) unsigned long long iconVariantsCount;
- (void)dealloc;	// IMP=0x000000010000edd8

@end
