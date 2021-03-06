//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class MBSBackupAttributes, NSData, NSMutableArray;

@interface MBSBackup : PBCodable <NSCopying>
{
    unsigned long long _keysLastModified;	// 8 = 0x8
    unsigned long long _quotaUsed;	// 16 = 0x10
    MBSBackupAttributes *_attributes;	// 24 = 0x18
    NSData *_backupUDID;	// 32 = 0x20
    NSMutableArray *_snapshots;	// 40 = 0x28
    struct {
        unsigned int keysLastModified:1;
        unsigned int quotaUsed:1;
    } _has;	// 48 = 0x30
}

+ (id)backup;	// IMP=0x0000000100183598
@property(nonatomic) unsigned long long keysLastModified; // @synthesize keysLastModified=_keysLastModified;
@property(retain, nonatomic) MBSBackupAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableArray *snapshots; // @synthesize snapshots=_snapshots;
@property(nonatomic) unsigned long long quotaUsed; // @synthesize quotaUsed=_quotaUsed;
@property(retain, nonatomic) NSData *backupUDID; // @synthesize backupUDID=_backupUDID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100105df4
- (unsigned long long)hash;	// IMP=0x0000000100105d24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100105be4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001059d4
- (void)copyTo:(id)arg1;	// IMP=0x0000000100105890
- (void)writeTo:(id)arg1;	// IMP=0x00000001001056f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001056f0
- (id)dictionaryRepresentation;	// IMP=0x0000000100105044
- (id)description;	// IMP=0x0000000100104fc4
@property(nonatomic) _Bool hasKeysLastModified;
@property(readonly, nonatomic) _Bool hasAttributes;
- (id)snapshotAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100104f40
- (unsigned long long)snapshotsCount;	// IMP=0x0000000100104f28
- (void)addSnapshot:(id)arg1;	// IMP=0x0000000100104ed4
- (void)clearSnapshots;	// IMP=0x0000000100104ebc
@property(nonatomic) _Bool hasQuotaUsed;
@property(readonly, nonatomic) _Bool hasBackupUDID;
- (void)dealloc;	// IMP=0x0000000100104dd8
@property(readonly, nonatomic, getter=canRestoreSystemFiles) _Bool restoreSystemFiles;

@end

