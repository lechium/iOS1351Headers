//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDMBaseService.h"

@class CDMAssistantStateModel;

@interface CDMAssistantStateService : CDMBaseService
{
    CDMAssistantStateModel *_model;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001114c
- (void)_handleAssistantStatePromise:(id)arg1;	// IMP=0x000000010001106c
- (void)_handleAssistantStateRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010f70
- (void)_handleAssistantStateUpdate:(id)arg1;	// IMP=0x0000000100010e90
- (void)handleCommand:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010c04
- (id)supportedCommands;	// IMP=0x0000000100010b00
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000100010a80

@end

