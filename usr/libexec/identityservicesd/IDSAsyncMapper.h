//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSAsyncMapper : NSObject
{
}

+ (void)mapDictionary:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 onQueue:(id)arg5;	// IMP=0x00000001004073fc
+ (void)mapDictionary:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 onQueue:(id)arg4;	// IMP=0x00000001004072c0
+ (void)mapArray:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 onQueue:(id)arg5;	// IMP=0x0000000100406b58
+ (void)mapArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 onQueue:(id)arg4;	// IMP=0x0000000100406a1c

@end
