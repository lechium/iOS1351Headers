/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCContentContext;
@class FCFetchedValueManager;

@interface FCVanityURLRedirectService : NSObject {

	FCFetchedValueManager* _vanityURLMappingManager;
	id<FCContentContext> _contentContext;

}

@property (nonatomic,readonly) id<FCContentContext> contentContext;                          //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * vanityURLMappingManager;              //@synthesize vanityURLMappingManager=_vanityURLMappingManager - In the implementation block
-(id)init;
-(id)initWithContentContext:(id)arg1 ;
-(id<FCContentContext>)contentContext;
-(id)destinationURLForURL:(id)arg1 ;
-(id)_destinationURLForURL:(id)arg1 ;
-(FCFetchedValueManager *)vanityURLMappingManager;
-(BOOL)hasRedirectForURL:(id)arg1 ;
-(void)resolveURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)acquireHoldTokenOnUnderlyingAssets;
-(void)updateUnderlyingMappingWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

