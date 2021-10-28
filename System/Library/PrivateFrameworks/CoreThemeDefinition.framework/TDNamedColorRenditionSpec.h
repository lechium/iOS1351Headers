/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString;

@interface TDNamedColorRenditionSpec : TDRenditionSpec

@property (assign,nonatomic) long long colorSpaceID; 
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) double red; 
@property (assign,nonatomic) double green; 
@property (assign,nonatomic) double blue; 
@property (nonatomic,retain) NSString * systemColorName; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)setColorPropertiesFromCGColor:(CGColorRef)arg1 ;
@end
