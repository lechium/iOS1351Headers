/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBContactImage.h>
@class NSArray, NSData;


@protocol _SFPBContactImage <NSObject>
@property (nonatomic,copy) NSArray * contactIdentifiers; 
@property (assign,nonatomic) BOOL threeDTouchEnabled; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(id)arg1;
-(NSData *)jsonData;
-(BOOL)threeDTouchEnabled;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addContactIdentifiers:(id)arg1;
-(void)clearContactIdentifiers;
-(unsigned long long)contactIdentifiersCount;
-(id)contactIdentifiersAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding> {

	BOOL _threeDTouchEnabled;
	NSArray* _contactIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * contactIdentifiers;              //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                 //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)threeDTouchEnabled;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addContactIdentifiers:(id)arg1 ;
-(void)clearContactIdentifiers;
-(unsigned long long)contactIdentifiersCount;
-(id)contactIdentifiersAtIndex:(unsigned long long)arg1 ;
@end
