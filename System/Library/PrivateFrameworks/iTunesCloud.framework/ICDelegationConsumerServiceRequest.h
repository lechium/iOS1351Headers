/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICRequestContext, NSDictionary;

@interface ICDelegationConsumerServiceRequest : NSObject {

	ICRequestContext* _requestContext;
	double _timeoutInterval;
	NSDictionary* _userIdentityDelegationAccountUUIDs;

}

@property (nonatomic,copy,readonly) ICRequestContext * requestContext;                              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userIdentityDelegationAccountUUIDs;              //@synthesize userIdentityDelegationAccountUUIDs=_userIdentityDelegationAccountUUIDs - In the implementation block
-(double)timeoutInterval;
-(ICRequestContext *)requestContext;
-(NSDictionary *)userIdentityDelegationAccountUUIDs;
-(id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1 requestContext:(id)arg2 timeoutInterval:(double)arg3 ;
@end
