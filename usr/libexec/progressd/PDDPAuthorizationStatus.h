//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface PDDPAuthorizationStatus : PBCodable <NSCopying>
{
    NSMutableArray *_classIds;	// 8 = 0x8
    NSString *_parentObjectId;	// 16 = 0x10
    _Bool _isAuthorizable;	// 24 = 0x18
    struct {
        unsigned int isAuthorizable:1;
    } _has;	// 28 = 0x1c
}

+ (Class)classIdsType;	// IMP=0x00000001000ae644
- (void).cxx_destruct;	// IMP=0x00000001000af278
@property(retain, nonatomic) NSMutableArray *classIds; // @synthesize classIds=_classIds;
@property(nonatomic) _Bool isAuthorizable; // @synthesize isAuthorizable=_isAuthorizable;
@property(retain, nonatomic) NSString *parentObjectId; // @synthesize parentObjectId=_parentObjectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000af098
- (unsigned long long)hash;	// IMP=0x00000001000af00c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000aeef8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000aed2c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000aec0c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000aea9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000aea94
- (id)dictionaryRepresentation;	// IMP=0x00000001000ae704
- (id)description;	// IMP=0x00000001000ae650
- (id)classIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000ae62c
- (unsigned long long)classIdsCount;	// IMP=0x00000001000ae614
- (void)addClassIds:(id)arg1;	// IMP=0x00000001000ae5a0
- (void)clearClassIds;	// IMP=0x00000001000ae588
@property(nonatomic) _Bool hasIsAuthorizable;
@property(readonly, nonatomic) _Bool hasParentObjectId;

@end
