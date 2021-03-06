//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMFBaseCmd.h"

@interface FMFInitCommand : FMFBaseCmd
{
    long long _fetchStatus;	// 16 = 0x10
}

@property(nonatomic) long long fetchStatus; // @synthesize fetchStatus=_fetchStatus;
- (id)tapContext;	// IMP=0x0000000100027d18
- (_Bool)shouldIncludeServerContext;	// IMP=0x0000000100027d10
- (_Bool)shouldIncludeDataContext;	// IMP=0x0000000100027d08
- (_Bool)allowsEmptyResponse;	// IMP=0x0000000100027d00
- (void)processCommandResponse:(id)arg1;	// IMP=0x0000000100027be4
- (id)jsonBodyDictionary;	// IMP=0x0000000100027a9c
- (id)pathSuffix;	// IMP=0x0000000100027a90
- (void)sendRequest;	// IMP=0x0000000100027a5c

@end

