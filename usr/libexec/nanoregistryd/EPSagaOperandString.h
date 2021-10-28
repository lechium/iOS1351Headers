//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPSagaOperand-Protocol.h"

@class EPRoutingSlip, NSString;
@protocol NSObject;

@interface EPSagaOperandString : NSObject <EPSagaOperand>
{
    NSString *_string;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000df350
- (void).cxx_destruct;	// IMP=0x00000001000df4b8
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) __weak EPRoutingSlip *routingSlip;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000df3e4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000df358
@property(readonly, nonatomic) id <NSObject> value;
- (id)initWithString:(id)arg1;	// IMP=0x00000001000df2e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
