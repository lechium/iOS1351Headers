//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUComposeReviewViewController.h>

#import "SKUIComposeReviewDelegate-Protocol.h"

@class NSString, SKUIComposeReviewViewController;
@protocol ServiceProductPageComposeReviewViewControllerDelegate;

@interface ServiceProductPageComposeReviewViewController : SUComposeReviewViewController <SKUIComposeReviewDelegate>
{
    id <ServiceProductPageComposeReviewViewControllerDelegate> _parentProductPageViewController;	// 8 = 0x8
    SKUIComposeReviewViewController *_underlyingViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001fa88
@property(nonatomic) __weak id <ServiceProductPageComposeReviewViewControllerDelegate> parentProductPageViewController; // @synthesize parentProductPageViewController=_parentProductPageViewController;
- (void)composeReviewViewControllerDidSubmit:(id)arg1;	// IMP=0x000000010001fa44
- (void)composeReviewViewControllerDidCancel:(id)arg1;	// IMP=0x000000010001fa34
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;	// IMP=0x000000010001f910
- (void)loadView;	// IMP=0x000000010001f82c
- (void)setClientInterface:(id)arg1;	// IMP=0x000000010001f7ac
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f688
- (void)dealloc;	// IMP=0x000000010001f62c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
