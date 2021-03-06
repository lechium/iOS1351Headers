/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSFileAccessArbiterXPCInterface <NSFileAccessArbiter>
@required
-(oneway void)revokeAccessClaimForID:(id)arg1;
-(oneway void)removePresenterWithID:(id)arg1;
-(oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2;
-(void)provideSubarbiterDebugInfoIncludingEverything:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)grantAccessClaim:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 ubiquityAttributes:(id)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7;
-(void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(/*^block*/id)arg7;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)prepareToArbitrateForURLs:(id)arg1;
-(void)startArbitratingWithReply:(/*^block*/id)arg1;
-(void)getItemHasPresentersAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performBarrierWithCompletionHandler:(/*^block*/id)arg1;

@end

