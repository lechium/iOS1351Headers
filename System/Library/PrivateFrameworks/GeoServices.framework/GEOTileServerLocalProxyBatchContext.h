/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOTileKeyList, GEOTileRequester;

@interface GEOTileServerLocalProxyBatchContext : NSObject {

	GEOTileKeyList* _fullList;
	GEOTileKeyList* _interestList;
	GEOTileKeyList* _networkList;
	GEOTileKeyList* _pendingNetworkList;
	GEOTileKeyList* _cacheMissNoDataList;
	GEOTileKeyList* _cacheMissStaleDataList;
	GEOTileKeyList* _cacheMissStaleUnusableDataList;
	unsigned char _loadReason;
	GEOTileRequester* _tileRequester;

}

@property (nonatomic,retain) GEOTileKeyList * fullList;                                    //@synthesize fullList=_fullList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * interestList;                                //@synthesize interestList=_interestList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * networkList;                                 //@synthesize networkList=_networkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * pendingNetworkList;                          //@synthesize pendingNetworkList=_pendingNetworkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * cacheMissNoDataList;                         //@synthesize cacheMissNoDataList=_cacheMissNoDataList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * cacheMissStaleDataList;                      //@synthesize cacheMissStaleDataList=_cacheMissStaleDataList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * cacheMissStaleUnusableDataList;              //@synthesize cacheMissStaleUnusableDataList=_cacheMissStaleUnusableDataList - In the implementation block
@property (assign,nonatomic) unsigned char loadReason;                                     //@synthesize loadReason=_loadReason - In the implementation block
@property (nonatomic,retain) GEOTileRequester * tileRequester;                             //@synthesize tileRequester=_tileRequester - In the implementation block
-(unsigned char)loadReason;
-(GEOTileKeyList *)interestList;
-(GEOTileRequester *)tileRequester;
-(GEOTileKeyList *)pendingNetworkList;
-(void)setTileRequester:(GEOTileRequester *)arg1 ;
-(void)setFullList:(GEOTileKeyList *)arg1 ;
-(void)setInterestList:(GEOTileKeyList *)arg1 ;
-(void)setCacheMissNoDataList:(GEOTileKeyList *)arg1 ;
-(void)setCacheMissStaleDataList:(GEOTileKeyList *)arg1 ;
-(void)setCacheMissStaleUnusableDataList:(GEOTileKeyList *)arg1 ;
-(void)setNetworkList:(GEOTileKeyList *)arg1 ;
-(void)setLoadReason:(unsigned char)arg1 ;
-(void)setPendingNetworkList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)cacheMissStaleUnusableDataList;
-(GEOTileKeyList *)cacheMissStaleDataList;
-(GEOTileKeyList *)cacheMissNoDataList;
-(GEOTileKeyList *)networkList;
-(GEOTileKeyList *)fullList;
@end

