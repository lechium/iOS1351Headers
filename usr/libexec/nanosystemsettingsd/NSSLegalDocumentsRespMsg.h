//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface NSSLegalDocumentsRespMsg : PBCodable <NSCopying>
{
    NSString *_buildVersion;	// 8 = 0x8
    NSData *_builtinApps;	// 16 = 0x10
    NSData *_legalNotices;	// 24 = 0x18
    NSData *_license;	// 32 = 0x20
    NSData *_sarStatement;	// 40 = 0x28
    _Bool _sarUrlAdded;	// 48 = 0x30
    struct {
        unsigned int sarUrlAdded:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000010000475c
@property(retain, nonatomic) NSData *builtinApps; // @synthesize builtinApps=_builtinApps;
@property(nonatomic) _Bool sarUrlAdded; // @synthesize sarUrlAdded=_sarUrlAdded;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSData *legalNotices; // @synthesize legalNotices=_legalNotices;
@property(retain, nonatomic) NSData *sarStatement; // @synthesize sarStatement=_sarStatement;
@property(retain, nonatomic) NSData *license; // @synthesize license=_license;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000045a0
- (unsigned long long)hash;	// IMP=0x00000001000044c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100004330
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000041dc
- (void)copyTo:(id)arg1;	// IMP=0x00000001000040e4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100004004
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100003ffc
- (id)dictionaryRepresentation;	// IMP=0x0000000100003bb4
- (id)description;	// IMP=0x0000000100003b00
@property(readonly, nonatomic) _Bool hasBuiltinApps;
@property(nonatomic) _Bool hasSarUrlAdded;
@property(readonly, nonatomic) _Bool hasBuildVersion;
@property(readonly, nonatomic) _Bool hasLegalNotices;
@property(readonly, nonatomic) _Bool hasSarStatement;
@property(readonly, nonatomic) _Bool hasLicense;

@end
