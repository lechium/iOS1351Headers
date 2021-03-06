/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class NSData, NSString;

@interface GEODBWriteEntry : NSObject {

	GEOTileKey _key;
	NSData* _data;
	unsigned _edition;
	unsigned _set;
	unsigned _provider;
	NSString* _etag;

}

@property (nonatomic,readonly) GEOTileKey key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSData * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned edition;               //@synthesize edition=_edition - In the implementation block
@property (nonatomic,readonly) unsigned set;                   //@synthesize set=_set - In the implementation block
@property (nonatomic,readonly) unsigned provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSString * etag;                //@synthesize etag=_etag - In the implementation block
-(GEOTileKey)key;
-(unsigned)set;
-(NSData *)data;
-(NSString *)etag;
-(unsigned)provider;
-(unsigned)edition;
-(id)initWithKey:(GEOTileKey)arg1 data:(id)arg2 edition:(unsigned)arg3 set:(unsigned)arg4 provider:(unsigned)arg5 etag:(id)arg6 ;
@end

