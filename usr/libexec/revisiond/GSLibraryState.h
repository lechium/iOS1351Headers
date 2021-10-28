//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "PQLBindable-Protocol.h"

@class NSString;

@interface GSLibraryState : NSObject <NSSecureCoding, PQLBindable>
{
    int state;	// 8 = 0x8
    int lastFeatureSet;	// 12 = 0xc
    unsigned long long fseventID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100007e58
@property(readonly, nonatomic) _Bool isClean;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x0000000100007fec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100007f64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100007ea8
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000100007e18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
