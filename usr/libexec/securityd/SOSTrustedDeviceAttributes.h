//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SOSTrustedDeviceAttributes : NSObject <NSSecureCoding>
{
    NSString *_machineID;	// 8 = 0x8
    NSString *_serialNumber;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001b4dc4
- (void).cxx_destruct;	// IMP=0x00000001001b4d94
@property(retain) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain) NSString *machineID; // @synthesize machineID=_machineID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001b4d00
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001b4c1c

@end

