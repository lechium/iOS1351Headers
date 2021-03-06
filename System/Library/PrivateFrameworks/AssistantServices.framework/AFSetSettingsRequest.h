/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest {

	NSArray* _settings;
	BOOL _applyChanges;

}

@property (setter=_setSettings:,nonatomic,copy) NSArray * settings;                   //@synthesize settings=_settings - In the implementation block
@property (assign,setter=_setApplyChanges:,nonatomic) BOOL applyChanges;              //@synthesize applyChanges=_applyChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)settings;
-(id)createResponse;
-(id)createResponseWithSettingChanges:(id)arg1 ;
-(void)_setSettings:(id)arg1 ;
-(BOOL)applyChanges;
-(void)_setApplyChanges:(BOOL)arg1 ;
@end

