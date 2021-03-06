//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface IDSKeyTransparencyVerificationState : NSObject
{
    NSNumber *_transparencyStatus;	// 8 = 0x8
    NSData *_transparencyBlob;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001006253c8
@property(readonly, nonatomic) NSData *transparencyBlob; // @synthesize transparencyBlob=_transparencyBlob;
@property(readonly, nonatomic) NSNumber *transparencyStatus; // @synthesize transparencyStatus=_transparencyStatus;
- (id)description;	// IMP=0x00000001006252a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100625288
- (unsigned long long)hash;	// IMP=0x00000001006251c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010062510c
- (_Bool)isEqualToKeyTransparencyVerificationState:(id)arg1;	// IMP=0x0000000100624db8
- (id)initWithTransparencyStatus:(id)arg1 transparencyBlob:(id)arg2;	// IMP=0x0000000100624c74

@end

