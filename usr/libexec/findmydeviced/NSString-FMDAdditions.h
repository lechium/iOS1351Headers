//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import "FMDCodable-Protocol.h"

@interface NSString (FMDAdditions) <FMDCodable>
+ (id)stringWithFourCC:(unsigned int)arg1;	// IMP=0x0000000100075cfc
+ (id)objectTypeKey;	// IMP=0x00000001000a4fb4
+ (id)objectType;	// IMP=0x00000001000a4fa8
@property(readonly, nonatomic) NSString *fmd_localizedString;
- (id)initWithFMDCoder:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000a4e18
- (_Bool)encodeWithFMDCoder:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000a4d94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

