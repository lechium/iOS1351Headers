//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, VVService;

@interface VMVoicemailGreetingController : NSObject
{
    CDUnknownBlockType _setVoicemailReply;	// 8 = 0x8
    CDUnknownBlockType _retrieveGreetingReply;	// 16 = 0x10
    NSTimer *_greetingFetchTimeoutTimer;	// 24 = 0x18
    NSTimer *_greetingSaveTimeoutTimer;	// 32 = 0x20
    VVService *_voicemailService;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100013ab4
@property(nonatomic) __weak VVService *voicemailService; // @synthesize voicemailService=_voicemailService;
@property(retain, nonatomic) NSTimer *greetingSaveTimeoutTimer; // @synthesize greetingSaveTimeoutTimer=_greetingSaveTimeoutTimer;
@property(retain, nonatomic) NSTimer *greetingFetchTimeoutTimer; // @synthesize greetingFetchTimeoutTimer=_greetingFetchTimeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType retrieveGreetingReply; // @synthesize retrieveGreetingReply=_retrieveGreetingReply;
@property(copy, nonatomic) CDUnknownBlockType setVoicemailReply; // @synthesize setVoicemailReply=_setVoicemailReply;
- (void)_stopListeningForGreetingSaveNotifications;	// IMP=0x0000000100013970
- (void)_stopListeningForGreetingFetchNotifications;	// IMP=0x00000001000138a0
- (void)_greetingSaveTimedOut;	// IMP=0x00000001000136d0
- (void)_greetingSaveCompleted:(id)arg1;	// IMP=0x0000000100013340
- (void)_greetingFetchTimedOut;	// IMP=0x00000001000131ac
- (void)_greetingFetchEnded:(id)arg1;	// IMP=0x0000000100012a78
- (void)setGreeting:(id)arg1 forAccountUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012620
- (void)greetingForAccountUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000123bc
- (id)initWithService:(id)arg1;	// IMP=0x0000000100012350

@end

