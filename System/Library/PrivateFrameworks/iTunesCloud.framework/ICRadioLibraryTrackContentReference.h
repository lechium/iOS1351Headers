/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioContentReference.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICRadioLibraryTrackContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {

	NSString* _albumArtistName;
	NSString* _albumName;
	NSString* _artistName;
	NSString* _composerName;
	NSString* _copyright;
	NSString* _genreName;
	NSString* _kind;
	NSString* _name;
	NSNumber* _discCount;
	NSNumber* _discNumber;
	NSNumber* _fileSize;
	NSNumber* _compilation;
	NSNumber* _duration;
	NSNumber* _storeAdamIdentifier;
	NSNumber* _storeCloudIdentifier;
	NSNumber* _trackCount;
	NSNumber* _trackNumber;
	NSNumber* _year;

}

@property (nonatomic,copy) NSString * albumArtistName;                               //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                     //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * composerName;                                  //@synthesize composerName=_composerName - In the implementation block
@property (nonatomic,copy) NSString * copyright;                                     //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,copy) NSNumber * discCount;                                     //@synthesize discCount=_discCount - In the implementation block
@property (nonatomic,copy) NSNumber * discNumber;                                    //@synthesize discNumber=_discNumber - In the implementation block
@property (nonatomic,copy) NSNumber * fileSize;                                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSString * genreName;                                     //@synthesize genreName=_genreName - In the implementation block
@property (getter=isCompilation,nonatomic,copy) NSNumber * compilation;              //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * kind;                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * storeAdamIdentifier;                           //@synthesize storeAdamIdentifier=_storeAdamIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeCloudIdentifier;                          //@synthesize storeCloudIdentifier=_storeCloudIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * trackCount;                                    //@synthesize trackCount=_trackCount - In the implementation block
@property (nonatomic,copy) NSNumber * trackNumber;                                   //@synthesize trackNumber=_trackNumber - In the implementation block
@property (nonatomic,copy) NSNumber * year;                                          //@synthesize year=_year - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setYear:(NSNumber *)arg1 ;
-(NSNumber *)year;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)fileSize;
-(long long)contentType;
-(NSNumber *)duration;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)trackCount;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)discNumber;
-(NSNumber *)discCount;
-(NSString *)composerName;
-(id)isCompilation;
-(NSNumber *)trackNumber;
-(NSString *)albumArtistName;
-(void)setCompilation:(NSNumber *)arg1 ;
-(void)setDiscCount:(NSNumber *)arg1 ;
-(void)setTrackCount:(NSNumber *)arg1 ;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(void)setDiscNumber:(NSNumber *)arg1 ;
-(void)setTrackNumber:(NSNumber *)arg1 ;
-(void)setComposerName:(NSString *)arg1 ;
-(NSString *)genreName;
-(void)setGenreName:(NSString *)arg1 ;
-(void)setCopyright:(NSString *)arg1 ;
-(NSString *)copyright;
-(id)matchDictionary;
-(NSNumber *)storeAdamIdentifier;
-(void)setStoreAdamIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)storeCloudIdentifier;
-(void)setStoreCloudIdentifier:(NSNumber *)arg1 ;
@end

