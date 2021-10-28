//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SUCoreEvent : NSObject
{
    _Bool _changedSinceReported;	// 8 = 0x8
    NSMutableDictionary *_allFields;	// 16 = 0x10
    NSURL *_serverURL;	// 24 = 0x18
    NSString *_reportedUUID;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *reportedUUID; // @synthesize reportedUUID=_reportedUUID;
@property(retain, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(nonatomic) _Bool changedSinceReported; // @synthesize changedSinceReported=_changedSinceReported;
@property(retain, nonatomic) NSMutableDictionary *allFields; // @synthesize allFields=_allFields;
- (void)incrementErrorCount;	// IMP=0x0000000100006510
- (_Bool)isEqualErrorEvent:(id)arg1;	// IMP=0x0000000100006334
- (_Bool)isSuccess;	// IMP=0x00000001000062ec
- (void)dealloc;	// IMP=0x0000000100006294
- (id)initWithEventDictionary:(id)arg1 reportingToServer:(id)arg2;	// IMP=0x0000000100005ae0

@end
