/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class NSString;

@interface _WKElementAction : NSObject {

	RetainPtr<NSString>* _title;
	/*^block*/id _actionHandler;
	/*^block*/id _dismissalHandler;
	WeakObjCPtr<WKActionSheetAssistant> _defaultActionSheetAssistant;
	long long _type;

}

@property (nonatomic,readonly) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,copy) id dismissalHandler;               //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
+(id)imageForElementActionType:(long long)arg1 ;
+(id)_elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
+(id)_elementActionWithType:(long long)arg1 customTitle:(id)arg2 assistant:(id)arg3 ;
+(id)elementActionWithType:(long long)arg1 customTitle:(id)arg2 ;
+(id)elementActionWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
+(id)elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
+(id)_elementActionWithType:(long long)arg1 assistant:(id)arg2 ;
+(id)elementActionWithType:(long long)arg1 ;
+(long long)elementActionTypeForUIActionIdentifier:(id)arg1 ;
-(void)dealloc;
-(long long)type;
-(NSString *)title;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(void)runActionWithElementInfo:(id)arg1 ;
-(id)_initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 type:(long long)arg3 assistant:(id)arg4 ;
-(void)_runActionWithElementInfo:(id)arg1 forActionSheetAssistant:(id)arg2 ;
-(id)uiActionForElementInfo:(id)arg1 ;
@end

