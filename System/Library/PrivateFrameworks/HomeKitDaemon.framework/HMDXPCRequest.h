/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

@interface HMDXPCRequest : HMFObject {

	NSDate* _startTime;
	NSString* _messageName;
	long long _qualityOfService;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSString * messageName;               //@synthesize messageName=_messageName - In the implementation block
@property (readonly) long long qualityOfService;                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(long long)qualityOfService;
-(id)responseHandler;
-(NSDate *)startTime;
-(NSString *)messageName;
-(id)initWithMessageName:(id)arg1 qualityOfService:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
@end
