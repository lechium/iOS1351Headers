/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {

	BOOL _compilation;
	long long _albumArtistPersistentID;
	NSData* _groupingKey;
	NSString* _feedURL;
	long long _seasonNumber;

}

@property (nonatomic,readonly) long long albumArtistPersistentID;              //@synthesize albumArtistPersistentID=_albumArtistPersistentID - In the implementation block
@property (nonatomic,readonly) NSData * groupingKey;                           //@synthesize groupingKey=_groupingKey - In the implementation block
@property (nonatomic,readonly) NSString * feedURL;                             //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) long long seasonNumber;                         //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) BOOL compilation;                               //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,readonly) NSData * keyValue; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)albumArtistPersistentID;
-(long long)seasonNumber;
-(BOOL)compilation;
-(id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(BOOL)arg5 ;
-(NSData *)groupingKey;
-(NSData *)keyValue;
-(NSString *)feedURL;
@end

