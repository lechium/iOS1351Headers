/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NPKExpressGymKitConflictResolver.h>

@protocol NPKExpressGymKitAvailabilityManagerDelegate;
@class PKPaymentPass, NSString;

@interface NPKExpressGymKitAvailabilityManager : NSObject <NPKExpressGymKitConflictResolver> {

	int _notificationToken;
	id<NPKExpressGymKitAvailabilityManagerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isExpressGymKitAllowed; 
@property (nonatomic,readonly) PKPaymentPass * conflictingPass; 
@property (assign,nonatomic,__weak) id<NPKExpressGymKitAvailabilityManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<NPKExpressGymKitAvailabilityManagerDelegate>)delegate;
-(void)setDelegate:(id<NPKExpressGymKitAvailabilityManagerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isExpressGymKitAllowed;
-(id)_conflictingPassUniqueID;
-(void)allowEnableExpressGymKitWithVisibleViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PKPaymentPass *)conflictingPass;
@end

