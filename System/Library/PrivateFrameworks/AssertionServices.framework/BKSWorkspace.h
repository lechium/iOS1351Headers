/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBSServiceDelegate.h>

@class NSString;

@interface BKSWorkspace : NSObject <RBSServiceDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)service:(id)arg1 didReceiveInheritances:(id)arg2 ;
-(void)service:(id)arg1 didLoseInheritances:(id)arg2 ;
@end
