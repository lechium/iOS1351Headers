//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyMultilingualBaseViewController.h"

@class BuddyMultilingualContentController;
@protocol BFFFlowItemDelegate;

@interface BuddyDictationLanguageOrderSelector : BuddyMultilingualBaseViewController
{
    BuddyMultilingualContentController *_contentController;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
}

+ (void)writePreferredDictationLanguagesToSystem:(id)arg1;	// IMP=0x000000010009d4ac
+ (id)cloudConfigSkipKey;	// IMP=0x000000010009d2fc
+ (_Bool)needsFullscreenPane;	// IMP=0x000000010009d2a8
+ (id)new;	// IMP=0x000000010009d130
- (void).cxx_destruct;	// IMP=0x000000010009d84c
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BuddyMultilingualContentController *contentController; // @synthesize contentController=_contentController;
- (unsigned long long)paneForAnalytics;	// IMP=0x000000010009d7ec
- (void)continuePressed;	// IMP=0x000000010009d3c8
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009d30c

@end

