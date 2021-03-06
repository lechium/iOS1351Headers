//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSError, NSString;

@interface RequestThrottleRecord : NSObject <NSSecureCoding>
{
    NSError *_error;	// 8 = 0x8
    NSString *_externalVersionID;	// 16 = 0x10
    NSString *_itemID;	// 24 = 0x18
    NSDate *_requestDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100009a38
- (void).cxx_destruct;	// IMP=0x0000000100009c68
@property(readonly) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100009b9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100009a40
- (unsigned long long)hash;	// IMP=0x0000000100009a28
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100009934
- (_Bool)matchesExternalVersionID:(id)arg1;	// IMP=0x00000001000098bc
- (double)ageRelativeToDate:(id)arg1;	// IMP=0x0000000100009838
- (id)initWithDate:(id)arg1 error:(id)arg2 itemID:(id)arg3 externalVersionID:(id)arg4;	// IMP=0x000000010000973c

@end

