//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SUSUIRemoteEmergencyCallViewControllerDelegate;

@interface SUSUIRemoteEmergencyCallViewController : SBUIEmergencyCallHostViewController
{
    id <SUSUIRemoteEmergencyCallViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000064a4
@property(nonatomic) __weak id <SUSUIRemoteEmergencyCallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;	// IMP=0x00000001000063cc
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000001000062c4

@end

