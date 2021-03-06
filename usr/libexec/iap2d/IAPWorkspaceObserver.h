//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@class NSObject;
@protocol IAPWorkspaceObserverDelegate, LSApplicationWorkspaceObserverProtocol;

@interface IAPWorkspaceObserver : LSApplicationWorkspaceObserver
{
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;	// 8 = 0x8
}

- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000100080dd8
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x0000000100080d74
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000100080d10
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x0000000100080cac
@property(nonatomic) NSObject<IAPWorkspaceObserverDelegate> *delegate;
- (void)stopObserving;	// IMP=0x0000000100080c50
- (void)startObserving;	// IMP=0x0000000100080c14

@end

