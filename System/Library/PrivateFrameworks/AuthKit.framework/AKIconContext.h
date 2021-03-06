/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber;

@interface AKIconContext : NSObject <NSSecureCoding> {

	NSData* _data;
	NSNumber* _scale;
	unsigned long long _maskingStyle;

}

@property (nonatomic,retain) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSNumber * scale;                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long maskingStyle;              //@synthesize maskingStyle=_maskingStyle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSNumber *)scale;
-(void)setScale:(NSNumber *)arg1 ;
-(void)setMaskingStyle:(unsigned long long)arg1 ;
-(unsigned long long)maskingStyle;
@end

