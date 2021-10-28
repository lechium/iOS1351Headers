//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBCKCodeOperator : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_functionName;	// 16 = 0x10
    Class _responseType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001d7bc8
@property(readonly, nonatomic) Class responseType; // @synthesize responseType=_responseType;
@property(readonly, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)operationForRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d7890
- (id)initWithService:(id)arg1 function:(id)arg2 responseType:(Class)arg3;	// IMP=0x00000001001d77dc

@end
