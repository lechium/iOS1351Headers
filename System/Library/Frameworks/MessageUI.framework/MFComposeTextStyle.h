/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MFComposeTextStyle : NSObject {

	NSString* _imageName;
	NSString* _accessibilityIdenitifier;
	SEL _editSelector;
	long long _styleType;

}

@property (nonatomic,copy,readonly) NSString * imageName;                             //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdenitifier;              //@synthesize accessibilityIdenitifier=_accessibilityIdenitifier - In the implementation block
@property (nonatomic,readonly) SEL editSelector;                                      //@synthesize editSelector=_editSelector - In the implementation block
@property (nonatomic,readonly) long long styleType;                                   //@synthesize styleType=_styleType - In the implementation block
+(id)accessibilityIdenitifierForTextStyleType:(long long)arg1 ;
+(id)imageNameForTextStyleType:(long long)arg1 ;
+(id)composeTextStyleForTextStyleType:(long long)arg1 ;
+(BOOL)isTextListStyleOrdered:(id)arg1 ;
+(SEL)editSelectorForTextStyleType:(long long)arg1 ;
-(NSString *)imageName;
-(long long)styleType;
-(id)initWithTextStyleType:(long long)arg1 ;
-(NSString *)accessibilityIdenitifier;
-(SEL)editSelector;
@end

