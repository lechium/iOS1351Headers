//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@class NSMapTable;

@interface GEOResourceManifestUpdateAssertionServer : GEOServer
{
    NSMapTable *_peerToAssertionRecord;	// 16 = 0x10
}

+ (Class)requestClassForMethod:(id)arg1;	// IMP=0x00000001000193dc
+ (_Bool)usesModernRequestReply;	// IMP=0x00000001000193d4
+ (id)identifier;	// IMP=0x00000001000193c8
- (void).cxx_destruct;	// IMP=0x00000001000198d4
- (void)checkinForUpdateAssertionWithRequest:(id)arg1;	// IMP=0x00000001000194c8
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x00000001000193e8

@end

