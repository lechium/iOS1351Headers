//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID, TUHandle;

@interface CSDGroupIDSPendingChat : NSObject
{
    MISSING_TYPE *uuid;	// 0 = 0x0
    MISSING_TYPE *handle;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000001001acfd0
- (id)init;	// IMP=0x00000001001ad084
- (id)initWithUUID:(id)arg1 handle:(id)arg2;	// IMP=0x00000001001acef8
@property(nonatomic, readonly) TUHandle *handle; // @synthesize handle;
@property(nonatomic, readonly) NSUUID *uuid;

@end

