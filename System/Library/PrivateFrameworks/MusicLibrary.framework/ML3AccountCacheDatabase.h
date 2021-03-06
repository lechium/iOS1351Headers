/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ML3MusicLibrary;

@interface ML3AccountCacheDatabase : NSObject {

	NSMutableDictionary* _propertiesCache;
	NSObject*<OS_dispatch_queue> accessQueue;
	ML3MusicLibrary* _library;

}
-(id)initWithLibrary:(id)arg1 ;
-(BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(BOOL)setAppleID:(id)arg1 altDSID:(id)arg2 forDSID:(unsigned long long)arg3 ;
-(id)_cacheEntryForDSID:(unsigned long long)arg1 ;
-(void)_setCacheEntry:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(BOOL)getPropertiesForDSID:(unsigned long long)arg1 appleID:(id*)arg2 altDSID:(id*)arg3 ;
-(id)appleIDForDSID:(unsigned long long)arg1 ;
@end

