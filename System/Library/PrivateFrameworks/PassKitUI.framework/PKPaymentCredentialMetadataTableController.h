/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSString;

@interface PKPaymentCredentialMetadataTableController : NSObject <UITableViewDelegate, UITableViewDataSource> {

	NSArray* _metadata;
	long long _setupContext;
	long long _cellStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)initWithMetadata:(id)arg1 setupContext:(long long)arg2 cellStyle:(long long)arg3 ;
@end

