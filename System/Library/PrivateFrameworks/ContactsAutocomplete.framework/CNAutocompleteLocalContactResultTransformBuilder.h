/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, CNAutocompleteResultFactory;

@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject {

	NSMutableArray* _transforms;
	CNAutocompleteResultFactory* _factory;
	unsigned long long _builtContactType;

}

@property (assign) unsigned long long builtContactType;              //@synthesize builtContactType=_builtContactType - In the implementation block
+(id)resultValueForContactPropertyValue:(id)arg1 propertyKey:(id)arg2 contact:(id)arg3 ;
+(long long)addressTypeForProperty:(id)arg1 ;
+(id)localContactBuilderWithResultFactory:(id)arg1 ;
+(id)suggestedContactBuilderWithResultFactory:(id)arg1 ;
+(id)serverContactBuilderWithResultFactory:(id)arg1 ;
-(/*^block*/id)build;
-(id)initWithResultFactory:(id)arg1 ;
-(void)setBuiltContactType:(unsigned long long)arg1 ;
-(/*^block*/id)makeTransformForProperty:(id)arg1 ;
-(unsigned long long)builtContactType;
-(/*^block*/id)buildAggregateTransform;
-(void)addTransformForProperty:(id)arg1 ;
@end

