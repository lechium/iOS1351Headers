/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface NMSMusicRecommendationsRequest : NSObject {

	BOOL _useCachedDataOnly;
	NSData* _cachedData;

}

@property (assign,nonatomic) BOOL useCachedDataOnly;              //@synthesize useCachedDataOnly=_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) NSData * cachedData;                 //@synthesize cachedData=_cachedData - In the implementation block
-(NSData *)cachedData;
-(void)setCachedData:(NSData *)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_continueToForYouRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_continueToProcessResultsWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_performForYouRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_continueToLookupWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_continueToLibraryImportWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_performLookupRequestWithModelObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performLibraryImportChangeRequestWithModelObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)useCachedDataOnly;
-(void)setUseCachedDataOnly:(BOOL)arg1 ;
@end
