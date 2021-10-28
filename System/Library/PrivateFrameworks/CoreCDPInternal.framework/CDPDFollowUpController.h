/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPDAuthListener.h>

@class FLFollowUpController, CDPDFollowUpFactory, NSString;

@interface CDPDFollowUpController : NSObject <CDPDAuthListener> {

	FLFollowUpController* _followUpController;
	CDPDFollowUpFactory* _followUpFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)clearFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
-(void)securityLevelChanged:(BOOL)arg1 ;
-(BOOL)postFollowUpItemForContext:(id)arg1 error:(id*)arg2 ;
-(id)_followUpControllerForContext:(id)arg1 ;
@end
