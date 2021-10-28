/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class NMSModelRecommendationsLibraryRequest;

@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation {

	NMSModelRecommendationsLibraryRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NMSModelRecommendationsLibraryRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setRequest:(NMSModelRecommendationsLibraryRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(NMSModelRecommendationsLibraryRequest *)request;
-(id)responseHandler;
-(void)_requestPlaylistsEntries;
-(void)_requestSongs;
-(void)_requestAlbums;
-(void)_requestPlaylists;
-(id)_mpIdentifierSetsFromStringIdentifiers:(id)arg1 ;
-(void)_requestContainerWithClass:(Class)arg1 ;
-(id)_modelObjectWithCachedArtworkFromModelObject:(id)arg1 ;
@end
