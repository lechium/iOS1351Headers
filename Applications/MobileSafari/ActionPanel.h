//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFActivityViewController.h>

@class TabDocument;
@protocol ActionPanelDelegate;

@interface ActionPanel : _SFActivityViewController
{
    TabDocument *_tabDocument;	// 8 = 0x8
}

+ (id)createActivityItemProviderCollectionForTabDocument:(id)arg1;	// IMP=0x000000010000c298
- (void).cxx_destruct;	// IMP=0x000000010000c948
@property(readonly, nonatomic) TabDocument *tabDocument; // @synthesize tabDocument=_tabDocument;
- (_Bool)isReaderAvailableForCustomizationController:(id)arg1;	// IMP=0x000000010000c920
- (_Bool)isDisplayingQuickLookDocumentForCustomizationController:(id)arg1;	// IMP=0x000000010000c908
- (_Bool)isContentObscuredByDigitalHealthForCustomizationController:(id)arg1;	// IMP=0x000000010000c8f0
- (id)webViewForCustomizationController:(id)arg1;	// IMP=0x000000010000c8d8
- (id)excludedActivityTypes;	// IMP=0x000000010000c7a8
- (void)_prepareMail:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c668
- (void)_preparePostToSocialNetwork:(id)arg1;	// IMP=0x000000010000c5cc
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c498
- (void)_executeActivity;	// IMP=0x000000010000c350
- (void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(_Bool)arg3;	// IMP=0x000000010000c2a0
- (void)setSharingURL:(id)arg1;	// IMP=0x000000010000c0a0
- (id)initWithTabDocument:(id)arg1 activityDelegate:(id)arg2;	// IMP=0x000000010000b77c

// Remaining properties
@property(nonatomic) __weak id <ActionPanelDelegate> delegate; // @dynamic delegate;

@end
