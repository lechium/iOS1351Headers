//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NSSUsageRespMsgBundleUsage : PBCodable <NSCopying>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_categories;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    _Bool _purgeable;	// 32 = 0x20
    struct {
        unsigned int purgeable:1;
    } _has;	// 36 = 0x24
}

+ (Class)categoriesType;	// IMP=0x0000000100008790
- (void).cxx_destruct;	// IMP=0x0000000100009708
@property(nonatomic) _Bool purgeable; // @synthesize purgeable=_purgeable;
@property(retain, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000094e4
- (unsigned long long)hash;	// IMP=0x000000010000943c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100009300
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100009104
- (void)copyTo:(id)arg1;	// IMP=0x0000000100008fd0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100008e50
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100008e48
- (id)dictionaryRepresentation;	// IMP=0x00000001000088a4
- (id)description;	// IMP=0x00000001000087f0
@property(nonatomic) _Bool hasPurgeable;
- (id)categoriesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100008778
- (unsigned long long)categoriesCount;	// IMP=0x0000000100008760
- (void)addCategories:(id)arg1;	// IMP=0x00000001000086ec
- (void)clearCategories;	// IMP=0x00000001000086d4

@end

