/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, CLLocation, NSArray, NSDictionary, PHPhotoLibrary;

@interface PHMemoryGenerationOptions : NSObject <NSCopying> {

	unsigned long long _reason;
	NSDate* _date;
	CLLocation* _location;
	NSArray* _peopleNames;
	NSArray* _existingMemories;
	NSArray* _blacklistedMemories;
	NSDictionary* _extraParameters;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,nonatomic) unsigned long long reason;                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) CLLocation * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSArray * peopleNames;                       //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,retain) NSArray * existingMemories;                  //@synthesize existingMemories=_existingMemories - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedMemories;               //@synthesize blacklistedMemories=_blacklistedMemories - In the implementation block
@property (nonatomic,retain) NSDictionary * extraParameters;              //@synthesize extraParameters=_extraParameters - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;               //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)reason;
-(NSDate *)date;
-(id)dictionaryRepresentation;
-(CLLocation *)location;
-(void)setDate:(NSDate *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSArray *)existingMemories;
-(void)setExistingMemories:(NSArray *)arg1 ;
-(NSArray *)blacklistedMemories;
-(void)setBlacklistedMemories:(NSArray *)arg1 ;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
@end

