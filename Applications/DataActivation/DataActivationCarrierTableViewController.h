//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSString, UIActivityIndicatorView, UITextView;

@interface DataActivationCarrierTableViewController : UITableViewController <UITextViewDelegate>
{
    UITextView *_footerLabel;	// 8 = 0x8
    _Bool _showActivationCode;	// 16 = 0x10
    id _delegate;	// 24 = 0x18
    NSArray *_carrierItems;	// 32 = 0x20
    UIActivityIndicatorView *_indicator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000041ac
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) _Bool showActivationCode; // @synthesize showActivationCode=_showActivationCode;
@property(retain, nonatomic) NSArray *carrierItems; // @synthesize carrierItems=_carrierItems;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100003e48
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000100003d64
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100003b90
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100003b38
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000100003abc
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000100003aac
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100003a68
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000001000037c8
- (void)_cancelButtonTapped;	// IMP=0x000000010000378c
- (void)_finishSignupWithCarrierItem:(id)arg1;	// IMP=0x0000000100003360
- (void)_startSignupWithCarrierItem:(id)arg1;	// IMP=0x0000000100003060
- (void)_loadCarrierWebsheetForCarrierItem:(id)arg1 withPostData:(id)arg2 userConsentResponse:(long long)arg3;	// IMP=0x0000000100002db4
- (id)_alertActionWithTitle:(id)arg1 style:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100002cb4
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100002c58
- (void)viewDidLoad;	// IMP=0x0000000100001f44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
