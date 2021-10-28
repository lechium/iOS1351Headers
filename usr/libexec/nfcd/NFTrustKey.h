//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NFTrustObject.h"

@class NSArray, NSData, NSNumber, NSString;

@interface NFTrustKey : NFTrustObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_keyAttestationAuthority;	// 16 = 0x10
    NSString *_keyAttestation;	// 24 = 0x18
    NSNumber *_counterLimit;	// 32 = 0x20
    NSNumber *_counterValue;	// 40 = 0x28
    NSArray *_localValidations;	// 48 = 0x30
    NSData *_publicKey;	// 56 = 0x38
}

+ (id)keyWithIdentifier:(id)arg1;	// IMP=0x000000010008b628
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010008b14c
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSArray *localValidations; // @synthesize localValidations=_localValidations;
@property(retain, nonatomic) NSNumber *counterValue; // @synthesize counterValue=_counterValue;
@property(retain, nonatomic) NSNumber *counterLimit; // @synthesize counterLimit=_counterLimit;
@property(retain, nonatomic) NSString *keyAttestation; // @synthesize keyAttestation=_keyAttestation;
@property(retain, nonatomic) NSString *keyAttestationAuthority; // @synthesize keyAttestationAuthority=_keyAttestationAuthority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010008b330
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008b154
- (void)dealloc;	// IMP=0x000000010008b09c

@end
