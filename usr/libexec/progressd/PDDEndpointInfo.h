//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class PDDPEndpointConfig;

@interface PDDEndpointInfo : NSObject <NSSecureCoding>
{
    double _lastSuccessTime;	// 8 = 0x8
    double _lastFailureTime;	// 16 = 0x10
    long long _failureCounter;	// 24 = 0x18
    PDDPEndpointConfig *_config;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010007e960
- (void).cxx_destruct;	// IMP=0x000000010007e9ac
@property(retain, nonatomic) PDDPEndpointConfig *config; // @synthesize config=_config;
@property(nonatomic) long long failureCounter; // @synthesize failureCounter=_failureCounter;
@property(nonatomic) double lastFailureTime; // @synthesize lastFailureTime=_lastFailureTime;
@property(nonatomic) double lastSuccessTime; // @synthesize lastSuccessTime=_lastSuccessTime;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010007e8b4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007e7c8
- (_Bool)requiresMescal;	// IMP=0x000000010007e688
- (void)markFailed;	// IMP=0x000000010007e5e4
- (void)markSuccessful;	// IMP=0x000000010007e560
- (_Bool)needsCooldown;	// IMP=0x000000010007e37c
- (_Bool)isExpired;	// IMP=0x000000010007e23c
- (id)dictionaryRepresentation;	// IMP=0x000000010007de64
- (id)identifier;	// IMP=0x000000010007de10
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010007d91c
- (id)initWithEndpointConfig:(id)arg1;	// IMP=0x000000010007d89c

@end

