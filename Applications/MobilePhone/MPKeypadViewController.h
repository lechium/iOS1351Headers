//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DialerController.h"

#import "CNContactPickerDelegate-Protocol.h"
#import "CNContactViewControllerDelegate-Protocol.h"
#import "TUCallProviderManagerDelegate-Protocol.h"
#import "UIContextMenuInteractionDelegate-Protocol.h"

@class NSCache, NSString, TUMetadataCache, UIContextMenuInteraction;

@interface MPKeypadViewController : DialerController <CNContactPickerDelegate, CNContactViewControllerDelegate, UIContextMenuInteractionDelegate, TUCallProviderManagerDelegate>
{
    _Bool _isHostedInRemoteViewController;	// 40 = 0x28
    TUMetadataCache *_metadataCache;	// 48 = 0x30
    NSCache *_IDSstatusCache;	// 56 = 0x38
    UIContextMenuInteraction *_callContextMenuInteraction;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000a2760
@property(retain, nonatomic) UIContextMenuInteraction *callContextMenuInteraction; // @synthesize callContextMenuInteraction=_callContextMenuInteraction;
@property(retain, nonatomic) NSCache *IDSstatusCache; // @synthesize IDSstatusCache=_IDSstatusCache;
@property(nonatomic) _Bool isHostedInRemoteViewController; // @synthesize isHostedInRemoteViewController=_isHostedInRemoteViewController;
@property(retain, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x00000001000a2604
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00000001000a23c8
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000001000a18b4
- (void)_clearIDSStatusCache;	// IMP=0x00000001000a1874
- (long long)_IDSStatusForService:(id)arg1 withDestination:(id)arg2;	// IMP=0x00000001000a174c
- (void)_updateIDSStatusIfNeededForService:(id)arg1 withDestination:(id)arg2;	// IMP=0x00000001000a13f4
- (id)_IDSStatusCacheKeyForService:(id)arg1 withDestination:(id)arg2;	// IMP=0x00000001000a138c
- (id)pseudoNameStringForDestinationID:(id)arg1;	// IMP=0x00000001000a11d4
- (_Bool)defaultActionIsFaceTimeAudio;	// IMP=0x00000001000a11a4
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x00000001000a1058
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000001000a1044
- (void)contactViewWrapperDidCancel;	// IMP=0x00000001000a1030
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x00000001000a0f50
- (id)_newContactWithPhoneNumber:(id)arg1;	// IMP=0x00000001000a0dd4
- (void)_addNewContact:(id)arg1;	// IMP=0x00000001000a0d38
- (void)dialerView:(id)arg1 senderIdentityWasTapped:(id)arg2;	// IMP=0x00000001000a08f8
- (void)_updateMetadataCacheIfPossible;	// IMP=0x00000001000a075c
- (void)updateLocalizedSenderIdentity:(id)arg1;	// IMP=0x00000001000a0630
- (void)refreshLocalizedSenderIdentity;	// IMP=0x00000001000a0410
- (void)_updateName;	// IMP=0x00000001000a0108
- (void)_metadataCacheDidUpdate:(id)arg1;	// IMP=0x00000001000a0088
- (id)_metadataNameForDialerText;	// IMP=0x000000010009fe7c
- (void)_addButtonClicked:(id)arg1;	// IMP=0x000000010009f77c
- (_Bool)_anyContactsExist;	// IMP=0x000000010009f5e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010009f54c
- (void)viewDidLoad;	// IMP=0x000000010009f3fc
- (id)initWithDialerType:(int)arg1;	// IMP=0x000000010009f340

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

