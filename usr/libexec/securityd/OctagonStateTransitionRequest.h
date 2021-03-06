//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKKSResultOperation, NSSet, NSString;
@protocol OS_dispatch_queue, OctagonStateTransitionOperationProtocol;

__attribute__((visibility("hidden")))
@interface OctagonStateTransitionRequest : NSObject
{
    _Bool _timeoutCanOccur;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSSet *_sourceStates;	// 24 = 0x18
    CKKSResultOperation<OctagonStateTransitionOperationProtocol> *_transitionOperation;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100161674
@property _Bool timeoutCanOccur; // @synthesize timeoutCanOccur=_timeoutCanOccur;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) CKKSResultOperation<OctagonStateTransitionOperationProtocol> *transitionOperation; // @synthesize transitionOperation=_transitionOperation;
@property(readonly) NSSet *sourceStates; // @synthesize sourceStates=_sourceStates;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)timeout:(unsigned long long)arg1;	// IMP=0x0000000100161538
- (id)_onqueueStart;	// IMP=0x00000001001614b0
- (id)description;	// IMP=0x00000001001613e4
- (id)init:(id)arg1 sourceStates:(id)arg2 serialQueue:(id)arg3 timeout:(unsigned long long)arg4 transitionOp:(id)arg5;	// IMP=0x00000001001612c0

@end

