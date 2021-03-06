//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKActivity, GKClientProxy, GKPlayerCredential, GKStoreBag;

@interface GKDataTransport : NSObject
{
    GKStoreBag *_storeBag;	// 8 = 0x8
    GKClientProxy *_clientProxy;	// 16 = 0x10
    GKPlayerCredential *_credential;	// 24 = 0x18
    GKActivity *_activity;	// 32 = 0x20
}

+ (id)transportWithBag:(id)arg1 clientProxy:(id)arg2 credential:(id)arg3;	// IMP=0x000000010003fb00
@property(retain, nonatomic) GKActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
@property(retain, nonatomic) GKStoreBag *storeBag; // @synthesize storeBag=_storeBag;
- (id)language;	// IMP=0x00000001000405d8
- (void)postRequest:(id)arg1 forBagKey:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x0000000100040344
- (void)postRequest:(id)arg1 forBagKey:(id)arg2 response:(CDUnknownBlockType)arg3;	// IMP=0x000000010004032c
- (void)postRequest:(id)arg1 method:(id)arg2 forBagKey:(id)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x000000010003fe68
- (id)errorForBagError:(id)arg1 serverError:(id)arg2;	// IMP=0x000000010003fd9c
- (void)dealloc;	// IMP=0x000000010003fd3c
- (id)initWithBag:(id)arg1 clientProxy:(id)arg2 credential:(id)arg3;	// IMP=0x000000010003fb50

@end

