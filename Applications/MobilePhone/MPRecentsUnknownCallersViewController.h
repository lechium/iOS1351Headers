//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@protocol MPRecentsUnknownCallersViewControllerDelegate;

@interface MPRecentsUnknownCallersViewController : OBWelcomeController
{
    id <MPRecentsUnknownCallersViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100032c4c
@property(nonatomic) __weak id <MPRecentsUnknownCallersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRequestDismiss;	// IMP=0x0000000100032b74
- (void)didPressEnableButton;	// IMP=0x0000000100032ad0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;	// IMP=0x00000001000327d8

@end

