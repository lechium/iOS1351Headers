//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSItemProvider, NSURL, NSUUID, UIToolbar, _SFNavigationBar, _SFNavigationIntent;

@protocol _SFNavigationBarDelegate <NSObject>
- (NSURL *)navigationBarURLForSharing:(_SFNavigationBar *)arg1;
- (void)navigationBarStopLoadingButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarReloadButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarCancelButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarReaderButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)compressedNavigationBarWasTapped:(_SFNavigationBar *)arg1;

@optional
- (void)navigationBar:(_SFNavigationBar *)arg1 didCreateLeadingToolbar:(UIToolbar *)arg2 trailingToolbar:(UIToolbar *)arg3;
- (NSUUID *)currentContentUUIDForNavigationBar:(_SFNavigationBar *)arg1;
- (long long)dataOwnerForNavigationBar:(_SFNavigationBar *)arg1;
- (NSItemProvider *)itemProviderForNavigationBar:(_SFNavigationBar *)arg1;
- (void)navigationBarDidUpdateBackdropEffect:(_SFNavigationBar *)arg1;
- (void)navigationBar:(_SFNavigationBar *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2;
- (void)navigationBarFormatMenuButtonStartedInteraction:(_SFNavigationBar *)arg1;
- (void)navigationBarFormatMenuButtonBecameUnavailable:(_SFNavigationBar *)arg1;
- (void)navigationBarFormatMenuButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarMediaCaptureMuteButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarDoneButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarURLWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarMetricsDidChange:(_SFNavigationBar *)arg1;
@end
