//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@interface RefreshStoreQueueDownloadOperation : ISOperation
{
    long long _downloadID;	// 96 = 0x60
}

- (id)_URLBagKeyForDownload:(id)arg1;	// IMP=0x00000001001da5f0
- (_Bool)_refreshDownload:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001d9e3c
- (void)run;	// IMP=0x00000001001d9be0
@property(readonly) long long downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;	// IMP=0x00000001001d9b80

@end
