/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileInstallation/MobileInstallation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface MIStoreMetadataSubGenre : NSObject <NSSecureCoding, NSCopying> {

	NSString* _genre;
	NSNumber* _genreID;

}

@property (nonatomic,copy) NSString * genre;                                         //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) NSNumber * genreID;                                     //@synthesize genreID=_genreID - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)genre;
-(NSNumber *)genreID;
-(void)setGenre:(NSString *)arg1 ;
-(void)setGenreID:(NSNumber *)arg1 ;
-(id)initWithGenre:(id)arg1 genreID:(id)arg2 ;
@end
