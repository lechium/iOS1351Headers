/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIMediaQueryFeature.h>

@class NSString;

@interface SKUIMediaQueryNetworkTypeFeature : SKUIMediaQueryFeature {

	NSString* _value;

}
+(BOOL)supportsFeatureName:(id)arg1 ;
-(id)description;
-(id)requiredKeys;
-(id)initWithFeatureName:(id)arg1 value:(id)arg2 ;
-(BOOL)evaluateWithValues:(id)arg1 ;
-(id)notificationNames;
@end

