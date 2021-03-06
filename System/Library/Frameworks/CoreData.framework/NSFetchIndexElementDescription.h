/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSPropertyDescription, NSString, NSFetchIndexDescription;

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding> {

	NSPropertyDescription* _property;
	NSString* _propertyName;
	unsigned long long _collationType;
	NSFetchIndexDescription* _indexDescription;
	struct {
		unsigned _ascending : 1;
		unsigned _propertyIsRetained : 1;
		unsigned _unique : 1;
		unsigned _reservedEntityDescription : 29;
	}  _indexElementDescriptionFlags;

}

@property (retain,readonly) NSPropertyDescription * property; 
@property (retain,readonly) NSString * propertyName;                                    //@synthesize propertyName=_propertyName - In the implementation block
@property (assign) unsigned long long collationType; 
@property (getter=isAscending) BOOL ascending; 
@property (nonatomic,readonly) NSFetchIndexDescription * indexDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setAscending:(BOOL)arg1 ;
-(NSString *)propertyName;
-(BOOL)_isEditable;
-(void)_throwIfNotEditable;
-(NSPropertyDescription *)property;
-(id)initWithPropertyName:(id)arg1 collationType:(unsigned long long)arg2 ;
-(id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2 ;
-(unsigned long long)collationType;
-(BOOL)isAscending;
-(id)initWithPropertyName:(id)arg1 property:(id)arg2 collationType:(unsigned long long)arg3 ascending:(BOOL)arg4 ;
-(void)_setIsUnique:(BOOL)arg1 ;
-(NSFetchIndexDescription *)indexDescription;
-(void)_setIndexDescription:(id)arg1 ;
-(BOOL)_isUnique;
-(void)_setUniqueBit:(BOOL)arg1 ;
-(void)_validateCollationType:(unsigned long long)arg1 forProperty:(id)arg2 ;
-(id)_resolveProperty;
-(void)setCollationType:(unsigned long long)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
@end

