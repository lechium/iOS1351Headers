/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOSQLiteDB, GEODefaultsDBDict, geo_isolater;

@interface GEOConfigPersistence : NSObject {

	GEOSQLiteDB* _db;
	GEODefaultsDBDict* _cache;
	geo_isolater* _cacheIsolator;

}
+(id)shared;
+(BOOL)_setup:(id)arg1 ;
-(void)dealloc;
-(void)tearDown;
-(id)initWithDBPath:(id)arg1 ;
-(id)_valueForKeyPath:(id)arg1 key:(id*)arg2 createOrUpdate:(/*^block*/id)arg3 ;
-(void)setDefault:(id)arg1 forKeyPath:(id)arg2 ;
-(id)defaultForKeyPath:(id)arg1 ;
@end
