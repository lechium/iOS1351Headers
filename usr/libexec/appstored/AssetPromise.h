//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSLazyPromise.h>

@class NSUUID;

@interface AssetPromise : AMSLazyPromise
{
    NSUUID *_requestID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010008469c
@property(readonly) NSUUID *requestID; // @synthesize requestID=_requestID;
- (id)initWithRequestID:(id)arg1 promiseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100084604

@end
