//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"

@class NSString;
@protocol Action;

@interface FMDActionDecorator : NSObject <Action>
{
    id <Action> _innerAction;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010006f550
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) id <Action> innerAction; // @synthesize innerAction=_innerAction;
@property(readonly, copy) NSString *description;
- (_Bool)shouldWaitForAction:(id)arg1;	// IMP=0x000000010006f420
- (void)willCancelAction;	// IMP=0x000000010006f2d8
- (_Bool)shouldCancelAction:(id)arg1;	// IMP=0x000000010006f21c
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006efbc
- (id)actionType;	// IMP=0x000000010006efa0
- (id)initWithAction:(id)arg1 usingCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006eef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
