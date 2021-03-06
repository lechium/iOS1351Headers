/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileCacheReserved : NSObject {

	mutex _reservedLock;
	list<CacheItem, std::__1::allocator<CacheItem> >* _reservedList;
	unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > >* _reservedMap;
	unsigned long long _reservedMaxCapacity;
	unsigned long long _reservedMaxCost;
	unsigned long long _reservedCurrentCost;
	unsigned long long _reservedCurrentCount;

}
-(void)dealloc;
@end

