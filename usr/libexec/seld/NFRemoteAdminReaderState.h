//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NFRemoteAdminRedirectState.h"

@class NFRemoteAdminCardIngestionRequest, NSDictionary;

@interface NFRemoteAdminReaderState : NFRemoteAdminRedirectState
{
    CDUnknownBlockType _stateUpdateOnSessionEndedCallback;	// 120 = 0x78
    NSDictionary *_parameters;	// 128 = 0x80
    NFRemoteAdminCardIngestionRequest *_requestInfo;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000104e0
@property(retain, nonatomic) NFRemoteAdminCardIngestionRequest *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001051c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000104e8
- (void)setStateUpdateOnSessionEndedCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010494
@property(readonly, nonatomic) CDUnknownBlockType stateUpdateOnSessionEndedCallback;
- (void)dealloc;	// IMP=0x0000000100010414
- (id)initWithDictionary:(id)arg1 sourceURL:(id)arg2 originator:(id)arg3;	// IMP=0x00000001000103dc

@end

