//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Applicant : NSObject
{
    int _applicantUIState;	// 8 = 0x8
    struct __OpaqueSOSPeerInfo *_rawPeerInfo;	// 16 = 0x10
}

@property struct __OpaqueSOSPeerInfo *rawPeerInfo; // @synthesize rawPeerInfo=_rawPeerInfo;
@property int applicantUIState; // @synthesize applicantUIState=_applicantUIState;
@property(readonly) NSString *applicantUIStateName;
@property(readonly) NSString *deviceType;
- (id)description;	// IMP=0x0000000100002be0
- (void)dealloc;	// IMP=0x0000000100002b94
@property(readonly) NSString *name;
@property(readonly) NSString *idString;
- (id)initWithPeerInfo:(struct __OpaqueSOSPeerInfo *)arg1;	// IMP=0x0000000100002acc

@end

