/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLCPLPlistHandler : NSObject
+(void)initialize;
+(void)saveCPLPlistObject:(id)arg1 forKey:(id)arg2 pathManager:(id)arg3 ;
+(id)readCPLPlistObjectWithKey:(id)arg1 pathManager:(id)arg2 ;
+(BOOL)CPLPlistFileExistsWithPathManager:(id)arg1 ;
+(void)deleteCPLPlistWithPathManager:(id)arg1 ;
+(id)_readCPLPlistWithPathManager:(id)arg1 error:(id*)arg2 ;
@end

