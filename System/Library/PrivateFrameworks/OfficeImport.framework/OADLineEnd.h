/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADLineEnd : OADProperties <NSCopying> {

	unsigned char mType;
	unsigned char mWidth;
	unsigned char mLength;
	unsigned mIsTypeOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsLengthOverridden : 1;

}
+(id)defaultProperties;
+(id)stringForLineEndType:(unsigned char)arg1 ;
+(id)stringForLineEndWidth:(unsigned char)arg1 ;
+(id)stringForLineEndLength:(unsigned char)arg1 ;
-(unsigned char)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(void)setLength:(unsigned char)arg1 ;
-(unsigned char)width;
-(void)setWidth:(unsigned char)arg1 ;
-(id)initWithDefaults;
-(BOOL)isWidthOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isTypeOverridden;
-(BOOL)isLengthOverridden;
-(id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3 ;
@end

