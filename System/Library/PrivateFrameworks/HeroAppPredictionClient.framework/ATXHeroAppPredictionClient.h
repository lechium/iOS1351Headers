/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HeroAppPredictionClient.framework/HeroAppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface ATXHeroAppPredictionClient : NSObject {

	NSXPCConnection* _xpcConnection;

}
-(id)init;
-(void)dealloc;
-(void)donateHeroAppPredictionsWithBundleIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidatePredictionsWithCompletion:(/*^block*/id)arg1 ;
@end
