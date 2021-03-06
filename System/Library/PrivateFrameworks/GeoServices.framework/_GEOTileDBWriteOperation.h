/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _GEOTileDBWriteOperation <NSObject>
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@required
-(unsigned long long)sizeInBytes;
-(void)performWithDB:(id)arg1;
-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg1;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4;

@end

