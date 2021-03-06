//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface MBSAccount : PBCodable <NSCopying>
{
    NSString *_accountID;	// 8 = 0x8
    NSMutableArray *_backupUDIDs;	// 16 = 0x10
    _Bool _loggingEnabled;	// 24 = 0x18
    struct {
        unsigned int loggingEnabled:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property(retain, nonatomic) NSMutableArray *backupUDIDs; // @synthesize backupUDIDs=_backupUDIDs;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100104c24
- (unsigned long long)hash;	// IMP=0x0000000100104b94
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100104ab0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001048ec
- (void)copyTo:(id)arg1;	// IMP=0x00000001001047f4
- (void)writeTo:(id)arg1;	// IMP=0x00000001001046a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100104698
- (id)dictionaryRepresentation;	// IMP=0x0000000100104328
- (id)description;	// IMP=0x00000001001042a8
@property(nonatomic) _Bool hasLoggingEnabled;
- (id)backupUDIDAtIndex:(unsigned long long)arg1;	// IMP=0x000000010010423c
- (unsigned long long)backupUDIDsCount;	// IMP=0x0000000100104224
- (void)addBackupUDID:(id)arg1;	// IMP=0x00000001001041d0
- (void)clearBackupUDIDs;	// IMP=0x00000001001041b8
@property(readonly, nonatomic) _Bool hasAccountID;
- (void)dealloc;	// IMP=0x000000010010413c

@end

