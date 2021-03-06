//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayer, AVPlayerViewController, VPPresenterView;

@interface BFFProximityVisualPairingViewController : UIViewController
{
    _Bool _started;	// 8 = 0x8
    VPPresenterView *_visualPairingView;	// 16 = 0x10
    AVPlayer *_videoPlayer;	// 24 = 0x18
    AVPlayerViewController *_videoViewController;	// 32 = 0x20
    long long _retryAttempts;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000bf8bc
@property long long retryAttempts; // @synthesize retryAttempts=_retryAttempts;
@property _Bool started; // @synthesize started=_started;
@property(retain) AVPlayerViewController *videoViewController; // @synthesize videoViewController=_videoViewController;
@property(retain) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain) VPPresenterView *visualPairingView; // @synthesize visualPairingView=_visualPairingView;
- (void)_stopPairingInterface;	// IMP=0x00000001000bf76c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000bf5b8
- (void)willResignActive:(id)arg1;	// IMP=0x00000001000bf5ac
- (void)didBecomeActive:(id)arg1;	// IMP=0x00000001000bf568
- (void)videoReachedEnd:(id)arg1;	// IMP=0x00000001000bf4c4
- (void)stop;	// IMP=0x00000001000bf48c
- (void)start;	// IMP=0x00000001000bf404
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000bf304
- (void)setPairingCode:(id)arg1;	// IMP=0x00000001000bf298
- (void)resetPlayer;	// IMP=0x00000001000bf0b0
- (void)addPlayer;	// IMP=0x00000001000bedcc
- (void)createPlayer;	// IMP=0x00000001000be8f8
- (void)viewDidLoad;	// IMP=0x00000001000be3cc
- (void)dealloc;	// IMP=0x00000001000be354

@end

