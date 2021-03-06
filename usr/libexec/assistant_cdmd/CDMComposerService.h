//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDMBaseService.h"

#import "CDMComposerTaskDelegate-Protocol.h"

@class CDMComposerContext, CDMComposerTaskStack, CDMResultCandidateCommand, NSDictionary, NSMutableDictionary, NSString;

@interface CDMComposerService : CDMBaseService <CDMComposerTaskDelegate>
{
    NSString *_languageCode;	// 16 = 0x10
    NSDictionary *_startCommand;	// 24 = 0x18
    CDMComposerContext *_context;	// 32 = 0x20
    CDMComposerTaskStack *_taskStack;	// 40 = 0x28
    NSMutableDictionary *_clientIdPropDict;	// 48 = 0x30
    long long _systemState;	// 56 = 0x38
    CDMResultCandidateCommand *_lastResultCandidate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100024ec8
- (void)_sendCommand:(id)arg1 toClientId:(id)arg2;	// IMP=0x0000000100024dd0
- (void)composerTask:(id)arg1 finishedWithContext:(id)arg2;	// IMP=0x00000001000246e8
- (void)composerTask:(id)arg1 updatedWithContext:(id)arg2;	// IMP=0x0000000100024474
- (void)composerTask:(id)arg1 request:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024330
- (_Bool)_checkNetworkConnectivity;	// IMP=0x000000010002431c
- (void)_clearContext;	// IMP=0x0000000100024260
- (void)_handleClearContext:(id)arg1;	// IMP=0x00000001000241a8
- (void)_handleXPCConnectionUpdate:(id)arg1;	// IMP=0x0000000100023fd4
- (void)_handleSpeechFailure:(id)arg1;	// IMP=0x0000000100023e40
- (void)_handleSpeechRecognized:(id)arg1;	// IMP=0x0000000100023ccc
- (void)_handleCancelRequest:(id)arg1;	// IMP=0x0000000100023ae0
- (void)_handleSpeechCancelled:(id)arg1;	// IMP=0x00000001000238f4
- (void)_handleSpeechStarted:(id)arg1;	// IMP=0x0000000100023670
- (void)_handleRequestStarted:(id)arg1;	// IMP=0x0000000100023104
- (void)_sendCommandIgnoredForRequest:(id)arg1;	// IMP=0x0000000100022eb4
- (void)_executeActiveTaskWithCommand:(id)arg1;	// IMP=0x0000000100022958
- (void)_initiateNewTaskWithAceRefId:(id)arg1 forClientId:(id)arg2 withTaskClass:(Class)arg3;	// IMP=0x00000001000227bc
- (void)_handleStartBackgroundActionRequest:(id)arg1;	// IMP=0x0000000100022660
- (void)_handleSetupUpdate:(id)arg1;	// IMP=0x00000001000224e8
- (void)_handleSetupRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022324
- (void)_handleRollbackRequest:(id)arg1;	// IMP=0x0000000100022054
- (void)_handleProvideContextUpdate:(id)arg1;	// IMP=0x0000000100021e4c
- (void)_handleResultCandidate:(id)arg1;	// IMP=0x0000000100021d34
- (void)_handleResultSelected:(id)arg1;	// IMP=0x0000000100021adc
- (void)handleCommand:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021610
- (id)supportedCommands;	// IMP=0x0000000100021474
- (id)initWithConfig:(id)arg1;	// IMP=0x00000001000213a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

