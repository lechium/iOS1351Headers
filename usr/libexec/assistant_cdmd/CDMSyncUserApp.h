//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDMSyncUserApp : NSObject
{
    NSString *_appId;	// 8 = 0x8
    NSString *_appName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000434b8
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;	// IMP=0x0000000100043468
- (unsigned long long)hash;	// IMP=0x000000010004341c
- (id)initWithSAAppInfo:(id)arg1 forLocale:(id)arg2;	// IMP=0x0000000100043260
- (id)initWithAppName:(id)arg1;	// IMP=0x00000001000431e0

@end
