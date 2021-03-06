//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDMBaseService.h"

#import "CDMCFHandlerDelegate-Protocol.h"

@class CDMCFFlowHandler, CDMCFSetupHandler, NSString;

@interface CDMFlowService : CDMBaseService <CDMCFHandlerDelegate>
{
    CDMCFFlowHandler *_flowHandler;	// 16 = 0x10
    CDMCFSetupHandler *_setupHandler;	// 24 = 0x18
    NSString *_flowScriptVersion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000058c4
@property(retain, nonatomic) NSString *flowScriptVersion; // @synthesize flowScriptVersion=_flowScriptVersion;
- (void)clientFlowHandler:(id)arg1 request:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000001000055d4
- (void)_handleAssistantStateUpdate:(id)arg1;	// IMP=0x000000010000544c
- (void)_handleFlowCancelRequest:(id)arg1;	// IMP=0x00000001000052f8
- (void)_handleFlowExecuteRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004e1c
- (void)_handleFlowVersionRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004ce0
- (void)_fetchFlowScriptVersionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004970
- (void)handleCommand:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000001000046b0
- (id)supportedCommands;	// IMP=0x00000001000045a0
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000100004510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

