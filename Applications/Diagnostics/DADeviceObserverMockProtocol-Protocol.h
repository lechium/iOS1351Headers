//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DADeviceState, NSDictionary, NSString;

@protocol DADeviceObserverMockProtocol <NSObject>
- (void)destroyDeviceWithSerialNumber:(NSString *)arg1 completion:(void (^)(NSNumber *))arg2;
- (void)updateDeviceState:(DADeviceState *)arg1 completion:(void (^)(NSNumber *))arg2;
- (void)getDeviceStateWithSerialNumber:(NSString *)arg1 completion:(void (^)(DADeviceState *))arg2;
- (void)createDeviceWithSerialNumber:(NSString *)arg1 attributes:(NSDictionary *)arg2 completion:(void (^)(NSNumber *))arg3;
@end
