/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface CLSPublicEventCacheCreatorResult : NSObject {

	NSDictionary* _resolvedPublicEventsByTimeLocationIdentifier;
	NSDictionary* _invalidationTokenByTimeLocationIdentifier;
	unsigned long long _numberOfRequests;

}

@property (nonatomic,retain) NSDictionary * resolvedPublicEventsByTimeLocationIdentifier;              //@synthesize resolvedPublicEventsByTimeLocationIdentifier=_resolvedPublicEventsByTimeLocationIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * invalidationTokenByTimeLocationIdentifier;                 //@synthesize invalidationTokenByTimeLocationIdentifier=_invalidationTokenByTimeLocationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRequests;                                      //@synthesize numberOfRequests=_numberOfRequests - In the implementation block
-(id)init;
-(void)setNumberOfRequests:(unsigned long long)arg1 ;
-(void)setInvalidationTokenByTimeLocationIdentifier:(NSDictionary *)arg1 ;
-(void)setResolvedPublicEventsByTimeLocationIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)resolvedPublicEventsByTimeLocationIdentifier;
-(NSDictionary *)invalidationTokenByTimeLocationIdentifier;
-(unsigned long long)numberOfRequests;
@end

