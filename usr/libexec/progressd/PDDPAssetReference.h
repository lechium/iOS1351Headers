//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPAssetReference : PBCodable <NSCopying>
{
    NSString *_appIdentifier;	// 8 = 0x8
    NSString *_ckOwnerName;	// 16 = 0x10
    NSString *_ckShareOwnerName;	// 24 = 0x18
    NSString *_ckShareRecordName;	// 32 = 0x20
    NSString *_ckShareZoneName;	// 40 = 0x28
    NSString *_ckUuid;	// 48 = 0x30
    NSString *_ckZoneName;	// 56 = 0x38
    NSMutableArray *_classIds;	// 64 = 0x40
    PDDPDate *_dateCreated;	// 72 = 0x48
    PDDPDate *_dateLastModified;	// 80 = 0x50
    NSString *_fileUrl;	// 88 = 0x58
    NSString *_icloudDriveContainerName;	// 96 = 0x60
    NSString *_icloudDriveRelativeFilePath;	// 104 = 0x68
    NSString *_objectId;	// 112 = 0x70
    NSString *_ownerId;	// 120 = 0x78
    NSString *_parentObjectId;	// 128 = 0x80
    int _type;	// 136 = 0x88
    _Bool _isOriginal;	// 140 = 0x8c
    struct {
        unsigned int type:1;
        unsigned int isOriginal:1;
    } _has;	// 144 = 0x90
}

+ (Class)classIdsType;	// IMP=0x000000010010d558
- (void).cxx_destruct;	// IMP=0x000000010010f4f0
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSMutableArray *classIds; // @synthesize classIds=_classIds;
@property(nonatomic) _Bool isOriginal; // @synthesize isOriginal=_isOriginal;
@property(retain, nonatomic) NSString *ckShareRecordName; // @synthesize ckShareRecordName=_ckShareRecordName;
@property(retain, nonatomic) NSString *ckShareOwnerName; // @synthesize ckShareOwnerName=_ckShareOwnerName;
@property(retain, nonatomic) NSString *ckShareZoneName; // @synthesize ckShareZoneName=_ckShareZoneName;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(retain, nonatomic) NSString *icloudDriveRelativeFilePath; // @synthesize icloudDriveRelativeFilePath=_icloudDriveRelativeFilePath;
@property(retain, nonatomic) NSString *icloudDriveContainerName; // @synthesize icloudDriveContainerName=_icloudDriveContainerName;
@property(retain, nonatomic) NSString *ckUuid; // @synthesize ckUuid=_ckUuid;
@property(retain, nonatomic) NSString *ckOwnerName; // @synthesize ckOwnerName=_ckOwnerName;
@property(retain, nonatomic) NSString *ckZoneName; // @synthesize ckZoneName=_ckZoneName;
@property(retain, nonatomic) NSString *parentObjectId; // @synthesize parentObjectId=_parentObjectId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010010ef08
- (unsigned long long)hash;	// IMP=0x000000010010ed30
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010010e984
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010e588
- (void)copyTo:(id)arg1;	// IMP=0x000000010010e284
- (void)writeTo:(id)arg1;	// IMP=0x000000010010df6c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010010df64
- (id)dictionaryRepresentation;	// IMP=0x000000010010d648
- (id)description;	// IMP=0x000000010010d594
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
- (id)classIdsAtIndex:(unsigned long long)arg1;	// IMP=0x000000010010d540
- (unsigned long long)classIdsCount;	// IMP=0x000000010010d528
- (void)addClassIds:(id)arg1;	// IMP=0x000000010010d4b4
- (void)clearClassIds;	// IMP=0x000000010010d49c
@property(nonatomic) _Bool hasIsOriginal;
@property(readonly, nonatomic) _Bool hasCkShareRecordName;
@property(readonly, nonatomic) _Bool hasCkShareOwnerName;
@property(readonly, nonatomic) _Bool hasCkShareZoneName;
@property(readonly, nonatomic) _Bool hasOwnerId;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
@property(readonly, nonatomic) _Bool hasFileUrl;
@property(readonly, nonatomic) _Bool hasIcloudDriveRelativeFilePath;
@property(readonly, nonatomic) _Bool hasIcloudDriveContainerName;
@property(readonly, nonatomic) _Bool hasCkUuid;
@property(readonly, nonatomic) _Bool hasCkOwnerName;
@property(readonly, nonatomic) _Bool hasCkZoneName;
@property(readonly, nonatomic) _Bool hasParentObjectId;
@property(readonly, nonatomic) _Bool hasObjectId;
- (int)StringAsType:(id)arg1;	// IMP=0x000000010010d2a4
- (id)typeAsString:(int)arg1;	// IMP=0x000000010010d240
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end
