//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

@interface _TtC6FindMy27FMPhoneNumberViewController : OBWelcomeController
{
    MISSING_TYPE *mediator;	// 8 = 0x8
    MISSING_TYPE *passcode;	// 16 = 0x10
    MISSING_TYPE *style;	// 32 = 0x20
    MISSING_TYPE *tableView;	// 56 = 0x38
    MISSING_TYPE *tableViewheightConstraint;	// 64 = 0x40
    MISSING_TYPE *keyboardHeightScrollViewPadding;	// 72 = 0x48
    MISSING_TYPE *keyboardWillShowObserver;	// 88 = 0x58
    MISSING_TYPE *keyboardWillHideObserver;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010015b81c
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x000000010015b730
- (void)nextActionWithSender:(id)arg1;	// IMP=0x000000010015b72c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010015b640
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010015b5b8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010015b5b0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010015b5a8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010015b520
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010015b3b0
- (void)viewDidLoad;	// IMP=0x000000010015b11c
- (void)updateViewConstraints;	// IMP=0x000000010015b068

@end

