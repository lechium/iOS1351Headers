//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (WatchConnectivity_Additions)
- (_Bool)wc_connectionHasEntitlement:(id)arg1;	// IMP=0x000000010002a57c
@property(readonly, copy) NSString *wc_connectionCommunicationID;
@property(readonly, copy) NSString *wc_connectionBundleID;
@property(readonly) _Bool wc_connectionIsiOSExtension;
@end

