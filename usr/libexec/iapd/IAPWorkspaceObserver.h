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

- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010000b004
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x000000010000af8c
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010000af14
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x000000010000ae9c
@property(nonatomic) NSObject<IAPWorkspaceObserverDelegate> *delegate;
- (void)stopObserving;	// IMP=0x000000010000ae10
- (void)startObserving;	// IMP=0x000000010000add4

@end
