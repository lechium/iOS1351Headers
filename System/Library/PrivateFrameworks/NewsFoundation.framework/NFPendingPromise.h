/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NFPromise;

@interface NFPendingPromise : NSObject {

	NFPromise* _promise;
	/*^block*/id _resolve;
	/*^block*/id _reject;

}

@property (nonatomic,retain) NFPromise * promise;              //@synthesize promise=_promise - In the implementation block
@property (nonatomic,copy) id resolve;                         //@synthesize resolve=_resolve - In the implementation block
@property (nonatomic,copy) id reject;                          //@synthesize reject=_reject - In the implementation block
-(id)init;
-(id)resolve;
-(NFPromise *)promise;
-(void)setPromise:(NFPromise *)arg1 ;
-(id)reject;
-(void)setResolve:(id)arg1 ;
-(void)setReject:(id)arg1 ;
@end

