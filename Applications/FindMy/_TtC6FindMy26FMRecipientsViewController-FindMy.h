//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6FindMy26FMRecipientsViewController.h"

#import "MFComposeHeaderViewDelegate-Protocol.h"
#import "MFComposeRecipientTextViewDelegate-Protocol.h"

@interface _TtC6FindMy26FMRecipientsViewController (FindMy) <MFComposeHeaderViewDelegate, MFComposeRecipientTextViewDelegate>
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x0000000100081cd0
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x0000000100081c60
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x0000000100081c5c
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000100081bcc
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;	// IMP=0x00000001000815c8
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x000000010008157c
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x00000001000814dc
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x0000000100081414
@end
