//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface PDDPStateChangeParticipants : PBCodable <NSCopying>
{
    NSMutableArray *_recipientGroups;	// 8 = 0x8
    NSString *_recipientPersonId;	// 16 = 0x10
    NSMutableArray *_recipientPersonIds;	// 24 = 0x18
    NSString *_senderPersonId;	// 32 = 0x20
}

+ (Class)recipientGroupsType;	// IMP=0x00000001000794a8
+ (Class)recipientPersonIdsType;	// IMP=0x00000001000793e0
- (void).cxx_destruct;	// IMP=0x000000010007a528
@property(retain, nonatomic) NSString *recipientPersonId; // @synthesize recipientPersonId=_recipientPersonId;
@property(retain, nonatomic) NSMutableArray *recipientGroups; // @synthesize recipientGroups=_recipientGroups;
@property(retain, nonatomic) NSMutableArray *recipientPersonIds; // @synthesize recipientPersonIds=_recipientPersonIds;
@property(retain, nonatomic) NSString *senderPersonId; // @synthesize senderPersonId=_senderPersonId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010007a26c
- (unsigned long long)hash;	// IMP=0x000000010007a1e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007a0bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100079e1c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100079c78
- (void)writeTo:(id)arg1;	// IMP=0x0000000100079a6c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100079a64
- (id)dictionaryRepresentation;	// IMP=0x0000000100079580
- (id)description;	// IMP=0x00000001000794cc
@property(readonly, nonatomic) _Bool hasRecipientPersonId;
- (id)recipientGroupsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100079490
- (unsigned long long)recipientGroupsCount;	// IMP=0x0000000100079478
- (void)addRecipientGroups:(id)arg1;	// IMP=0x0000000100079404
- (void)clearRecipientGroups;	// IMP=0x00000001000793ec
- (id)recipientPersonIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000793c8
- (unsigned long long)recipientPersonIdsCount;	// IMP=0x00000001000793b0
- (void)addRecipientPersonIds:(id)arg1;	// IMP=0x000000010007933c
- (void)clearRecipientPersonIds;	// IMP=0x0000000100079324
@property(readonly, nonatomic) _Bool hasSenderPersonId;

@end

