//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDDeviceUploadRequest.h"

@class MCDeviceUploadSubmitDeviceRequestPayload;

@interface CCDDeviceUploadSubmitDeviceRequest : CCDDeviceUploadRequest
{
    MCDeviceUploadSubmitDeviceRequestPayload *_submitDeviceRequestPayload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100001fa0
@property(retain, nonatomic) MCDeviceUploadSubmitDeviceRequestPayload *submitDeviceRequestPayload; // @synthesize submitDeviceRequestPayload=_submitDeviceRequestPayload;
- (id)_deviceDetails;	// IMP=0x0000000100001d5c
- (id)requestBody;	// IMP=0x0000000100001a08
- (id)endpointPath;	// IMP=0x00000001000019f8
- (id)httpMethod;	// IMP=0x00000001000019ec
- (long long)requestType;	// IMP=0x00000001000019e4

@end

