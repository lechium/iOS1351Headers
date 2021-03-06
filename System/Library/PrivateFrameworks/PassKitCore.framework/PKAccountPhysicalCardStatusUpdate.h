/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSArray, NSString;

@interface PKAccountPhysicalCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	unsigned long long _reason;
	NSArray* _updatedPhysicalCards;

}

@property (assign,nonatomic) unsigned long long reason;                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * updatedPhysicalCards;              //@synthesize updatedPhysicalCards=_updatedPhysicalCards - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSArray *)updatedPhysicalCards;
-(void)setUpdatedPhysicalCards:(NSArray *)arg1 ;
@end

