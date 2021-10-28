/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/_SFPopoverSourceInfo.h>

@class UIView, UIBarButtonItem, NSString;

@interface SFUIBarButtonItemPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {

	UIBarButtonItem* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect popoverSourceRect; 
@property (nonatomic,readonly) UIView * popoverSourceView; 
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
-(id)initWithItem:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
@end
