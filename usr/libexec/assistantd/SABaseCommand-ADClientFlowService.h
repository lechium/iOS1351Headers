//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "ADClientFlowServiceCommand-Protocol.h"

@class NSString;

@interface SABaseCommand (ADClientFlowService) <ADClientFlowServiceCommand>
+ (_Bool)ad_shouldClassLogToMetrics;	// IMP=0x000000010014b270
- (void)_ad_performWithTargetQueue:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100106fb0
- (long long)ad_getNetworkActivityTracingLabel;	// IMP=0x000000010014b33c
- (_Bool)ad_requiresResponse;	// IMP=0x000000010014b334
- (id)ad_deferredMetricsContext;	// IMP=0x000000010014b278
- (_Bool)ad_shouldLogToMetrics;	// IMP=0x000000010014b254
- (_Bool)ad_willHaveReply;	// IMP=0x000000010014b24c
@property(retain, nonatomic, setter=ad_setParentRequest:) SABaseCommand *ad_parentRequest;
- (long long)resultCallbackCode;	// IMP=0x0000000100169964
- (_Bool)ad_shouldIgnoreCallbacksOnReply;	// IMP=0x0000000100169fd8
- (_Bool)ad_sendReplyEvenIfCallbacksExist;	// IMP=0x0000000100169fd0
- (_Bool)ad_hasCallbacks;	// IMP=0x0000000100169fc8
- (id)ad_callbacks;	// IMP=0x0000000100169fe0
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bd8e4
- (_Bool)shouldBeHandledByAssistantd;	// IMP=0x00000001001bd8dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
