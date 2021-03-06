/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject {

	HMCharacteristicRequest* _request;
	NSError* _error;

}

@property (nonatomic,retain) HMCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * error;                              //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSError *)error;
-(void)setRequest:(HMCharacteristicRequest *)arg1 ;
-(HMCharacteristicRequest *)request;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
@end

