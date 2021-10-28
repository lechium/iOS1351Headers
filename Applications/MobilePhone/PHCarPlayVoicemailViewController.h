//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHCarPlayGenericTableViewController.h"

@class CNContactStore;

@interface PHCarPlayVoicemailViewController : PHCarPlayGenericTableViewController
{
    CNContactStore *_contactStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000b6e64
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)badgeString;	// IMP=0x00000001000b6df8
- (id)subtitleForNoContentBanner;	// IMP=0x00000001000b6df0
- (id)titleForNoContentBanner;	// IMP=0x00000001000b6d70
- (void)programmaticallySelectRowAtIndexPath:(id)arg1;	// IMP=0x00000001000b69e0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b69d0
- (id)restrictedSubtitleForMessage:(id)arg1;	// IMP=0x00000001000b682c
- (void)showRestrictedAlertForMessage:(id)arg1;	// IMP=0x00000001000b6678
- (_Bool)isRestrictedMessage:(id)arg1;	// IMP=0x00000001000b653c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b64cc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b6380
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000b62e8
- (void)voicemailViewControllerPlayVoicemailEventNotification:(id)arg1;	// IMP=0x00000001000b5f94
- (void)voicemailManagerChangedNotification:(id)arg1;	// IMP=0x00000001000b5dc4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000b5cfc
- (void)viewDidLoad;	// IMP=0x00000001000b5bd8
- (void)dealloc;	// IMP=0x00000001000b5b60
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000b5a4c

@end
