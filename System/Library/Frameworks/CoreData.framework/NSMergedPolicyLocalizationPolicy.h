/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSValidationErrorLocalizationPolicy.h>

@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {

	NSSet* _mergedPolicies;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPolicy:(id)arg1 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
@end

