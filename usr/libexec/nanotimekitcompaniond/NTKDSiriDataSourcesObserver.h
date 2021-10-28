//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class NSString;

@interface NTKDSiriDataSourcesObserver : NSObject <LSApplicationWorkspaceObserverProtocol>
{
}

+ (id)sharedInstance;	// IMP=0x000000010001fe48
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000202c8
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000100020244
- (void)updateDeviceDataSourcesInNanoPreferences;	// IMP=0x000000010001ffe4
- (void)dealloc;	// IMP=0x000000010001ff6c
- (id)init;	// IMP=0x000000010001feec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
