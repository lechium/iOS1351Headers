//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPStateChange : PBCodable <NSCopying>
{
    PDDPDate *_dateCreated;	// 8 = 0x8
    PDDPDate *_dateLastModified;	// 16 = 0x10
    NSString *_objectId;	// 24 = 0x18
    NSMutableArray *_stateChangePayloads;	// 32 = 0x20
    NSString *_targetClassId;	// 40 = 0x28
    NSString *_targetEntityName;	// 48 = 0x30
    NSString *_targetObjectId;	// 56 = 0x38
    NSString *_targetOwnerPersonId;	// 64 = 0x40
}

+ (Class)stateChangePayloadsType;	// IMP=0x000000010013a7dc
- (void).cxx_destruct;	// IMP=0x000000010013bb0c
@property(retain, nonatomic) NSMutableArray *stateChangePayloads; // @synthesize stateChangePayloads=_stateChangePayloads;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *targetOwnerPersonId; // @synthesize targetOwnerPersonId=_targetOwnerPersonId;
@property(retain, nonatomic) NSString *targetClassId; // @synthesize targetClassId=_targetClassId;
@property(retain, nonatomic) NSString *targetEntityName; // @synthesize targetEntityName=_targetEntityName;
@property(retain, nonatomic) NSString *targetObjectId; // @synthesize targetObjectId=_targetObjectId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010013b7a4
- (unsigned long long)hash;	// IMP=0x000000010013b6d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010013b4f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010013b27c
- (void)copyTo:(id)arg1;	// IMP=0x000000010013b0c8
- (void)writeTo:(id)arg1;	// IMP=0x000000010013aed8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010013aed0
- (id)dictionaryRepresentation;	// IMP=0x000000010013a89c
- (id)description;	// IMP=0x000000010013a7e8
- (id)stateChangePayloadsAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013a7c4
- (unsigned long long)stateChangePayloadsCount;	// IMP=0x000000010013a7ac
- (void)addStateChangePayloads:(id)arg1;	// IMP=0x000000010013a738
- (void)clearStateChangePayloads;	// IMP=0x000000010013a720
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasTargetOwnerPersonId;
@property(readonly, nonatomic) _Bool hasTargetClassId;
@property(readonly, nonatomic) _Bool hasTargetEntityName;
@property(readonly, nonatomic) _Bool hasTargetObjectId;
@property(readonly, nonatomic) _Bool hasObjectId;

@end

