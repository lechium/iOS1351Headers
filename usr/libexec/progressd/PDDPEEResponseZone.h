//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString, PDDPStatus;

@interface PDDPEEResponseZone : PBCodable <NSCopying>
{
    NSData *_cursor;	// 8 = 0x8
    PDDPStatus *_status;	// 16 = 0x10
    int _totalFound;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
    struct {
        unsigned int totalFound:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000c416c
@property(nonatomic) int totalFound; // @synthesize totalFound=_totalFound;
@property(retain, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c4020
- (unsigned long long)hash;	// IMP=0x00000001000c3f80
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c3e4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c3d50
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c3c98
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c3bf0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c3be8
- (id)dictionaryRepresentation;	// IMP=0x00000001000c37b8
- (id)description;	// IMP=0x00000001000c3704
@property(nonatomic) _Bool hasTotalFound;
@property(readonly, nonatomic) _Bool hasCursor;
@property(readonly, nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasZoneName;

@end
