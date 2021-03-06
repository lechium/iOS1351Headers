/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOTileLoaderObserver <NSObject>
@required
-(void)tileLoader:(id)arg1 loadedTileKey:(const GEOTileKey*)arg2 fromSource:(long long)arg3 withOptions:(unsigned long long)arg4;
-(void)tileLoader:(id)arg1 failedTileKey:(const GEOTileKey*)arg2 error:(id)arg3 withOptions:(unsigned long long)arg4;

@end

