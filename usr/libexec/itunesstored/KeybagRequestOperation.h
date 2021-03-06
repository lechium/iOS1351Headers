//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSString, SSKeybagRequest;

@interface KeybagRequestOperation : ISOperation
{
    NSString *_clientIdentifierHeader;	// 96 = 0x60
    SSKeybagRequest *_request;	// 104 = 0x68
    NSString *_userAgent;	// 112 = 0x70
    NSArray *_claimedBundleIdentifiers;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010005a5e4
@property(readonly) NSArray *claimedBundleIdentifiers; // @synthesize claimedBundleIdentifiers=_claimedBundleIdentifiers;
- (void)_getDownloaderIdentifier:(id *)arg1 purchaserIdentifier:(id *)arg2 forApplication:(id)arg3;	// IMP=0x000000010005a3fc
- (void)run;	// IMP=0x00000001000599b4
- (id)initWithKeybagRequest:(id)arg1 client:(id)arg2;	// IMP=0x00000001000598bc
- (id)initWithKeybagRequest:(id)arg1 clientIdentifierHeader:(id)arg2 userAgent:(id)arg3;	// IMP=0x00000001000597d4

@end

