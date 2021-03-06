/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKDashboardItem.h>

@class NSString;

@interface PKDashboardTextActionItem : NSObject <PKDashboardItem> {

	long long _style;
	NSString* _title;
	NSString* _subtitle;
	/*^block*/id _action;

}

@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) id action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)action;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setAction:(id)arg1 ;
@end

