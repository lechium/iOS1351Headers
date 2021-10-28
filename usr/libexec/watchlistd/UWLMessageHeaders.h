//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UWLMessageHeaders : PBCodable <NSCopying>
{
    NSMutableArray *_cookies;	// 8 = 0x8
    NSString *_correlationKey;	// 16 = 0x10
    NSString *_userAgent;	// 24 = 0x18
    NSString *_xAppleStorefront;	// 32 = 0x20
    NSString *_xDsid;	// 40 = 0x28
    NSString *_xGuid;	// 48 = 0x30
    NSString *_xUseridKey;	// 56 = 0x38
    NSString *_xUseridKeyspace;	// 64 = 0x40
}

+ (Class)cookiesType;	// IMP=0x00000001000196fc
- (void).cxx_destruct;	// IMP=0x000000010001a9a0
@property(retain, nonatomic) NSMutableArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSString *xUseridKey; // @synthesize xUseridKey=_xUseridKey;
@property(retain, nonatomic) NSString *xUseridKeyspace; // @synthesize xUseridKeyspace=_xUseridKeyspace;
@property(retain, nonatomic) NSString *correlationKey; // @synthesize correlationKey=_correlationKey;
@property(retain, nonatomic) NSString *xGuid; // @synthesize xGuid=_xGuid;
@property(retain, nonatomic) NSString *xAppleStorefront; // @synthesize xAppleStorefront=_xAppleStorefront;
@property(retain, nonatomic) NSString *xDsid; // @synthesize xDsid=_xDsid;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010001a664
- (unsigned long long)hash;	// IMP=0x000000010001a578
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001a39c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001a10c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100019f68
- (void)writeTo:(id)arg1;	// IMP=0x0000000100019d88
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100019d80
- (id)dictionaryRepresentation;	// IMP=0x00000001000197bc
- (id)description;	// IMP=0x0000000100019708
- (id)cookiesAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000196e4
- (unsigned long long)cookiesCount;	// IMP=0x00000001000196cc
- (void)addCookies:(id)arg1;	// IMP=0x0000000100019658
- (void)clearCookies;	// IMP=0x0000000100019640
@property(readonly, nonatomic) _Bool hasXUseridKey;
@property(readonly, nonatomic) _Bool hasXUseridKeyspace;
@property(readonly, nonatomic) _Bool hasCorrelationKey;
@property(readonly, nonatomic) _Bool hasXGuid;

@end
