/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, TDSchemaCategory, NSSet;

@interface TDSchemaDefinition : NSManagedObject

@property (nonatomic,retain) NSString * name; 
@property (assign) BOOL published; 
@property (nonatomic,retain) TDSchemaCategory * category; 
@property (nonatomic,retain) NSSet * parts; 
+(const SCD_Struct_TD2*)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2 ;
+(unsigned long long)elementDefinitionCountWithSchema:(id)arg1 ;
+(const SCD_Struct_TD2*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 withSchema:(id)arg2 ;
-(id)displayName;
-(id)previewImage;
@end
