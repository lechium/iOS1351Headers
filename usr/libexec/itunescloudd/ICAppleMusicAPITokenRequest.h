//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface ICAppleMusicAPITokenRequest : PBRequest <NSCopying>
{
    NSString *_bagProfile;	// 8 = 0x8
    NSString *_bagProfileVersion;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    NSString *_clientVersion;	// 32 = 0x20
    _Bool _shouldIgnoreUserTokenCache;	// 40 = 0x28
    struct {
        unsigned int shouldIgnoreUserTokenCache:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000010006273c
@property(nonatomic) _Bool shouldIgnoreUserTokenCache; // @synthesize shouldIgnoreUserTokenCache=_shouldIgnoreUserTokenCache;
@property(retain, nonatomic) NSString *bagProfileVersion; // @synthesize bagProfileVersion=_bagProfileVersion;
@property(retain, nonatomic) NSString *bagProfile; // @synthesize bagProfile=_bagProfile;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000625c4
- (unsigned long long)hash;	// IMP=0x0000000100062504
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010006239c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100062270
- (void)writeTo:(id)arg1;	// IMP=0x00000001000621ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000621a4
- (id)dictionaryRepresentation;	// IMP=0x0000000100061d9c
- (id)description;	// IMP=0x0000000100061ce8
@property(nonatomic) _Bool hasShouldIgnoreUserTokenCache;
@property(readonly, nonatomic) _Bool hasBagProfileVersion;
@property(readonly, nonatomic) _Bool hasBagProfile;
@property(readonly, nonatomic) _Bool hasClientVersion;
@property(readonly, nonatomic) _Bool hasClientIdentifier;

@end

