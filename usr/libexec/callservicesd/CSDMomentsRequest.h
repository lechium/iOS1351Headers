//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSDMomentsControllerSession, MISSING_TYPE;
@protocol CSDAVCMomentsRequest;

@interface CSDMomentsRequest : NSObject
{
    MISSING_TYPE *avcRequest;	// 8 = 0x8
    MISSING_TYPE *session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001e31bc
- (id)init;	// IMP=0x00000001001e31f4
- (id)initWithAVCRequest:(id)arg1 session:(id)arg2;	// IMP=0x00000001001e3110
@property(nonatomic, readonly) CSDMomentsControllerSession *session; // @synthesize session;
@property(nonatomic, readonly) id <CSDAVCMomentsRequest> avcRequest; // @synthesize avcRequest;

@end

