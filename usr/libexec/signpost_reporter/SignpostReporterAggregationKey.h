//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SignpostReporterAggregationKey : NSObject <NSCopying>
{
    NSString *_subsystem;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100010d64
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100010c00
- (id)description;	// IMP=0x0000000100010b5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100010a80
- (unsigned long long)hash;	// IMP=0x00000001000109f4
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x0000000100010950

@end

