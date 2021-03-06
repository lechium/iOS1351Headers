/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class NSString;

@interface PETEventProperty : NSObject {

	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long cardinality; 
@property (nonatomic,readonly) NSString * longestValueString; 
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
+(id)propertyWithName:(id)arg1 possibleValues:(id)arg2 ;
+(id)propertyWithName:(id)arg1 range:(NSRange)arg2 ;
+(id)propertyWithName:(id)arg1 enumMapping:(id)arg2 ;
+(id)propertyWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
+(id)propertyWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
+(id)propertyWithName:(id)arg1 range:(NSRange)arg2 clampValues:(BOOL)arg3 ;
+(id)propertyWithName:(id)arg1 rangeMin:(unsigned long long)arg2 rangeMax:(unsigned long long)arg3 ;
+(id)freeValuedPropertyWithName:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)isValidValue:(id)arg1 ;
-(id)possibleValues;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(unsigned long long)cardinality;
-(NSString *)longestValueString;
-(NSRange)validRange;
@end

