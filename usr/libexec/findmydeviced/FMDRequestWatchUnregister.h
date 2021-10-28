//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMDRequest.h"

@class NSString;

@interface FMDRequestWatchUnregister : FMDRequest
{
    NSString *_udid;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000f854
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
- (_Bool)showAuthFailedMessage;	// IMP=0x000000010000f804
- (_Bool)canReplace:(id)arg1;	// IMP=0x000000010000f744
- (unsigned long long)type;	// IMP=0x000000010000f73c
- (_Bool)canRequestBeRetriedNow;	// IMP=0x000000010000f734
- (id)requestBody;	// IMP=0x000000010000f694
- (id)requestUrl;	// IMP=0x000000010000f640
- (id)authToken;	// IMP=0x000000010000f638
- (id)requestHeaders;	// IMP=0x000000010000f5a8
- (id)initWithDeviceUDID:(id)arg1 unregisterToken:(id)arg2;	// IMP=0x000000010000f4fc

@end
