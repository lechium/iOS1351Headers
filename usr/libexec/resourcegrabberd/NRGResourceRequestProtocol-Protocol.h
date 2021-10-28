//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NRGResourceRequest, NSString, PBRequest;

@protocol NRGResourceRequestProtocol
- (NSString *)sendProtobufRequest:(PBRequest *)arg1 type:(unsigned short)arg2 priority:(long long)arg3 expectsResponse:(_Bool)arg4 requestHandler:(void (^)(NSString *, NSError *))arg5 errorHandler:(void (^)(NSError *))arg6 withTimeout:(double)arg7;
- (NRGResourceRequest *)getResourceRequest:(NSString *)arg1;
@end
