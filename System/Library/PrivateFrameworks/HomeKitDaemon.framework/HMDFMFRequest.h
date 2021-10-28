/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, FMFSession, HMFTimer;

@interface HMDFMFRequest : HMFObject {

	NSString* _requestID;
	FMFSession* _fmfSession;
	HMFTimer* _fmfSessionResponseTimer;

}

@property (nonatomic,readonly) NSString * requestID;                            //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) FMFSession * fmfSession;                         //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,readonly) HMFTimer * fmfSessionResponseTimer;              //@synthesize fmfSessionResponseTimer=_fmfSessionResponseTimer - In the implementation block
-(id)description;
-(NSString *)requestID;
-(FMFSession *)fmfSession;
-(id)initWithResponseTimerDelegate:(id)arg1 ;
-(HMFTimer *)fmfSessionResponseTimer;
@end
