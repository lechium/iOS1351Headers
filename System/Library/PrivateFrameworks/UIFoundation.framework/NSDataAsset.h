/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CUINamedData, NSString, NSData;

@interface NSDataAsset : NSObject <NSCopying> {

	CUINamedData* _namedData;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSString * typeIdentifier; 
+(id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2 ;
+(id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithName:(id)arg1 ;
-(NSString *)typeIdentifier;
-(id)initWithName:(id)arg1 bundle:(id)arg2 ;
@end

