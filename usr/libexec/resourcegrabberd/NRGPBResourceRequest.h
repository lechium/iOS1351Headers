//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NRGPBResourceRequest : PBRequest <NSCopying>
{
    NSString *_bundleID;	// 8 = 0x8
    int _iconVariant;	// 16 = 0x10
    float _screenScale;	// 20 = 0x14
    int _type;	// 24 = 0x18
    struct {
        unsigned int iconVariant:1;
        unsigned int screenScale:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000001000107a4
@property(nonatomic) int iconVariant; // @synthesize iconVariant=_iconVariant;
@property(nonatomic) float screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100010694
- (unsigned long long)hash;	// IMP=0x00000001000105b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100010494
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000103b8
- (void)copyTo:(id)arg1;	// IMP=0x000000010001030c
- (void)writeTo:(id)arg1;	// IMP=0x000000010001025c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100010254
- (id)dictionaryRepresentation;	// IMP=0x000000010000fd68
- (id)description;	// IMP=0x000000010000fcb4
@property(nonatomic) _Bool hasIconVariant;
@property(nonatomic) _Bool hasScreenScale;
@property(readonly, nonatomic) _Bool hasBundleID;

@end

