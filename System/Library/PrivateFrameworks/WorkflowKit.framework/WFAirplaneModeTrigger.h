/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFAirplaneModeTrigger : WFTrigger {

	BOOL _onEnable;
	BOOL _onDisable;

}

@property (assign,nonatomic) BOOL onEnable;               //@synthesize onEnable=_onEnable - In the implementation block
@property (assign,nonatomic) BOOL onDisable;              //@synthesize onDisable=_onDisable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)onEnable;
-(void)setOnEnable:(BOOL)arg1 ;
-(BOOL)onDisable;
-(void)setOnDisable:(BOOL)arg1 ;
@end
