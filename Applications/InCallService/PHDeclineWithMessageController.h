//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHDeclineWithActionController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSString, TUReplyWithMessageStore, TUSenderIdentity, UIViewController;

@interface PHDeclineWithMessageController : PHDeclineWithActionController <MFMessageComposeViewControllerDelegate>
{
    UIViewController *_customMessagePresentingViewController;	// 8 = 0x8
    TUSenderIdentity *_localSenderIdentity;	// 16 = 0x10
    TUReplyWithMessageStore *_cachedReplyStore;	// 24 = 0x18
}

+ (id)dismissalAssertionReason;	// IMP=0x00000001000d41e8
+ (id)declineWithActionControllerWithCall:(id)arg1;	// IMP=0x00000001000d3d20
- (void).cxx_destruct;	// IMP=0x00000001000d5918
@property(retain) TUReplyWithMessageStore *cachedReplyStore; // @synthesize cachedReplyStore=_cachedReplyStore;
@property(retain, nonatomic) TUSenderIdentity *localSenderIdentity; // @synthesize localSenderIdentity=_localSenderIdentity;
@property(retain, nonatomic) UIViewController *customMessagePresentingViewController; // @synthesize customMessagePresentingViewController=_customMessagePresentingViewController;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d58a4
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x00000001000d583c
- (void)sendDeclineViaIntentWithMessageResponse:(id)arg1 extension:(id)arg2;	// IMP=0x00000001000d5018
- (void)sendDeclineViaChatKitWithMessageResponse:(id)arg1;	// IMP=0x00000001000d4ccc
- (void)showCustomReplyWithMessageComposer;	// IMP=0x00000001000d4524
- (void)sendDeclineWithMessageResponse:(id)arg1;	// IMP=0x00000001000d4240
- (id)replyWithMessageStore;	// IMP=0x00000001000d41f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

