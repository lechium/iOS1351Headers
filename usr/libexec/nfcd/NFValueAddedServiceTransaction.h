//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSError, NSNumber, NSString;

@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding>
{
    unsigned int _result;	// 8 = 0x8
    NSData *_merchantId;	// 16 = 0x10
    NSString *_signupUrl;	// 24 = 0x18
    NSNumber *_terminalAppVersion;	// 32 = 0x20
    NSNumber *_terminalMode;	// 40 = 0x28
    NSNumber *_didSucceed;	// 48 = 0x30
    NSData *_passData;	// 56 = 0x38
    NSData *_token;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
    NSNumber *_filter;	// 80 = 0x50
    NSNumber *_filterType;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000a60d0
@property(readonly, nonatomic) unsigned int result; // @synthesize result=_result;
@property(readonly, nonatomic) NSNumber *filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) NSNumber *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSData *passData; // @synthesize passData=_passData;
@property(readonly, nonatomic) NSNumber *didSucceed; // @synthesize didSucceed=_didSucceed;
@property(readonly, nonatomic) NSNumber *terminalMode; // @synthesize terminalMode=_terminalMode;
@property(readonly, nonatomic) NSNumber *terminalAppVersion; // @synthesize terminalAppVersion=_terminalAppVersion;
@property(readonly, nonatomic) NSString *signupUrl; // @synthesize signupUrl=_signupUrl;
@property(readonly, nonatomic) NSData *merchantId; // @synthesize merchantId=_merchantId;
- (id)asDictionary;	// IMP=0x00000001000a627c
- (id)description;	// IMP=0x00000001000a60d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000a5f98
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000a5d78
- (void)dealloc;	// IMP=0x00000001000a5ce8
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000a5b34

@end
