//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol CBWindowLikeInternal;

@protocol CBWindowDelegate
- (void)window:(id <CBWindowLikeInternal>)arg1 changedBackgroundTunnel:(_Bool)arg2;
- (void)windowDidDismiss:(id <CBWindowLikeInternal>)arg1;
- (void)windowWillDismiss:(id <CBWindowLikeInternal>)arg1;
- (void)windowDidAppear:(id <CBWindowLikeInternal>)arg1;
- (void)windowWillAppear:(id <CBWindowLikeInternal>)arg1;
@end
