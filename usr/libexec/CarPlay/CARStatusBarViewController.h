//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CARStatusBarStateProvider, UIStatusBar_Modern;

@interface CARStatusBarViewController : UIViewController
{
    CARStatusBarStateProvider *_stateProvider;	// 8 = 0x8
    UIStatusBar_Modern *_statusBarView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100027928
@property(retain, nonatomic) UIStatusBar_Modern *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(retain, nonatomic) CARStatusBarStateProvider *stateProvider; // @synthesize stateProvider=_stateProvider;
- (void)viewDidLoad;	// IMP=0x0000000100027344
- (void)dealloc;	// IMP=0x00000001000272d8
- (id)initWithStateProvider:(id)arg1;	// IMP=0x0000000100027258

@end

