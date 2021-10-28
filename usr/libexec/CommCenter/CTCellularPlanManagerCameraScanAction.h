//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface CTCellularPlanManagerCameraScanAction : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSString *_smdpAddress;	// 24 = 0x18
    NSString *_matchingId;	// 32 = 0x20
    NSString *_OID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010035e4e4
- (void).cxx_destruct;	// IMP=0x000000010035e550
@property(retain, nonatomic) NSString *OID; // @synthesize OID=_OID;
@property(retain, nonatomic) NSString *matchingId; // @synthesize matchingId=_matchingId;
@property(retain, nonatomic) NSString *smdpAddress; // @synthesize smdpAddress=_smdpAddress;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010035e358
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010035e1ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010035e010
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010035decc
- (id)description;	// IMP=0x000000010035dd1c

@end
