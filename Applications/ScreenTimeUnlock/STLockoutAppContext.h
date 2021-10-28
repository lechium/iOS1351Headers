//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface STLockoutAppContext : NSObject <NSCoding, NSSecureCoding>
{
    NSString *_eventType;	// 8 = 0x8
    NSString *_clientName;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    NSDictionary *_additionalParameters;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100000fd8
+ (id)contextWithData:(id)arg1;	// IMP=0x0000000100001554
- (void).cxx_destruct;	// IMP=0x000000010000150c
@property(copy, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)debugDescription;	// IMP=0x00000001000013a0
- (id)description;	// IMP=0x00000001000012d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100001234
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000010dc
- (id)initWithEventType:(id)arg1;	// IMP=0x0000000100000fe0
- (id)dataRepresentation;	// IMP=0x00000001000016d4

@end
