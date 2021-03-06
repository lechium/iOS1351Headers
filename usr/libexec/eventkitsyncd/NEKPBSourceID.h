//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NEKPBSourceID : PBCodable <NSCopying>
{
    NSString *_persistentID;	// 8 = 0x8
    _Bool _isLocalStore;	// 16 = 0x10
    struct {
        unsigned int isLocalStore:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000100006fcc
@property(nonatomic) _Bool isLocalStore; // @synthesize isLocalStore=_isLocalStore;
@property(retain, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100006f20
- (unsigned long long)hash;	// IMP=0x0000000100006eb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100006dd4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100006d2c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100006cb4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100006c44
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100006c3c
- (id)dictionaryRepresentation;	// IMP=0x0000000100006910
- (id)description;	// IMP=0x000000010000685c
@property(nonatomic) _Bool hasIsLocalStore;
@property(readonly, nonatomic) _Bool hasPersistentID;

@end

