/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REMColor : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _colorRGBSpace;
	double _blue;
	double _red;
	double _green;
	double _alpha;
	NSString* _daSymbolicColorName;
	NSString* _daHexString;
	NSString* _ckSymbolicColorName;

}

@property (nonatomic,readonly) NSString * daSymbolicColorName;                //@synthesize daSymbolicColorName=_daSymbolicColorName - In the implementation block
@property (nonatomic,readonly) NSString * daHexString;                        //@synthesize daHexString=_daHexString - In the implementation block
@property (nonatomic,readonly) NSString * ckSymbolicColorName;                //@synthesize ckSymbolicColorName=_ckSymbolicColorName - In the implementation block
@property (nonatomic,readonly) unsigned long long colorRGBSpace;              //@synthesize colorRGBSpace=_colorRGBSpace - In the implementation block
@property (nonatomic,readonly) double blue;                                   //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double red;                                    //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;                                  //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double alpha;                                  //@synthesize alpha=_alpha - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)blackColor;
+(id)whiteColor;
+(id)grayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)clearColor;
+(id)brownColor;
+(id)lightGrayColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5 ;
+(id)colorWithHexString:(id)arg1 ;
+(id)colorWithDictionaryData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 ;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithHexString:(id)arg1 ;
-(id)hexString;
-(id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2 ckSymbolicColorName:(id)arg3 ;
-(id)hexStringWithAlpha;
-(NSString *)daSymbolicColorName;
-(NSString *)daHexString;
-(NSString *)ckSymbolicColorName;
-(unsigned long long)colorRGBSpace;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 daSymbolicColorName:(id)arg6 daHexString:(id)arg7 ckSymbolicColorName:(id)arg8 ;
-(id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2 ;
-(id)initWithCKSymbolicColorName:(id)arg1 hexString:(id)arg2 ;
-(id)archivedDictionaryDataWithError:(id*)arg1 ;
@end

