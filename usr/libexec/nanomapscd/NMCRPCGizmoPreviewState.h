//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NMMessage;

__attribute__((visibility("hidden")))
@interface NMCRPCGizmoPreviewState : NSObject
{
    _Bool _hasShownNavModeAdvisory;	// 8 = 0x8
    NMMessage *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100022434
@property(readonly, nonatomic) NMMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) _Bool hasShownNavModeAdvisory; // @synthesize hasShownNavModeAdvisory=_hasShownNavModeAdvisory;
- (id)initWithMessage:(id)arg1;	// IMP=0x000000010002232c

@end

