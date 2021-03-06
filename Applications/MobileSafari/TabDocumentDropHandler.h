//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface TabDocumentDropHandler : NSObject
{
    unsigned long long _maximumNumberOfTabs;	// 8 = 0x8
    UIViewController *_alertPresentationViewController;	// 16 = 0x10
}

+ (id)tabDocumentsForDragItems:(id)arg1;	// IMP=0x0000000100117340
+ (_Bool)canHandleSession:(id)arg1;	// IMP=0x0000000100117280
+ (unsigned long long)proposedOperationForSession:(id)arg1 intoWindowWithPrivateBrowsingEnabled:(_Bool)arg2;	// IMP=0x00000001001170b0
- (void).cxx_destruct;	// IMP=0x0000000100117500
@property(nonatomic) __weak UIViewController *alertPresentationViewController; // @synthesize alertPresentationViewController=_alertPresentationViewController;
@property(readonly, nonatomic) unsigned long long maximumNumberOfTabs; // @synthesize maximumNumberOfTabs=_maximumNumberOfTabs;
- (unsigned long long)_minimumNumberOfNewTabsRequiringConfirmation;	// IMP=0x000000010011708c
- (void)promptIfNeededToConfirmNumberOfNavigationIntents:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100116d5c
- (void)dropItemsForSession:(id)arg1 withOperation:(unsigned long long)arg2 restorationHandler:(CDUnknownBlockType)arg3 insertionHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001162f8
- (void)dropItemsForSession:(id)arg1 withOperation:(unsigned long long)arg2 restorationHandler:(CDUnknownBlockType)arg3 insertionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100116278
- (id)initWithMaximumNumberOfTabs:(unsigned long long)arg1 alertPresentationViewController:(id)arg2;	// IMP=0x00000001001161ec
- (id)initWithAlertPresentationViewController:(id)arg1;	// IMP=0x0000000100116158
- (id)init;	// IMP=0x0000000100116148

@end

