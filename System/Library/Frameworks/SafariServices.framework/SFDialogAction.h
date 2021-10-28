/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SFDialogAction : NSObject {

	long long _activatingKeyboardShortcut;
	long long _actionType;
	NSString* _title;

}

@property (nonatomic,readonly) long long activatingKeyboardShortcut;              //@synthesize activatingKeyboardShortcut=_activatingKeyboardShortcut - In the implementation block
@property (nonatomic,readonly) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
+(id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 ;
-(NSString *)title;
-(long long)actionType;
-(long long)activatingKeyboardShortcut;
-(id)initWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 ;
@end
