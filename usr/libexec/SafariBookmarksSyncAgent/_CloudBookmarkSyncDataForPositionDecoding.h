//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CloudBookmarkPosition;

@interface _CloudBookmarkSyncDataForPositionDecoding : NSObject <NSSecureCoding>
{
    CloudBookmarkPosition *_position;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100039498
- (void).cxx_destruct;	// IMP=0x0000000100039560
@property(readonly, nonatomic) CloudBookmarkPosition *position; // @synthesize position=_position;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100039554
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000394a0

@end

