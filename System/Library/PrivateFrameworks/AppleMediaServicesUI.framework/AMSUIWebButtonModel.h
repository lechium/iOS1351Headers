/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUIWebModel.h>

@protocol AMSUIWebActionRunnable;
@class NSString, NSDictionary;

@interface AMSUIWebButtonModel : AMSUIWebModel {

	BOOL _bold;
	BOOL _enabled;
	id<AMSUIWebActionRunnable> _action;
	NSString* _title;
	NSDictionary* _underlyingJSObject;

}

@property (nonatomic,retain) NSDictionary * underlyingJSObject;              //@synthesize underlyingJSObject=_underlyingJSObject - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> action;              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL bold;                                      //@synthesize bold=_bold - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id<AMSUIWebActionRunnable>)action;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(void)setBold:(BOOL)arg1 ;
-(BOOL)bold;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)underlyingJSObject;
-(id)createDialogAction;
-(void)setUnderlyingJSObject:(NSDictionary *)arg1 ;
@end
