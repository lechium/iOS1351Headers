/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICDelegateToken, NSError, NSString;

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject {

	ICDelegateToken* _delegateToken;
	NSError* _resultError;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy,readonly) ICDelegateToken * delegateToken;              //@synthesize delegateToken=_delegateToken - In the implementation block
@property (nonatomic,copy,readonly) NSError * resultError;                        //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(NSString *)storefrontIdentifier;
-(id)initWithDelegateToken:(id)arg1 storefrontIdentifier:(id)arg2 resultError:(id)arg3 ;
-(ICDelegateToken *)delegateToken;
-(NSError *)resultError;
@end
