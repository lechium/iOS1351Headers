//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@class NSObject;
@protocol LSApplicationWorkspaceObserverProtocol;

@interface WorkspaceDownloadObserver : LSApplicationWorkspaceObserver
{
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;	// 8 = 0x8
}

- (void)applicationInstallsDidPrioritize:(id)arg1;	// IMP=0x0000000100207884
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x000000010020786c
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x0000000100207854
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x000000010020783c
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;	// IMP=0x0000000100207824
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010020780c
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000001002077f4
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x00000001002077dc
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x00000001002077c4
@property(nonatomic) NSObject<LSApplicationWorkspaceObserverProtocol> *delegate;
- (void)stopObserving;	// IMP=0x0000000100207768
- (void)startObserving;	// IMP=0x000000010020772c

@end

