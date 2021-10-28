//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACXApplication, NSUUID;

@interface ACXLocalAppStoreInstallQueueElement : NSObject
{
    _Bool _isUserInitiated;	// 8 = 0x8
    ACXApplication *_app;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    NSUUID *_installID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100034e94
@property(retain, nonatomic) NSUUID *installID; // @synthesize installID=_installID;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) _Bool isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
@property(readonly, nonatomic) ACXApplication *app; // @synthesize app=_app;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100034d38
- (unsigned long long)hash;	// IMP=0x0000000100034cc4
- (id)initWithApp:(id)arg1 isUserInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100034c04

@end
