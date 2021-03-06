/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETEventProperty.h>

@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {

	NSDictionary* _enumMap;
	BOOL _autoSanitizeValues;

}
-(id)description;
-(BOOL)isValidValue:(id)arg1 ;
-(id)possibleValues;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(unsigned long long)cardinality;
-(id)longestValueString;
-(NSRange)validRange;
-(id)initWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
@end

