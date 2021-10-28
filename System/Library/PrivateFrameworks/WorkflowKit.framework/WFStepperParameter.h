/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>

@class NSNumber, NSString;

@interface WFStepperParameter : WFParameter {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSString* _singularNoun;
	NSString* _pluralNoun;

}

@property (nonatomic,copy,readonly) NSString * singularNoun;                            //@synthesize singularNoun=_singularNoun - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluralNoun;                              //@synthesize pluralNoun=_pluralNoun - In the implementation block
@property (nonatomic,readonly) NSNumber * minimumValue;                                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabelFormatString; 
-(id)initWithDefinition:(id)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(id)localizedLabel;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(NSString *)localizedLabelFormatString;
-(id)localizedLabelWithState:(id)arg1 includingPrefix:(BOOL)arg2 ;
-(NSString *)singularNoun;
-(NSString *)pluralNoun;
@end
