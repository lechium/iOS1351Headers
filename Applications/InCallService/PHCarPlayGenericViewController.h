//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface PHCarPlayGenericViewController : UIViewController
{
    _Bool _respondsToEventsWhileInCall;	// 8 = 0x8
}

@property _Bool respondsToEventsWhileInCall; // @synthesize respondsToEventsWhileInCall=_respondsToEventsWhileInCall;
- (void)hardwareControlEventNotification:(id)arg1;	// IMP=0x00000001000f0638
- (_Bool)shouldRespondToHardwareControlEvent;	// IMP=0x00000001000f0560
@property(readonly) _Bool viewIsInAppearedState;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000f04b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000f0420
- (void)viewDidLoad;	// IMP=0x00000001000f0394
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000f030c

@end
