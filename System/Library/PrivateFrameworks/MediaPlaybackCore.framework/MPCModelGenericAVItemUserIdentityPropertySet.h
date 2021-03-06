/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICUserIdentityProperties;

@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject {

	ICUserIdentityProperties* _identityProperties;
	ICUserIdentityProperties* _delegatedIdentityProperties;

}

@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;                       //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * delegatedIdentityProperties;              //@synthesize delegatedIdentityProperties=_delegatedIdentityProperties - In the implementation block
+(void)identityPropertySetFromRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ICUserIdentityProperties *)identityProperties;
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(ICUserIdentityProperties *)delegatedIdentityProperties;
-(id)initWithIdentityProperties:(id)arg1 delegatedIdentityProperties:(id)arg2 ;
-(void)setDelegatedIdentityProperties:(ICUserIdentityProperties *)arg1 ;
@end

