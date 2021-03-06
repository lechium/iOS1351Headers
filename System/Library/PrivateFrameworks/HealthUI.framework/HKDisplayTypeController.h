/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKWheelchairUseCharacteristicCacheObserver.h>

@class _HKWheelchairUseCharacteristicCache, NSArray, NSDictionary;

@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver> {

	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;
	NSArray* _displayTypes;
	NSDictionary* _displayTypesByIdentifier;
	NSDictionary* _displayTypesByCategoryIdentifier;
	NSDictionary* _displayTypesByObjectType;

}
+(id)sharedInstance;
-(id)init;
-(void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(BOOL)arg2 ;
-(id)displayTypeForObjectType:(id)arg1 ;
-(id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1 ;
-(void)setWheelchairUseCharacteristicCache:(id)arg1 ;
-(id)displayTypeWithIdentifier:(id)arg1 ;
-(id)displayTypesForCategoryIdentifier:(long long)arg1 ;
-(id)allDisplayTypes;
@end

