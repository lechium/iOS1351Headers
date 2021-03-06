/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTableColumnAlignment.h>
@class NSData;


@protocol _SFPBTableColumnAlignment <NSObject>
@property (assign,nonatomic) int columnAlignment; 
@property (assign,nonatomic) int dataAlignment; 
@property (assign,nonatomic) BOOL isEqualWidth; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setColumnAlignment:(int)arg1;
-(void)setDataAlignment:(int)arg1;
-(void)setIsEqualWidth:(BOOL)arg1;
-(int)columnAlignment;
-(int)dataAlignment;
-(BOOL)isEqualWidth;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBTableColumnAlignment : PBCodable <_SFPBTableColumnAlignment, NSSecureCoding> {

	BOOL _isEqualWidth;
	int _columnAlignment;
	int _dataAlignment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int columnAlignment;                   //@synthesize columnAlignment=_columnAlignment - In the implementation block
@property (assign,nonatomic) int dataAlignment;                     //@synthesize dataAlignment=_dataAlignment - In the implementation block
@property (assign,nonatomic) BOOL isEqualWidth;                     //@synthesize isEqualWidth=_isEqualWidth - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setColumnAlignment:(int)arg1 ;
-(void)setDataAlignment:(int)arg1 ;
-(void)setIsEqualWidth:(BOOL)arg1 ;
-(int)columnAlignment;
-(int)dataAlignment;
-(BOOL)isEqualWidth;
@end

