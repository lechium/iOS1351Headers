//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CuttlefishXPCWrapper, NSOperation, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTLocalResetOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    NSString *_containerName;	// 32 = 0x20
    NSString *_contextID;	// 40 = 0x28
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 48 = 0x30
    NSOperation *_finishedOp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002c410
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x000000010002c17c
- (id)init:(id)arg1 contextID:(id)arg2 intendedState:(id)arg3 errorState:(id)arg4 cuttlefishXPCWrapper:(id)arg5;	// IMP=0x000000010002c034

@end

